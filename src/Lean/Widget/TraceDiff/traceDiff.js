/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert

The trace diff widget shown by `#trace_diff`; see Lean/Widget/TraceDiff/Rpc.lean for the
server side. Two panes show the stored traces as collapsible trees with per-node diff status;
an SVG gutter draws "wires" between matched-but-changed and pinned partner rows. Selecting a
row and clicking a row on the opposite side pins the two together; the matching is recomputed
server-side with the pins as hard constraints.
*/
import * as React from 'react';
import { RpcContext } from '@leanprover/infoview';

const e = React.createElement;

const CSS = `
.tdw { font-family: var(--vscode-editor-font-family, monospace); font-size: 12px;
  color: var(--vscode-editor-foreground); }
.tdw .toolbar { display: flex; flex-wrap: wrap; align-items: center; gap: 10px;
  padding: 4px 2px; font-family: var(--vscode-font-family, sans-serif); }
.tdw .toolbar .names b { color: var(--vscode-textLink-foreground); }
.tdw .toolbar button { background: var(--vscode-button-secondaryBackground, #3a3d41);
  color: var(--vscode-button-secondaryForeground, #ccc); border: none; border-radius: 3px;
  padding: 2px 8px; cursor: pointer; font-size: 11px; }
.tdw .toolbar button:hover { background: var(--vscode-button-secondaryHoverBackground, #45494e); }
.tdw .stats { display: flex; gap: 8px; flex-wrap: wrap; font-size: 11px; }
.tdw .stats .chip i { display: inline-block; width: 8px; height: 8px; border-radius: 2px;
  margin-right: 3px; }
.tdw .hint { font-family: var(--vscode-font-family, sans-serif); font-size: 11px;
  opacity: 0.7; padding: 2px 2px 6px; }
.tdw .warn { color: var(--vscode-editorWarning-foreground, #d29922); font-size: 11px;
  padding: 2px; }
.tdw .main { display: flex; align-items: stretch; border: 1px solid
  var(--vscode-panel-border, #444); border-radius: 4px; }
.tdw .pane { flex: 1 1 0; min-width: 220px; max-height: 480px; overflow: auto;
  padding: 4px 0; }
.tdw .gutter { flex: 0 0 44px; position: relative; }
.tdw .gutter svg { position: absolute; inset: 0; width: 100%; height: 100%;
  overflow: visible; }
.tdw .row { display: flex; align-items: baseline; white-space: pre; cursor: pointer;
  line-height: 1.5; border-left: 2px solid transparent; }
.tdw .row:hover { background: var(--vscode-list-hoverBackground, #2a2d2e); }
.tdw .row .caret { width: 14px; flex: none; text-align: center; opacity: 0.6;
  font-size: 9px; transition: transform 0.08s; display: inline-block; }
.tdw .row .caret.open { transform: rotate(90deg); }
.tdw .row .cls { color: var(--vscode-textLink-foreground, #4fc1ff); opacity: 0.85;
  margin-right: 5px; }
.tdw .row .lbl { overflow: hidden; text-overflow: ellipsis; }
.tdw .row.st-chg { border-left-color: var(--vscode-editorWarning-foreground, #d29922); }
.tdw .row.st-chg .lbl { color: var(--vscode-editorWarning-foreground, #d29922); }
.tdw .row.st-add { border-left-color: var(--vscode-gitDecoration-addedResourceForeground, #2ea043); }
.tdw .row.st-add .lbl { color: var(--vscode-gitDecoration-addedResourceForeground, #2ea043); }
.tdw .row.st-rem { border-left-color: var(--vscode-gitDecoration-deletedResourceForeground, #f85149); }
.tdw .row.st-rem .lbl { color: var(--vscode-gitDecoration-deletedResourceForeground, #f85149);
  text-decoration: line-through; }
.tdw .row.hl { background: var(--vscode-list-hoverBackground, #2a2d2e); }
.tdw .row.sel { background: var(--vscode-list-activeSelectionBackground, #094771); }
.tdw .row.partner { outline: 1px dashed var(--vscode-focusBorder, #3794ff);
  outline-offset: -1px; }
.tdw .badge { margin-left: 6px; cursor: pointer; flex: none; }
.tdw .badge-pin { color: #a371f7; }
.tdw .badge-unm { color: var(--vscode-gitDecoration-deletedResourceForeground, #f85149); }
.tdw path.ln-chg { stroke: var(--vscode-editorWarning-foreground, #d29922); stroke-width: 1;
  fill: none; opacity: 0.45; }
.tdw path.ln-pin { stroke: #a371f7; stroke-width: 1.4; fill: none; opacity: 0.8; }
.tdw path.ln-hov { stroke: var(--vscode-focusBorder, #3794ff); stroke-width: 2; fill: none; }
.tdw .actionbar { display: flex; align-items: center; gap: 8px; padding: 4px 2px;
  font-family: var(--vscode-font-family, sans-serif); font-size: 11px; }
.tdw .err { color: var(--vscode-errorForeground, #f85149); padding: 4px; }
`;

/* ---------------- tree indexing ---------------- */

function indexForest(forest) {
  const nodes = new Map();
  const roots = [];
  const walk = (n, id, parent, depth) => {
    const rec = { id, name: n.name, label: n.label, parent, depth, children: [] };
    nodes.set(id, rec);
    n.children.forEach((c, i) => {
      const cid = id + '.' + i;
      rec.children.push(cid);
      walk(c, cid, id, depth + 1);
    });
  };
  forest.forEach((r, i) => { roots.push(String(i)); walk(r, String(i), null, 0); });
  return { nodes, roots };
}

function defaultCollapsed(tree, expandDepth) {
  const out = new Set();
  for (const n of tree.nodes.values())
    if (n.children.length && n.depth >= expandDepth) out.add(n.id);
  return out;
}

/* ---------------- component ---------------- */

export default function TraceDiffWidget(props) {
  const rs = React.useContext(RpcContext);
  const pos = { line: props.pos.line, character: props.pos.character };

  const [data, setData] = React.useState(null);     // {L, R, truncated} | {error}
  const [match, setMatch] = React.useState(null);   // {l2r, r2l, status, counts, changedPairs}
  const [pins, setPins] = React.useState([]);       // [[lid, rid], ...]
  const [unmatched, setUnmatched] = React.useState({ L: [], R: [] });
  const [threshold, setThreshold] = React.useState(0.55);
  const [thrLive, setThrLive] = React.useState(0.55);
  const [collapsed, setCollapsed] = React.useState({ L: new Set(), R: new Set() });
  const [sel, setSel] = React.useState(null);       // {side, id}
  const [busy, setBusy] = React.useState(true);

  const rowEls = React.useRef(new Map());           // 'L'+id / 'R'+id -> element
  const svgRef = React.useRef(null);
  const paneL = React.useRef(null);
  const paneR = React.useRef(null);
  const hover = React.useRef(null);                 // {lid, rid}
  const latest = React.useRef({});
  const scrollTo = React.useRef(null);
  const thrTimer = React.useRef(null);
  latest.current = { match, sel, pins };

  /* ---- data fetch ---- */
  React.useEffect(() => {
    setBusy(true);
    rs.call('Lean.Widget.TraceDiff.getTraceDiffData',
        { pos, left: props.left, right: props.right })
      .then(d => {
        const L = indexForest(d.left), R = indexForest(d.right);
        setData({ L, R, truncated: d.truncated });
        setCollapsed({ L: defaultCollapsed(L, 2), R: defaultCollapsed(R, 2) });
      })
      .catch(ex => setData({ error: String(ex?.message ?? ex) }));
  }, [props.left, props.right]);

  /* ---- matching ---- */
  React.useEffect(() => {
    if (!data || data.error) return;
    setBusy(true);
    rs.call('Lean.Widget.TraceDiff.computeTraceDiff', {
        pos, left: props.left, right: props.right,
        pins: pins.map(([l, r]) => ({ l, r })),
        unmatchedLeft: unmatched.L, unmatchedRight: unmatched.R,
        threshold,
      })
      .then(res => {
        const l2r = new Map(), r2l = new Map(), status = new Map();
        for (const { l, r } of res.pairs) { l2r.set(l, r); r2l.set(r, l); }
        const chgL = new Set(), chgR = new Set();
        for (const { l, r } of res.changed) { chgL.add(l); chgR.add(r); }
        for (const id of data.L.nodes.keys())
          status.set('L' + id, l2r.has(id) ? (chgL.has(id) ? 'chg' : 'same') : 'rem');
        for (const id of data.R.nodes.keys())
          status.set('R' + id, r2l.has(id) ? (chgR.has(id) ? 'chg' : 'same') : 'add');
        setMatch({
          l2r, r2l, status,
          changedPairs: res.changed.map(p => [p.l, p.r]),
          counts: { same: res.numSame, chg: res.changed.length,
                    add: res.added.length, rem: res.removed.length },
        });
        setBusy(false);
      })
      .catch(ex => { setData({ error: String(ex?.message ?? ex) }); });
  }, [data, pins, unmatched, threshold]);

  const partnerOf = (side, id) => {
    const m = latest.current.match;
    if (!m) return undefined;
    return side === 'L' ? m.l2r.get(id) : m.r2l.get(id);
  };

  /* ---- gutter wires ---- */
  const drawGutter = React.useCallback(() => {
    const svg = svgRef.current;
    if (!svg) return;
    requestAnimationFrame(() => {
      const m = latest.current.match;
      if (!svg.isConnected || !m) return;
      const gr = svg.getBoundingClientRect();
      const w = gr.width, h = gr.height;
      const pinSet = new Map(latest.current.pins);
      const items = [];
      for (const [lid, rid] of latest.current.pins) items.push({ lid, rid, kind: 'pin' });
      for (const [lid, rid] of m.changedPairs) {
        if (items.length > 2500) break;
        if (pinSet.get(lid) !== rid) items.push({ lid, rid, kind: 'chg' });
      }
      if (hover.current) items.push({ ...hover.current, kind: 'hov' });
      const s = latest.current.sel;
      if (s) {
        const pid = partnerOf(s.side, s.id);
        if (pid !== undefined)
          items.push({ lid: s.side === 'L' ? s.id : pid,
                       rid: s.side === 'L' ? pid : s.id, kind: 'hov' });
      }
      let html = '';
      for (const it of items) {
        const le = rowEls.current.get('L' + it.lid);
        const re = rowEls.current.get('R' + it.rid);
        if (!le || !re) continue;
        const lr = le.getBoundingClientRect(), rr = re.getBoundingClientRect();
        const y1 = lr.top + lr.height / 2 - gr.top, y2 = rr.top + rr.height / 2 - gr.top;
        if ((y1 < -40 && y2 < -40) || (y1 > h + 40 && y2 > h + 40)) continue;
        html += `<path class="ln-${it.kind}" d="M0 ${y1.toFixed(1)} C ${(w * 0.45).toFixed(1)} `
          + `${y1.toFixed(1)}, ${(w * 0.55).toFixed(1)} ${y2.toFixed(1)}, ${w} ${y2.toFixed(1)}"/>`;
      }
      svg.innerHTML = html;
    });
  }, []);

  React.useEffect(() => {
    const l = paneL.current, r = paneR.current;
    if (!l || !r) return;
    l.addEventListener('scroll', drawGutter, { passive: true });
    r.addEventListener('scroll', drawGutter, { passive: true });
    window.addEventListener('resize', drawGutter);
    return () => {
      l.removeEventListener('scroll', drawGutter);
      r.removeEventListener('scroll', drawGutter);
      window.removeEventListener('resize', drawGutter);
    };
  }, [data, drawGutter]);

  React.useLayoutEffect(() => {
    if (scrollTo.current) {
      rowEls.current.get(scrollTo.current)?.scrollIntoView({ block: 'center' });
      scrollTo.current = null;
    }
    drawGutter();
  });

  /* ---- gestures ---- */
  const reveal = (side, id) => {
    const tree = side === 'L' ? data.L : data.R;
    const next = new Set(collapsed[side]);
    let changed = false;
    let p = tree.nodes.get(id)?.parent;
    while (p != null) {
      if (next.delete(p)) changed = true;
      p = tree.nodes.get(p).parent;
    }
    if (changed) setCollapsed({ ...collapsed, [side]: next });
    scrollTo.current = side + id;
  };

  const createPin = (lid, rid) => {
    const next = pins.filter(([l, r]) => l !== lid && r !== rid);
    next.push([lid, rid]);
    setPins(next);
    setUnmatched({ L: unmatched.L.filter(x => x !== lid),
                   R: unmatched.R.filter(x => x !== rid) });
  };

  const select = (side, id) => {
    setSel({ side, id });
    const pid = partnerOf(side, id);
    if (pid !== undefined) reveal(side === 'L' ? 'R' : 'L', pid);
  };

  const paneClick = side => ev => {
    const row = ev.target.closest('.row');
    if (!row) { setSel(null); return; }
    const id = row.dataset.id;
    const tree = side === 'L' ? data.L : data.R;
    if (ev.target.classList.contains('caret') && tree.nodes.get(id).children.length) {
      const next = new Set(collapsed[side]);
      next.has(id) ? next.delete(id) : next.add(id);
      setCollapsed({ ...collapsed, [side]: next });
      return;
    }
    if (ev.target.classList.contains('badge-pin')) {
      setPins(pins.filter(([l, r]) => (side === 'L' ? l !== id : r !== id)));
      return;
    }
    if (ev.target.classList.contains('badge-unm')) {
      setUnmatched({ ...unmatched, [side]: unmatched[side].filter(x => x !== id) });
      return;
    }
    if (sel && sel.side !== side && !ev.shiftKey) {
      createPin(side === 'R' ? sel.id : id, side === 'R' ? id : sel.id);
      setSel(null);
      return;
    }
    select(side, id);
  };

  const paneHover = side => ev => {
    const row = ev.target.closest('.row');
    if (!row) return;
    const id = row.dataset.id;
    const pid = partnerOf(side, id);
    if (pid === undefined) return;
    hover.current = side === 'L' ? { lid: id, rid: pid } : { lid: pid, rid: id };
    rowEls.current.get('L' + hover.current.lid)?.classList.add('hl');
    rowEls.current.get('R' + hover.current.rid)?.classList.add('hl');
    drawGutter();
  };
  const paneUnhover = () => {
    if (!hover.current) return;
    rowEls.current.get('L' + hover.current.lid)?.classList.remove('hl');
    rowEls.current.get('R' + hover.current.rid)?.classList.remove('hl');
    hover.current = null;
    drawGutter();
  };

  const forceUnmatch = (side, id) => {
    setPins(pins.filter(([l, r]) => (side === 'L' ? l !== id : r !== id)));
    setUnmatched({ ...unmatched, [side]: [...unmatched[side], id] });
  };

  /* ---- rendering ---- */
  if (!data) return e('div', { className: 'tdw' }, 'Loading trace data…');
  if (data.error) return e('div', { className: 'tdw' },
    e('style', null, CSS), e('div', { className: 'err' }, data.error));

  const renderPane = side => {
    const tree = side === 'L' ? data.L : data.R;
    const col = collapsed[side];
    const rows = [];
    const make = id => {
      const n = tree.nodes.get(id);
      const st = match ? (match.status.get(side + id) ?? 'same') : 'same';
      const isPinned = pins.some(([l, r]) => (side === 'L' ? l === id : r === id));
      const isUnm = unmatched[side].includes(id);
      const open = !col.has(id);
      const kids = [];
      kids.push(e('span', { className: 'caret' + (open && n.children.length ? ' open' : ''),
        key: 'c' }, n.children.length ? '▶' : '·'));
      if (n.name) kids.push(e('span', { className: 'cls', key: 'n' }, `[${n.name}]`));
      kids.push(e('span', { className: 'lbl', key: 'l' }, n.label));
      if (isPinned) kids.push(e('span', { className: 'badge badge-pin', key: 'p',
        title: 'Pinned match — click to remove pin' }, '◈'));
      if (isUnm) kids.push(e('span', { className: 'badge badge-unm', key: 'u',
        title: 'Forced unmatched — click to allow matching again' }, '⊘'));
      const cls = ['row', 'st-' + st];
      if (sel && sel.side === side && sel.id === id) cls.push('sel');
      else if (sel && sel.side !== side && partnerOf(sel.side, sel.id) === id)
        cls.push('partner');
      rows.push(e('div', {
        key: id, className: cls.join(' '), 'data-id': id,
        style: { paddingLeft: 4 + n.depth * 14 },
        ref: el => {
          if (el) rowEls.current.set(side + id, el);
          else rowEls.current.delete(side + id);
        },
      }, ...kids));
      if (open) n.children.forEach(make);
    };
    tree.roots.forEach(make);
    return e('div', {
      className: 'pane', ref: side === 'L' ? paneL : paneR,
      onClick: paneClick(side), onMouseOver: paneHover(side), onMouseOut: paneUnhover,
    }, ...rows);
  };

  const counts = match?.counts;
  const stats = counts ? e('div', { className: 'stats' },
    e('span', { className: 'chip' }, e('i', { style: { background: 'gray' } }),
      `matched ${counts.same + counts.chg}`),
    e('span', { className: 'chip' }, e('i', { style: { background: '#d29922' } }),
      `changed ${counts.chg}`),
    e('span', { className: 'chip' }, e('i', { style: { background: '#2ea043' } }),
      `added ${counts.add}`),
    e('span', { className: 'chip' }, e('i', { style: { background: '#f85149' } }),
      `removed ${counts.rem}`),
    e('span', { className: 'chip' }, e('i', { style: { background: '#a371f7' } }),
      `pins ${pins.length}`)) : null;

  const selNode = sel ? (sel.side === 'L' ? data.L : data.R).nodes.get(sel.id) : null;
  const selPinned = sel && pins.some(([l, r]) => (sel.side === 'L' ? l === sel.id : r === sel.id));
  const selUnm = sel && unmatched[sel.side].includes(sel.id);
  const actionbar = sel ? e('div', { className: 'actionbar' },
    e('span', null, `${sel.side === 'L' ? 'A' : 'B'} · `, e('b', null, selNode?.label ?? '')),
    selPinned
      ? e('button', { onClick: () =>
          setPins(pins.filter(([l, r]) => (sel.side === 'L' ? l !== sel.id : r !== sel.id))) },
          'Remove pin')
      : (partnerOf(sel.side, sel.id) !== undefined
          ? e('button', { onClick: () => { forceUnmatch(sel.side, sel.id); setSel(null); } },
              'Force unmatch')
          : null),
    selUnm ? e('button', { onClick: () => setUnmatched({ ...unmatched,
        [sel.side]: unmatched[sel.side].filter(x => x !== sel.id) }) }, 'Allow matching') : null,
    e('button', { onClick: () => setSel(null) }, 'Deselect')) : null;

  const hint = sel
    ? `Click a node in run ${sel.side === 'L' ? 'B (right)' : 'A (left)'} to pin it as the `
      + 'match for the selected node · shift+click just selects'
    : 'Click a node to select it and see its match · click a node on the other side to pin '
      + 'them together (◈) · hover highlights matches';

  return e('div', { className: 'tdw' },
    e('style', null, CSS),
    e('div', { className: 'toolbar' },
      e('span', { className: 'names' }, 'A: ', e('b', null, props.left),
        '  ⇒  B: ', e('b', null, props.right)),
      e('label', null, `sim ≥ ${thrLive.toFixed(2)} `,
        e('input', { type: 'range', min: 0.05, max: 0.95, step: 0.05, value: thrLive,
          onChange: ev => {
            const v = Number(ev.target.value);
            setThrLive(v);
            clearTimeout(thrTimer.current);
            thrTimer.current = setTimeout(() => setThreshold(v), 250);
          } })),
      e('button', { onClick: () => { setPins([]); setUnmatched({ L: [], R: [] }); } },
        'Clear pins'),
      e('button', { onClick: () => setCollapsed({ L: new Set(), R: new Set() }) },
        'Expand all'),
      e('button', { onClick: () => setCollapsed({
          L: defaultCollapsed(data.L, 1), R: defaultCollapsed(data.R, 1) }) },
        'Collapse all'),
      busy ? e('span', null, '…') : null,
      stats),
    data.truncated ? e('div', { className: 'warn' },
      '⚠ trace too large: display truncated (the matching still covers all nodes); '
      + 'consider pre-filtering with a trace postprocessor') : null,
    actionbar ?? e('div', { className: 'hint' }, hint),
    e('div', { className: 'main' },
      renderPane('L'),
      e('div', { className: 'gutter' }, e('svg', { ref: svgRef })),
      renderPane('R')));
}
