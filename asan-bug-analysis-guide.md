# Using AddressSanitizer to Analyze the eraseProjIncFor Bug

## Overview

This guide explains how to use AddressSanitizer (ASan) to detect whether the `eraseProjIncFor` mask-overwrite bug causes actual memory corruption in runtime execution.

## What ASan Will Detect

If the bug is real, ASan should catch:
- **Use-after-free**: Accessing deallocated field values in the fast path
- **Double-free**: If reference counting underflows cause multiple deallocations
- **Heap buffer overflow**: If corrupted pointers access invalid memory

## Prerequisites

- Lean source code in `/build`
- GCC or Clang with ASan support
- Test case: `/build/test_erase_proj_inc_bug.lean`

## Step 1: Clean Previous Build

```bash
cd /build
# Clean any existing build artifacts
make -C build/release clean
# Or for a complete clean:
rm -rf build/release && mkdir -p build/release
```

## Step 2: Build Lean with AddressSanitizer

### Configure Build with ASan Flags
```bash
cd /build/build/release

# Set ASan compilation flags
export CC="clang"
export CXX="clang++"
export CFLAGS="-fsanitize=address -fno-omit-frame-pointer -g -O1"
export CXXFLAGS="-fsanitize=address -fno-omit-frame-pointer -g -O1"
export LDFLAGS="-fsanitize=address"

# Configure cmake with ASan
cmake ../../ \
  -DCMAKE_BUILD_TYPE=Debug \
  -DCMAKE_C_FLAGS="${CFLAGS}" \
  -DCMAKE_CXX_FLAGS="${CXXFLAGS}" \
  -DCMAKE_EXE_LINKER_FLAGS="${LDFLAGS}"
```

### Build Lean
```bash
# Build with limited parallelism (ASan uses more memory)
make -j4
```

**Note**: ASan builds are slower and use ~3x more memory. Reduce parallelism if build fails due to OOM.

## Step 3: Prepare Test Case

Modify the test case to force problematic execution paths:

```bash
cat > /build/test_asan_bug.lean << 'EOF'
structure Triple where
  fst : Nat
  snd : Nat
  thd : Nat

-- Force inlining to create duplicate projections
@[inline] def use_first_field (p : Triple) (flag : Bool) : Nat :=
  if flag then p.fst + 1 else p.fst + 2

-- Force large numbers to ensure boxing/reference counting
def make_large (n : Nat) : Nat :=
  n + 1000000000000000000

-- Test function that should trigger the bug
def test_asan (p : Triple) (flag : Bool) : Triple :=
  let big_p : Triple := ⟨make_large p.fst, make_large p.snd, make_large p.thd⟩
  let a := use_first_field big_p flag
  match big_p with
  | ⟨x, y, z⟩ => ⟨a + x, y, z⟩

-- Main function to execute the test
def main : IO Unit := do
  -- Test multiple times to increase chances of triggering bug
  for i in [0:100] do
    let result := test_asan ⟨i, i+1, i+2⟩ (i % 2 == 0)
    -- Force evaluation and prevent optimization
    IO.println s!"Iteration {i}: {result.fst}"
EOF
```

## Step 4: Run Under AddressSanitizer

### Basic Execution
```bash
cd /build
build/release/bin/lean --run test_asan_bug.lean
```

### Enhanced ASan Configuration
For more detailed detection, set ASan environment variables:
```bash
export ASAN_OPTIONS="check_initialization_order=1:strict_init_order=1:detect_odr_violation=2:detect_leaks=1:halt_on_error=1:verbosity=1"
export MSAN_OPTIONS="print_stats=1"

build/release/bin/lean --run test_asan_bug.lean
```

### Alternative: Compile to Executable
```bash
# Add to test file:
echo 'def main : IO Unit := test_main' >> test_asan_bug.lean

# Compile and run
build/release/bin/lean -o test_asan_bug test_asan_bug.lean
./test_asan_bug
```

## Step 5: Interpreting ASan Output

### If Bug Exists: Expected ASan Error
```
=================================================================
==12345==ERROR: AddressSanitizer: use-after-free on address 0x7fff12345678
READ of size 8 at 0x7fff12345678 thread T0
    #0 0x... in lean_nat_add /build/src/runtime/object.cpp:123
    #1 0x... in test_asan /build/test_asan_bug.lean:15
    #2 0x... in main /build/test_asan_bug.lean:23

0x7fff12345678 is located 0 bytes inside of 24-byte region freed here:
    #0 0x... in free (/usr/lib/x86_64-linux-gnu/libc.so.6+0x...)
    #1 0x... in lean_dec_ref_cold /build/src/runtime/object.cpp:456
    #2 0x... in lean_dec /build/src/include/lean/lean.h:234
    #3 0x... in test_asan /build/test_asan_bug.lean:15

previously allocated by thread T0 here:
    #0 0x... in malloc (/usr/lib/x86_64-linux-gnu/libc.so.6+0x...)
    #1 0x... in lean_alloc_ctor /build/src/runtime/object.cpp:123
    #2 0x... in lean_ctor_get /build/src/runtime/object.cpp:167

SUMMARY: AddressSanitizer: use-after-free
```

### If Bug Doesn't Exist: Clean Execution
```
Iteration 0: 2000000000000000001
Iteration 1: 2000000000000000003
...
Iteration 99: 2000000000000000199
```

## Step 6: Analysis and Debugging

### Correlate with Compiler Traces
Run with compiler traces to see the IR:
```bash
cat > /build/test_with_trace.lean << 'EOF'
-- Same test content as above, but add:
set_option trace.Compiler.explicitRc true in
set_option trace.Compiler.expandResetReuse true in
def test_traced := test_asan
EOF

build/release/bin/lean test_with_trace.lean 2>&1 | tee compiler_trace.log
```

### Examine Reference Counting in IR
Look for patterns in the trace:
- `let fst.X := oproj[0] p;` without subsequent `inc fst.X;`
- `dec fst.X;` without corresponding `inc fst.X;`
- Missing `inc` instructions in fast path after `expandResetReuse`

## Step 7: Verification Steps

### Test Different Scenarios
```bash
# Test with different input sizes
for size in 10 100 1000; do
  echo "Testing with size $size"
  sed "s/\[0:100\]/[0:$size]/g" test_asan_bug.lean > test_size_$size.lean
  timeout 30 build/release/bin/lean --run test_size_$size.lean
done
```

### Compare with Release Build
```bash
# Build normal release version
cd /build
make -C build/release clean
unset CFLAGS CXXFLAGS LDFLAGS
cmake ../../ -DCMAKE_BUILD_TYPE=Release
make -C build/release -j$(nproc)

# Run same test - should complete without ASan errors
build/release/bin/lean --run test_asan_bug.lean
```

## Troubleshooting

### Build Issues
```bash
# If build fails due to memory:
export MAKEFLAGS="-j2"  # Reduce parallelism
# or
ulimit -v 8388608      # Limit virtual memory to 8GB
```

### Runtime Issues
```bash
# If ASan reports false positives:
export ASAN_OPTIONS="detect_leaks=0:halt_on_error=0"

# If test hangs:
timeout 60 build/release/bin/lean --run test_asan_bug.lean
```

### No ASan Errors But Suspected Bug
Try additional stress tests:
```bash
# Run under multiple sanitizers
export CFLAGS="-fsanitize=address,undefined -g"
export CXXFLAGS="-fsanitize=address,undefined -g"

# Or try Valgrind as alternative:
valgrind --tool=memcheck --leak-check=full \
  build/release/bin/lean --run test_asan_bug.lean
```

## Expected Outcomes

### Scenario 1: Bug is Real
- ASan reports use-after-free in fast path
- Stack trace points to reference counting operations
- Error occurs consistently with large inputs

### Scenario 2: Bug is Theoretical Only  
- Clean execution without ASan errors
- Performance difference between ASan/normal builds but no crashes
- May indicate bug exists but doesn't manifest with current inputs

### Scenario 3: Different Bug Found
- ASan reports unexpected memory errors
- Points to different memory management issues in Lean runtime
- Still valuable for improving Lean's memory safety

## Conclusion

This ASan analysis will definitively answer whether the `eraseProjIncFor` mask-overwrite bug causes actual memory corruption. The combination of targeted test cases, instrumented builds, and systematic analysis should reveal any runtime memory safety issues related to the reference counting imbalance identified in the static IR analysis.