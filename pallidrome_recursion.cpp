<!DOCTYPE html>
<!-- saved from url=(0058)https://www.programiz.com/cpp-programming/online-compiler/ -->
<html lang="en" style="--pgz-banner-offset: 80px;"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style>.ͼ1.cm-focused {outline: 1px dotted #212121;}
.ͼ1 {position: relative !important; box-sizing: border-box; display: flex !important; flex-direction: column;}
.ͼ1 .cm-scroller {display: flex !important; align-items: flex-start !important; font-family: monospace; line-height: 1.4; height: 100%; overflow-x: auto; position: relative; z-index: 0; overflow-anchor: none;}
.ͼ1 .cm-content[contenteditable=true] {-webkit-user-modify: read-write-plaintext-only;}
.ͼ1 .cm-content {margin: 0; flex-grow: 2; flex-shrink: 0; display: block; white-space: pre; word-wrap: normal; box-sizing: border-box; min-height: 100%; padding: 4px 0; outline: none;}
.ͼ1 .cm-lineWrapping {white-space: pre-wrap; white-space: break-spaces; word-break: break-word; overflow-wrap: anywhere; flex-shrink: 1;}
.ͼ2 .cm-content {caret-color: black;}
.ͼ3 .cm-content {caret-color: white;}
.ͼ1 .cm-line {display: block; padding: 0 2px 0 6px;}
.ͼ1 .cm-layer > * {position: absolute;}
.ͼ1 .cm-layer {user-select: none; position: absolute; left: 0; top: 0; contain: size style;}
.ͼ2 .cm-selectionBackground {background: #d9d9d9;}
.ͼ3 .cm-selectionBackground {background: #222;}
.ͼ2.cm-focused > .cm-scroller > .cm-selectionLayer .cm-selectionBackground {background: #d7d4f0;}
.ͼ3.cm-focused > .cm-scroller > .cm-selectionLayer .cm-selectionBackground {background: #233;}
.ͼ1 .cm-cursorLayer {pointer-events: none;}
.ͼ1.cm-focused > .cm-scroller > .cm-cursorLayer {animation: steps(1) cm-blink 1.2s infinite;}
@keyframes cm-blink {50% {opacity: 0;}}
@keyframes cm-blink2 {50% {opacity: 0;}}
.ͼ1 .cm-cursor, .ͼ1 .cm-dropCursor {border-left: 1.2px solid black; margin-left: -0.6px; pointer-events: none;}
.ͼ1 .cm-cursor {display: none;}
.ͼ3 .cm-cursor {border-left-color: #ddd;}
.ͼ1 .cm-selectionHandle {background-color: currentColor; width: 1.5px;}
.ͼ1 .cm-selectionHandle-start::before, .ͼ1 .cm-selectionHandle-end::before {content: ""; background-color: inherit; border-radius: 50%; width: 8px; height: 8px; position: absolute; left: -3.25px;}
.ͼ1 .cm-selectionHandle-start::before {top: -8px;}
.ͼ1 .cm-selectionHandle-end::before {bottom: -8px;}
.ͼ1 .cm-dropCursor {position: absolute;}
.ͼ1.cm-focused > .cm-scroller > .cm-cursorLayer .cm-cursor {display: block;}
.ͼ1 .cm-iso {unicode-bidi: isolate;}
.ͼ1 .cm-announced {position: fixed; top: -10000px;}
@media print {.ͼ1 .cm-announced {display: none;}}
.ͼ2 .cm-activeLine {background-color: #cceeff44;}
.ͼ3 .cm-activeLine {background-color: #99eeff33;}
.ͼ2 .cm-specialChar {color: red;}
.ͼ3 .cm-specialChar {color: #f78;}
.ͼ1 .cm-gutters {flex-shrink: 0; display: flex; height: 100%; box-sizing: border-box; z-index: 200;}
.ͼ1 .cm-gutters-before {inset-inline-start: 0;}
.ͼ1 .cm-gutters-after {inset-inline-end: 0;}
.ͼ2 .cm-gutters.cm-gutters-before {border-right-width: 1px;}
.ͼ2 .cm-gutters.cm-gutters-after {border-left-width: 1px;}
.ͼ2 .cm-gutters {background-color: #f5f5f5; color: #6c6c6c; border: 0px solid #ddd;}
.ͼ3 .cm-gutters {background-color: #333338; color: #ccc;}
.ͼ1 .cm-gutter {display: flex !important; flex-direction: column; flex-shrink: 0; box-sizing: border-box; min-height: 100%; overflow: hidden;}
.ͼ1 .cm-gutterElement {box-sizing: border-box;}
.ͼ1 .cm-lineNumbers .cm-gutterElement {padding: 0 3px 0 5px; min-width: 20px; text-align: right; white-space: nowrap;}
.ͼ2 .cm-activeLineGutter {background-color: #e2f2ff;}
.ͼ3 .cm-activeLineGutter {background-color: #222227;}
.ͼ1 .cm-panels {box-sizing: border-box; position: sticky; left: 0; right: 0; z-index: 300;}
.ͼ2 .cm-panels {background-color: #f5f5f5; color: black;}
.ͼ1 .cm-panels-top {top: 0;}
.ͼ1 .cm-panels-bottom {bottom: 0;}
.ͼ2 .cm-panels-top {border-bottom: 1px solid #ddd;}
.ͼ2 .cm-panels-bottom {border-top: 1px solid #ddd;}
.ͼ3 .cm-panels {background-color: #333338; color: white;}
.ͼ1 .cm-dialog label {font-size: 80%;}
.ͼ1 .cm-dialog {padding: 2px 19px 4px 6px; position: relative;}
.ͼ1 .cm-dialog-close {position: absolute; top: 3px; right: 4px; background-color: inherit; border: none; font: inherit; font-size: 14px; padding: 0;}
.ͼ1 .cm-tab {display: inline-block; overflow: hidden; vertical-align: bottom;}
.ͼ1 .cm-widgetBuffer {vertical-align: baseline; height: 1em; width: 0; display: inline;}
.ͼ1 .cm-placeholder {color: #888; display: inline-block; vertical-align: top; user-select: none;}
.ͼ1 .cm-highlightSpace {background: radial-gradient(circle at 50% 55%, #aaa 20%, transparent 0) no-repeat; background-size: .4em; background-position: calc(min(50%, 0px)) center;}
.ͼ1 .cm-highlightTab {background-image: url('data:image/svg+xml,<svg xmlns="http://www.w3.org/2000/svg" width="200" height="20"><path stroke="%23888" stroke-width="1" fill="none" d="M1 10H196L190 5M190 15L196 10M197 4L197 16"/></svg>'); background-size: auto 100%; background-position: right 90%; background-repeat: no-repeat;}
.ͼ1 .cm-trailingSpace {background-color: #ff332255;}
.ͼ1 .cm-button {vertical-align: middle; color: inherit; font-size: 70%; padding: .2em 1em; border-radius: 1px;}
.ͼ2 .cm-button:active {background-image: linear-gradient(#b4b4b4, #d0d3d6);}
.ͼ2 .cm-button {background-image: linear-gradient(#eff1f5, #d9d9df); border: 1px solid #888;}
.ͼ3 .cm-button:active {background-image: linear-gradient(#111, #333);}
.ͼ3 .cm-button {background-image: linear-gradient(#393939, #111); border: 1px solid #888;}
.ͼ1 .cm-textfield {vertical-align: middle; color: inherit; font-size: 70%; border: 1px solid silver; padding: .2em .5em;}
.ͼ2 .cm-textfield {background-color: white;}
.ͼ3 .cm-textfield {border: 1px solid #555; background-color: inherit;}
.ͼ1 .cm-selectionMatch {background-color: #99ff7780;}
.ͼ1 .cm-searchMatch .cm-selectionMatch {background-color: transparent;}
.ͼ1.cm-focused .cm-matchingBracket {background-color: #328c8252;}
.ͼ1.cm-focused .cm-nonmatchingBracket {background-color: #bb555544;}
.ͼ2c.cm-editor.cm-focused {outline: none;}
.ͼ2c .cm-content {-webkit-tap-highlight-color: transparent;}
.ͼ1 .cm-foldPlaceholder {background-color: #eee; border: 1px solid #ddd; color: #888; border-radius: .2em; margin: 0 1px; padding: 0 1px; cursor: pointer;}
.ͼ1 .cm-foldGutter span {padding: 0 1px; cursor: pointer;}
.ͼ2a.cm-editor.cm-focused {outline: none;}
.ͼ1j {color: #484F5D;}
.ͼ1k {color: #addb67;}
.ͼ1l {color: #b5cea8;}
.ͼ1m {color: #c792ea;}
.ͼ1n {color: #c792ea;}
.ͼ1o {color: #7fdbca;}
.ͼ1p {color: #7fdbca;}
.ͼ1q {color: #addb67;}
.ͼ1r {color: #d6deeb;}
.ͼ1s {color: #addb67;}
.ͼ1t {color: #addb67;}
.ͼ1u {color: #3dc9b0;}
.ͼ1v {color: #addb67;}
.ͼ1w {color: #c792ea;}
.ͼ1x {color: #3dc9b0;}
.ͼ1y {color: #ffcb8b;}
.ͼ1z {color: #ffcb8b;}
.ͼ20 {color: #3dc9b0;}
.ͼ21 {color: #82aaff;}
.ͼ22 {color: #82aaff;}
.ͼ23 {color: #80cbc4;}
.ͼ24 {color: #ff5874;}
.ͼ25 {color: #d6deeb;}
.ͼ26 {color: #d6deeb;}
.ͼ27 {color: #dd6a6f;}
.ͼ28 {color: #3dc9b0;}
.ͼ29 {color: #9cdcfe;}
.ͼ2d {background-color: #1f2023; color: #d6deeb; height: 100%;}
.ͼ2d .cm-content {caret-color: #ffffff;}
.ͼ2d .cm-cursor, .ͼ2d .cm-dropCursor {border-left-color: #ffffff; border-left-width: 2px; margin-left: -1px;}
.ͼ2d.cm-focused .cm-selectionBackground, .ͼ2d .cm-selectionBackground, .ͼ2d .cm-content ::selection {background-color: #5f7e9779;}
.ͼ2d .cm-activeLine {background-color: #ffffff0a;}
.ͼ2d .cm-activeLineGutter {background-color: #ffffff0a;}
.ͼ2d .cm-gutters {background-color: #1C2130; color: #4b6479; border: none;}
.ͼ2d .cm-scroller {font-family: 'Droid Sans Mono', monospace; font-size: 14px; line-height: 22px; scrollbar-width: auto; scrollbar-color: #4b6479 transparent;}
@media screen and (max-width: 799px) {.ͼ2d .cm-content {font-size: 16px;}}
.ͼ2d .cm-scroller::-webkit-scrollbar {width: 10px;}
.ͼ2d .cm-scroller::-webkit-scrollbar-thumb {background-color: #4b6479; border-radius: 5px;}
.ͼ2d .cm-scroller::-webkit-scrollbar-track {background: transparent;}
.ͼ2d .cm-terminal-dim {color: #484F5D;}
.ͼ2d .cm-selectionMatch, .ͼ2d .cm-selectionMatch-main {background-color: #575757B8;}
.ͼ2d .cm-foldGutter span {color: #4b6479; cursor: pointer;}
.ͼ2d .cm-foldGutter span:hover {color: #d6deeb;}
.ͼ2d .cm-foldPlaceholder {background-color: #2b3348; border: none; color: #7e97ac;}
.ͼ2b {background-color: #1C2130; color: #d6deeb; height: 100%;}
.ͼ2b .cm-content {caret-color: #ffffff;}
.ͼ2b .cm-cursor, .ͼ2b .cm-dropCursor {border-left-color: #ffffff; border-left-width: 2px; margin-left: -1px;}
.ͼ2b.cm-focused .cm-selectionBackground, .ͼ2b .cm-selectionBackground, .ͼ2b .cm-content ::selection {background-color: #5f7e9779;}
.ͼ2b .cm-activeLine {background-color: #ffffff0a;}
.ͼ2b .cm-activeLineGutter {background-color: #ffffff0a;}
.ͼ2b .cm-gutters {background-color: #1C2130; color: #4b6479; border: none;}
.ͼ2b .cm-scroller {font-family: 'Droid Sans Mono', monospace; font-size: 14px; line-height: 22px; scrollbar-width: auto; scrollbar-color: #4b6479 transparent;}
@media screen and (max-width: 799px) {.ͼ2b .cm-content {font-size: 16px;}}
.ͼ2b .cm-scroller::-webkit-scrollbar {width: 10px;}
.ͼ2b .cm-scroller::-webkit-scrollbar-thumb {background-color: #4b6479; border-radius: 5px;}
.ͼ2b .cm-scroller::-webkit-scrollbar-track {background: transparent;}
.ͼ2b .cm-terminal-dim {color: #484F5D;}
.ͼ2b .cm-selectionMatch, .ͼ2b .cm-selectionMatch-main {background-color: #575757B8;}
.ͼ2b .cm-foldGutter span {color: #4b6479; cursor: pointer;}
.ͼ2b .cm-foldGutter span:hover {color: #d6deeb;}
.ͼ2b .cm-foldPlaceholder {background-color: #2b3348; border: none; color: #7e97ac;}
.ͼ4 .cm-line ::selection, .ͼ4 .cm-line::selection {background-color: transparent !important;}
.ͼ4 .cm-line {caret-color: transparent !important;}
.ͼ4 .cm-content :focus::selection, .ͼ4 .cm-content :focus ::selection {background-color: Highlight !important;}
.ͼ4 .cm-content :focus {caret-color: initial !important;}
.ͼ4 .cm-content {caret-color: transparent !important;}
</style>
  <title>
    Online C++ Compiler (Editor)  </title>
  <link rel="shortcut icon" href="https://www.programiz.com/sites/tutorial2program/files/favicon.png">
    <link rel="preconnect" href="https://fonts.programiz.com/" crossorigin="">
  <link rel="preconnect" href="https://www.googletagmanager.com/">
  <link rel="dns-prefetch" href="https://securepubads.g.doubleclick.net/">
  <link rel="dns-prefetch" href="https://pagead2.googlesyndication.com/">
  <link rel="dns-prefetch" href="https://fms.360yield.com/">
  <link rel="dns-prefetch" href="https://client.aps.amazon-adsystem.com/">
  <link rel="dns-prefetch" href="https://cdn.doubleverify.com/">
  <link rel="dns-prefetch" href="https://scripts.clarity.ms/">
  <link rel="dns-prefetch" href="https://edge.hyth.io/">
  <link rel="dns-prefetch" href="https://www.google-analytics.com/">
    <link rel="stylesheet" href="./pallidrome_recursion_files/compiler.css">
  <meta name="viewport" content="width=device-width, initial-scale=1">
    <meta name="theme-color" content="#1f2023" id="theme-color-meta">

      <style>
    @media (min-width: 992px) {
      /* var(--pgz-banner-offset, 80px): banner.js is position:fixed (not
         normal flow -- it never pushes anything down on its own) and it
         already ships its own integration mechanism for exactly this: it
         sets --pgz-banner-offset on document.documentElement to its real
         rendered height right when it inserts #pgz-banner, and removes the
         property when the banner closes (both confirmed by reading its
         source). Reading that var here, with 80px as the fallback for the
         window before banner.js has run at all, means the reservation
         always matches banner.js's own real height and its own open/close
         lifecycle -- one source of truth, not a second, independently
         measured/maintained copy of the same number.

         Previously this was hardcoded to a plain 80px, corrected later by a
         MutationObserver (bannerObserver, further down in <body>) that
         re-measured bannerElement.offsetHeight on every mutation and wrote
         it as an inline style. That JS-set inline style always overrides
         this CSS rule outright, regardless of specificity -- so any moment
         where that measurement ran before the banner's own content had
         fully settled (image load, internal layout) clobbered an already-
         correct CSS value with a transiently wrong one, then self-corrected
         -- a real, visible shift, even though both values eventually landed
         on the same number. Reading banner.js's own var instead removes
         that entire race: there's no re-measurement to race against banner
         .js's own rendering, because the value comes from banner.js itself,
         updated whenever banner.js itself decides it's changed. */
      /* !important: playground.css's own `html, body { padding: 0; }` reset (public/css/
         playground.css) is the exact same specificity (element selector) as this rule and loads
         later (an external <link>, after this inline <style>), so without !important it silently
         wins and this reservation never actually applies at all - confirmed live: before
         banner.js has run, .header rendered at the very top (no reservation whatsoever), not
         even the 80px fallback this rule is supposed to guarantee. banner.js's own injected
         style (confirmed by reading its shipped source) already uses `!important` for this exact
         reason - matching it here just closes the same gap for the window before banner.js has
         run yet, which its own rule can't cover since it doesn't exist until banner.js does. */
      body {
        padding-top: var(--pgz-banner-offset, 80px) !important;
      }

      /* #root's own CSS default is height:100vh (.container in playground.css).
         Without this, that reservation only ever gets subtracted later,
         which is a massive layout shift given #root is effectively the
         entire app shell (measured: 0.54 CLS contribution from #root alone,
         dwarfing everything else on this page). Setting the correct height
         here, in plain CSS, means it's right from the very first layout
         pass -- no JS round trip to wait on, and no re-measurement to race
         against banner.js's own rendering (see the comment on `body` above). */
      #root {
        height: calc(100vh - var(--pgz-banner-offset, 80px));
      }
    }
  </style>
  <script src="./pallidrome_recursion_files/123000288571689" async=""></script><script async="" src="./pallidrome_recursion_files/fbevents.js.download"></script><script async="" src="./pallidrome_recursion_files/yp7zjdgnh3"></script><script type="text/javascript" async="" src="./pallidrome_recursion_files/js"></script><script async="" src="./pallidrome_recursion_files/clarity.js.download"></script><script async="" src="./pallidrome_recursion_files/yp7zjdgnh3"></script><script async="" src="./pallidrome_recursion_files/gtm.js.download"></script><script>
    (function () {
      const PROMO_BANNER_SCRIPT_URL = "https://storage.googleapis.com/programiz-pro-banner/banner.js";
      // #banner-skeleton (rendered right after <body>, see its own comment there) is only ever
      // removed from here - there's no other code path that decides "no real banner is coming."
      // Safe to call more than once (e.g. both a failure path and, hypothetically, a late
      // successful one racing) since it no-ops once the element's already gone.
      const removeBannerSkeleton = () => {
        const skeletonEl = document.getElementById("banner-skeleton");
        if (skeletonEl) {
          skeletonEl.remove();
        }
      };
      fetch(PROMO_BANNER_SCRIPT_URL)
        .then((response) => response.ok ? response.text() : Promise.reject())
        .then((source) => {
          if (!/Date\.UTC\(\s*\d+\s*,\s*\d+\s*,\s*\d+\s*,\s*\d+\s*,\s*\d+\s*,\s*\d+\s*\)/.test(source)) {
            // Format didn't match -- fail closed, skip the banner (same as the .catch() below,
            // just not an actual rejection). No real banner is ever coming down this path either.
            removeBannerSkeleton();
            return;
          }
          const inject = () => {
            // banner.js (external/vendor-controlled, see #banner-skeleton's own comment) inserts
            // #pgz-banner itself once it runs - there's no load event or callback it offers to
            // hook into directly, so a MutationObserver on document.body is the only way to
            // notice that without polling. Disconnects itself once found so this doesn't run
            // forever on a page that already got its real banner.
            let bannerAppearedObserver = null;
            if (typeof MutationObserver === "function") {
              bannerAppearedObserver = new MutationObserver(() => {
                if (document.getElementById("pgz-banner")) {
                  removeBannerSkeleton();
                  bannerAppearedObserver.disconnect();
                }
              });
              bannerAppearedObserver.observe(document.body, { childList: true, subtree: true });
            }
            const bannerScript = document.createElement("script");
            bannerScript.src = PROMO_BANNER_SCRIPT_URL;
            bannerScript.dataset.utm_source = "compiler";
            // The fetch above only confirms banner.js's source still looks like what's expected
            // (a Date.UTC(...) cutoff is present) - it says nothing about whether that cutoff has
            // actually passed. banner.js runs that exact check itself, entirely client-side, and
            // simply does nothing (never inserts #pgz-banner) if the campaign has ended - fetching
            // this URL from a real, current campaign as of this writing still returns a script
            // whose own embedded cutoff is in the future, but $showPromoBanner (config.php) stays
            // true unconditionally on real production hosts regardless of that date
            // (isPromoCampaignActive() is only ever consulted for preview hosts - see its own
            // comment), so this page will keep reserving space and fetching banner.js long after
            // the campaign itself ends. Without this, #banner-skeleton would linger forever from
            // that point on: the MutationObserver above only fires once #pgz-banner actually
            // appears, which never happens once banner.js's own internal date check starts
            // failing. `load` (not a fixed delay) fires only once banner.js - a plain, synchronous,
            // non-module <script> - has fully finished executing, so by then it's already made its
            // own real/no-op decision either way; checking here catches exactly the "loaded fine,
            // chose not to render" case the observer above can't.
            bannerScript.addEventListener("load", () => {
              if (!document.getElementById("pgz-banner")) {
                removeBannerSkeleton();
                if (bannerAppearedObserver) {
                  bannerAppearedObserver.disconnect();
                }
              }
            });
            // Separate from the format/fetch validation above: that already confirmed this exact
            // URL is reachable moments ago, but a `<script src>` request specifically (unlike the
            // earlier fetch()) is exactly the shape ad-blockers commonly target by URL pattern for
            // anything banner-like - if that happens, `load` above never fires at all (no
            // execution to wait for), and the skeleton would otherwise never come off either.
            bannerScript.addEventListener("error", () => {
              removeBannerSkeleton();
              if (bannerAppearedObserver) {
                bannerAppearedObserver.disconnect();
              }
            });
            document.body.appendChild(bannerScript);
          };
          // document.body doesn't exist yet this early in <head> -- in
          // practice the fetch's network latency means it almost always
          // does by the time this resolves, but DOMContentLoaded is the
          // correct fallback rather than assuming that timing.
          if (document.body) {
            inject();
          } else {
            document.addEventListener("DOMContentLoaded", inject, { once: true });
          }
        })
        .catch(() => {
          // Fetch failed (network blip, CORS change, endpoint down) -- fail closed, skip the
          // banner. No real banner is ever coming, so the skeleton would otherwise linger forever.
          removeBannerSkeleton();
        });
    })();
  </script>
  
  <link rel="canonical" href="https://www.programiz.com/cpp-programming/online-compiler/">
  <meta name="description" content="Write and run your C++ code using our online C++ compiler. Enjoy additional features like code sharing, dark mode, and support for multiple programming languages.">

    <meta property="og:type" content="website">
  <meta property="og:url" content="https://programiz.com/cpp-programming/online-compiler/">
  <meta property="og:title" content="Online C++ Compiler (Editor)">
  <meta property="og:description" content="Write and run your C++ code using our online C++ compiler. Enjoy additional features like code sharing, dark mode, and support for multiple programming languages.">
  <meta property="og:image" content="https://programiz.com/online-compiler/assets/logos/compiler_logo.png">

    <meta name="twitter:card" content="summary">
  <meta property="twitter:url" content="https://programiz.com/cpp-programming/online-compiler/">
  <meta name="twitter:title" content="Online C++ Compiler (Editor)">
  <meta name="twitter:description" content="Write and run your C++ code using our online C++ compiler. Enjoy additional features like code sharing, dark mode, and support for multiple programming languages.">
  <meta name="twitter:image" content="https://programiz.com/online-compiler/assets/logos/compiler_logo.png">

      <script>
    var url = window.location.href;
    window.googletag = window.googletag || {
      cmd: []
    };
    window.googletag.cmd.push(function() {
      switch (true) {
        case url.includes("/python-programming/numpy"):
          window.googletag.pubads().setTargeting('prog_lang', 'numpy');
          break;
        case url.includes("/sql"):
          window.googletag.pubads().setTargeting('prog_lang', 'sql');
          break;
        case url.includes("/c-programming"):
          window.googletag.pubads().setTargeting('prog_lang', 'c_programming');
          break;
        case url.includes("/cpp-programming"):
          window.googletag.pubads().setTargeting('prog_lang', 'c_plus_plus');
          break;
        case url.includes("/csharp-programming"):
          window.googletag.pubads().setTargeting('prog_lang', 'c_sharp_lang');
          break;
        case url.includes("/dsa"):
          window.googletag.pubads().setTargeting('prog_lang', 'dsa');
          break;
        case url.includes("/java-programming"):
          window.googletag.pubads().setTargeting('prog_lang', 'java');
          break;
        case url.includes("/javascript"):
          window.googletag.pubads().setTargeting('prog_lang', 'javascript');
          break;
        case url.includes("/kotlin-programming"):
          window.googletag.pubads().setTargeting('prog_lang', 'kotlin');
          break;
        case url.includes("/python-programming"):
          window.googletag.pubads().setTargeting('prog_lang', 'python');
          break;
        case url.includes("/swift-programming"):
          window.googletag.pubads().setTargeting('prog_lang', 'swift');
          break;
        case url.includes("/typescript"):
          window.googletag.pubads().setTargeting('prog_lang', 'typescript');
          break;
        case url.includes("/scala"):
          window.googletag.pubads().setTargeting('prog_lang', 'scala');
          break;
        case url.includes("/dart"):
          window.googletag.pubads().setTargeting('prog_lang', 'dart');
          break;
        case url.includes("/ruby"):
          window.googletag.pubads().setTargeting('prog_lang', 'ruby');
          break;
        case url.includes("/bash"):
          window.googletag.pubads().setTargeting('prog_lang', 'bash');
          break;
      }

      window.googletag.pubads().enableAsyncRendering();
      window.googletag.pubads().disableInitialLoad();
    });

    const injectPgScript = (src, isAsync, onLoadCallback, target) => {
      if (!src) return;
      const script = document.createElement("script");
      script.src = src;
      if (isAsync) script.async = isAsync;
      if (onLoadCallback) script.onload = onLoadCallback;

      (target || document.head).appendChild(script);
    };

    const initiatePgAds = () => {
      !!window.__tcfapi && window.__tcfapi("addEventListener", 2, (tcData, success) => {
        if (success && (tcData.eventStatus === "useractioncomplete" || tcData.eventStatus === "tcloaded" || tcData.gdprApplies === false)) {
          if (!window._initAds) {
            window._initAds = true;

            injectPgScript("//fms.360yield.com/ow/bundles/live/pubgalaxy/publishers/Programizcomnew.min.js", true);
            injectPgScript("//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js", true);
            injectPgScript("//btloader.com/tag?o=5184339635601408&upapi=true", true);
            injectPgScript("//srvb1.com/o.js?uid=3de5c6e969bcbef63f8b7a59", true, null, document.body);
          }
        }
      });
    };

        injectPgScript("https://securepubads.g.doubleclick.net/tag/js/gpt.js?network-code=8095840", true, () => {
      window.googlefc = window.googlefc || {
        callbackQueue: []
      };
      window.googlefc.callbackQueue.push({
        "CONSENT_API_READY": initiatePgAds
      });
    });
  </script><script src="https://securepubads.g.doubleclick.net/tag/js/gpt.js?network-code=8095840" async=""></script>

  <script type="text/javascript">
    window.googletag = window.googletag || {};
    window.googletag.cmd = window.googletag.cmd || [];
    window.googletag.cmd.push(function() {
      window.googletag.pubads().enableAsyncRendering();
      window.googletag.pubads().disableInitialLoad();
    });
    (adsbygoogle = window.adsbygoogle || []).pauseAdRequests = 1;
  </script>
    <script>
    // GA4 initialization. Two separate properties, not one property with an environment tag on
    // each event: dev.programiz.com, every preview slot, stage, and local all report to the
    // non-production property (G-CJLR7TBQ1X) - only $isProductionHost's real whitelist
    // (config.php, the same one that already gates ad tags) reports to the production one
    // (G-YJM03XN8Q2). Keeps non-production traffic out of production's data by construction,
    // not by a filter someone has to remember to apply when querying it.
    (function(w, d) {
      const gaId = 'G-YJM03XN8Q2';
      w.dataLayer = w.dataLayer || [];

      function gtag() {
        w.dataLayer.push(arguments);
      }
      w.gtag = gtag;
      // Exposed so trackEvent() (src/utils/analytics.js) can address events to this property with
      // `send_to`: on dev, gtag('event') without it never produced a hit even though the Google tag
      // sent page_view/scroll to the same ID.
      w.gaMeasurementId = gaId;
      gtag('js', new Date());
      gtag('config', gaId, {
        send_page_view: false
      });
    })(window, document);
  </script>
  
    <script>
    (function(w, d, s, l, i) {
      w[l] = w[l] || [];
      w[l].push({
        'gtm.start': new Date().getTime(),
        event: 'gtm.js'
      });
      var f = d.getElementsByTagName(s)[0],
        j = d.createElement(s),
        dl = l != 'dataLayer' ? '&l=' + l : '';
      j.async = true;
      j.src =
        'https://www.googletagmanager.com/gtm.js?id=' + i + dl;
      f.parentNode.insertBefore(j, f);
    })(window, document, 'script', 'dataLayer', 'GTM-TKXT7MH');
  </script>
  
      <script type="text/javascript">
    (function(c, l, a, r, i, t, y) {
      c[a] = c[a] || function() {
        (c[a].q = c[a].q || []).push(arguments)
      };
      t = l.createElement(r);
      t.async = 1;
      t.src = "https://www.clarity.ms/tag/" + i;
      y = l.getElementsByTagName(r)[0];
      y.parentNode.insertBefore(t, y);
    })(window, document, "clarity", "script", "yp7zjdgnh3");
  </script>
  
    <meta http-equiv="x-dns-prefetch-control" content="on">
  <link rel="dns-prefetch" href="https://www.googletagservices.com/">
  <link rel="dns-prefetch" href="https://c.amazon-adsystem.com/">
    <link rel="dns-prefetch" href="https://adservice.google.com/">
  <link rel="dns-prefetch" href="https://cdnjs.cloudflare.com/">

    <link rel="stylesheet" href="./pallidrome_recursion_files/styles.9aaa4e2580e770614440.css">
  
    <script>
    // Exposed for client.js (a plain script, not a module - can't import this) to read when
    // rendering the Turnstile widget the first time the contact modal opens.
    window.__TURNSTILE_SITE_KEY__ = "0x4AAAAAAEejdPAnhRqW6fHy";
  </script>
    <script src="./pallidrome_recursion_files/api.js.download" async="" defer=""></script>
  
<style>
    #pgz-banner { display: none; }

    @media (min-width: 992px) {
      #pgz-banner { position: fixed; top: 0; left: 0; right: 0; height: 80px;
        z-index: 2147483000; box-sizing: border-box; display: flex;
        align-items: center; justify-content: center;
        padding: 0 100px;
        background: #1C2130;
        color: #FFFFFF; font-family: "Euclid Circular A", "Euclid Circular A Medium", system-ui, sans-serif;
        overflow: hidden; }
      #pgz-grid { position: absolute; left: -75px; top: 18.33px; display: block; pointer-events: none; }
      #pgz-content { position: relative; display: flex; align-items: center; gap: 32px; max-width: 1110px; }
      #pgz-offer { display: flex; align-items: center; gap: 16px; }
      #pgz-badge { position: relative; flex: none; width: 84.34px; height: 68.31px;
        transform: scale(0.82); transform-origin: left center; margin-right: -15.18px; }
      .pgz-badge-part { position: absolute; display: flex; align-items: center; justify-content: center;
        font-weight: 700; white-space: nowrap; }
      .pgz-badge-part > span { position: relative; display: block; flex: none; }
      .pgz-badge-part svg { position: absolute; display: block; }
      .pgz-spark svg { left: -0.761px; top: -0.709px; }
      #pgz-badge-pct { left: 1.79px; top: 0; width: 76.25px; height: 41.7px; }
      #pgz-badge-pct > span { transform: rotate(-6.21deg); font-size: 34.05px; line-height: 1;
        letter-spacing: -2.27px; -webkit-text-stroke: 4px #EC008C; paint-order: stroke fill; }
      #pgz-spark-1 { left: 1.59px; top: 2.68px; width: 6.98px; height: 9.97px; }
      #pgz-spark-1 > span { width: 6.98px; height: 9.97px; }
      #pgz-spark-2 { left: 77.01px; top: 8.89px; width: 7.33px; height: 6.07px; }
      #pgz-spark-2 > span { width: 4.415px; height: 6.307px; transform: rotate(107.09deg); }
      #pgz-spark-3 { left: 0; top: 10.76px; width: 6.72px; height: 6.5px; }
      #pgz-spark-3 > span { width: 3.866px; height: 5.523px; transform: rotate(-50.36deg); }
      #pgz-spark-4 { left: 75px; top: 5.93px; width: 5.52px; height: 5.13px; }
      #pgz-spark-4 > span { width: 3.17px; height: 4.528px; transform: rotate(56.73deg); }
      #pgz-badge-tag { left: 13.14px; top: 29.82px; width: 59.59px; height: 38.49px; }
      #pgz-badge-tag > span { width: 56.772px; height: 33.455px; transform: rotate(5.23deg); }
      #pgz-badge-tag svg { left: -0.505px; top: 0; }
      #pgz-badge-off { left: 24.67px; top: 37.32px; width: 33.5px; height: 24.91px; }
      #pgz-badge-off > span { transform: rotate(-7.59deg); font-size: 16.22px; line-height: 20.276px; }
      #pgz-msg { margin: 0; width: 438.66px; font-size: 22px; font-weight: 600; line-height: 24.75px; }
      #pgz-cta { display: inline-flex; align-items: center; gap: 8px; height: 40px;
        box-sizing: border-box; background: linear-gradient(90deg, #EC008C, #FC6767); color: #FFFFFF;
        font-weight: 600; font-size: 16px; line-height: 24px; padding: 8px 12px 8px 16px;
        border-radius: 4px; text-decoration: none; white-space: nowrap;
        transition: filter 150ms ease; }
      #pgz-cta:hover { filter: brightness(0.92); }
      #pgz-cta svg { display: block; flex: none; }
      #pgz-close { position: absolute; top: 50%; right: 24px; transform: translateY(-50%); display: flex;
        background: none; border: 0; color: #FFFFFF; cursor: pointer; opacity: .8; padding: 4px; }
      #pgz-close:hover { opacity: 1; }
      #pgz-close svg { display: block; }
      body { padding-top: 80px !important; }
    }
  </style></head>

<body><div id="pgz-banner">
    <svg id="pgz-grid" aria-hidden="true" width="262.031" height="262.031" viewBox="0 0 262.031 262.031" fill="none" xmlns="http://www.w3.org/2000/svg"><path d="M16.1016 15.4131H30.8281V0H31.5156V15.4131H46.2422V0H46.9297V15.4131H61.6562V0H62.3438V15.4131H77.0703V0H77.7578V15.4131H92.4844V0H93.1719V15.4131H107.895V0H108.582V15.4131H123.309V0H123.996V15.4131H138.723V0H139.41V15.4131H154.137V0H154.824V15.4131H169.551V0H170.238V15.4131H184.961V0H185.648V15.4131H200.379V0H201.066V15.4131H215.793V0H216.48V15.4131H231.207V0H231.895V15.4131H246.617V0H247.305V15.4131H262.031V16.1006H247.305V30.8262H262.031V31.5137H247.305V46.2402H262.031V46.9277H247.305V61.6543H262.031V62.3418H247.305V77.0674H262.031V77.7549H247.305V92.4814H262.031V93.1689H247.305V107.895H262.031V108.582H247.305V123.309H262.031V123.996H247.305V138.723H262.031V139.41H247.305V154.136H262.031V154.823H247.305V169.55H262.031V170.237H247.305V184.963H262.031V185.65H247.305V200.377H262.031V201.064H247.305V215.79H262.031V216.478H247.305V231.203H262.031V231.891H247.305V246.617H262.031V247.305H247.305V262.031H246.617V247.305H231.895V262.031H231.207V247.305H216.48V262.031H215.793V247.305H201.066V262.031H200.379V247.305H185.648V262.031H184.961V247.305H170.238V262.031H169.551V247.305H154.824V262.031H154.137V247.305H139.41V262.031H138.723V247.305H123.996V262.031H123.309V247.305H108.582V262.031H107.895V247.305H93.1719V262.031H92.4844V247.305H77.7578V262.031H77.0703V247.305H62.3438V262.031H61.6562V247.305H46.9297V262.031H46.2422V247.305H31.5156V262.031H30.8281V247.305H16.1016V262.031H15.4141V247.305H0V246.617H15.4141V231.891H0V231.203H15.4141V216.478H0V215.79H15.4141V201.064H0V200.377H15.4141V185.65H0V184.963H15.4141V170.237H0V169.55H15.4141V154.823H0V154.136H15.4141V139.41H0V138.723H15.4141V123.996H0V123.309H15.4141V108.582H0V107.895H15.4141V93.1689H0V92.4814H15.4141V77.7549H0V77.0674H15.4141V62.3418H0V61.6543H15.4141V46.9277H0V46.2402H15.4141V31.5137H0V30.8262H15.4141V16.1006H0V15.4131H15.4141V0H16.1016V15.4131ZM16.1016 231.891V246.617H30.8281V231.891H16.1016ZM31.5156 231.891V246.617H46.2422V231.891H31.5156ZM46.9297 231.891V246.617H61.6562V231.891H46.9297ZM62.3438 231.891V246.617H77.0703V231.891H62.3438ZM77.7578 231.891V246.617H92.4844V231.891H77.7578ZM93.1719 231.891V246.617H107.895V231.891H93.1719ZM108.582 231.891V246.617H123.309V231.891H108.582ZM123.996 231.891V246.617H138.723V231.891H123.996ZM139.41 231.891V246.617H154.137V231.891H139.41ZM154.824 231.891V246.617H169.551V231.891H154.824ZM170.238 231.891V246.617H184.961V231.891H170.238ZM185.648 231.891V246.617H200.379V231.891H185.648ZM201.066 231.891V246.617H215.793V231.891H201.066ZM216.48 231.891V246.617H231.207V231.891H216.48ZM231.895 231.891V246.617H246.617V231.891H231.895ZM16.1016 231.203H30.8281V216.478H16.1016V231.203ZM31.5156 231.203H46.2422V216.478H31.5156V231.203ZM46.9297 231.203H61.6562V216.478H46.9297V231.203ZM62.3438 231.203H77.0703V216.478H62.3438V231.203ZM77.7578 231.203H92.4844V216.478H77.7578V231.203ZM93.1719 231.203H107.895V216.478H93.1719V231.203ZM108.582 231.203H123.309V216.478H108.582V231.203ZM123.996 231.203H138.723V216.478H123.996V231.203ZM139.41 231.203H154.137V216.478H139.41V231.203ZM154.824 231.203H169.551V216.478H154.824V231.203ZM170.238 231.203H184.961V216.478H170.238V231.203ZM185.648 231.203H200.379V216.478H185.648V231.203ZM201.066 231.203H215.793V216.478H201.066V231.203ZM216.48 231.203H231.207V216.478H216.48V231.203ZM231.895 231.203H246.617V216.478H231.895V231.203ZM16.1016 215.79H30.8281V201.064H16.1016V215.79ZM31.5156 215.79H46.2422V201.064H31.5156V215.79ZM46.9297 215.79H61.6562V201.064H46.9297V215.79ZM62.3438 215.79H77.0703V201.064H62.3438V215.79ZM77.7578 215.79H92.4844V201.064H77.7578V215.79ZM93.1719 215.79H107.895V201.064H93.1719V215.79ZM108.582 215.79H123.309V201.064H108.582V215.79ZM123.996 215.79H138.723V201.064H123.996V215.79ZM139.41 215.79H154.137V201.064H139.41V215.79ZM154.824 215.79H169.551V201.064H154.824V215.79ZM170.238 215.79H184.961V201.064H170.238V215.79ZM185.648 215.79H200.379V201.064H185.648V215.79ZM201.066 215.79H215.793V201.064H201.066V215.79ZM216.48 215.79H231.207V201.064H216.48V215.79ZM231.895 215.79H246.617V201.064H231.895V215.79ZM16.1016 200.377H30.8281V185.65H16.1016V200.377ZM31.5156 200.377H46.2422V185.65H31.5156V200.377ZM46.9297 200.377H61.6562V185.65H46.9297V200.377ZM62.3438 200.377H77.0703V185.65H62.3438V200.377ZM77.7578 200.377H92.4844V185.65H77.7578V200.377ZM93.1719 200.377H107.895V185.65H93.1719V200.377ZM108.582 200.377H123.309V185.65H108.582V200.377ZM123.996 200.377H138.723V185.65H123.996V200.377ZM139.41 200.377H154.137V185.65H139.41V200.377ZM154.824 200.377H169.551V185.65H154.824V200.377ZM170.238 200.377H184.961V185.65H170.238V200.377ZM185.648 200.377H200.379V185.65H185.648V200.377ZM201.066 200.377H215.793V185.65H201.066V200.377ZM216.48 200.377H231.207V185.65H216.48V200.377ZM231.895 200.377H246.617V185.65H231.895V200.377ZM16.1016 184.963H30.8281V170.237H16.1016V184.963ZM31.5156 184.963H46.2422V170.237H31.5156V184.963ZM46.9297 184.963H61.6562V170.237H46.9297V184.963ZM62.3438 184.963H77.0703V170.237H62.3438V184.963ZM77.7578 184.963H92.4844V170.237H77.7578V184.963ZM93.1719 184.963H107.895V170.237H93.1719V184.963ZM108.582 184.963H123.309V170.237H108.582V184.963ZM123.996 184.963H138.723V170.237H123.996V184.963ZM139.41 184.963H154.137V170.237H139.41V184.963ZM154.824 184.963H169.551V170.237H154.824V184.963ZM170.238 184.963H184.961V170.237H170.238V184.963ZM185.648 184.963H200.379V170.237H185.648V184.963ZM201.066 184.963H215.793V170.237H201.066V184.963ZM216.48 184.963H231.207V170.237H216.48V184.963ZM231.895 184.963H246.617V170.237H231.895V184.963ZM16.1016 169.55H30.8281V154.823H16.1016V169.55ZM31.5156 169.55H46.2422V154.823H31.5156V169.55ZM46.9297 169.55H61.6562V154.823H46.9297V169.55ZM62.3438 169.55H77.0703V154.823H62.3438V169.55ZM77.7578 169.55H92.4844V154.823H77.7578V169.55ZM93.1719 169.55H107.895V154.823H93.1719V169.55ZM108.582 169.55H123.309V154.823H108.582V169.55ZM123.996 169.55H138.723V154.823H123.996V169.55ZM139.41 169.55H154.137V154.823H139.41V169.55ZM154.824 169.55H169.551V154.823H154.824V169.55ZM170.238 169.55H184.961V154.823H170.238V169.55ZM185.648 169.55H200.379V154.823H185.648V169.55ZM201.066 169.55H215.793V154.823H201.066V169.55ZM216.48 169.55H231.207V154.823H216.48V169.55ZM231.895 169.55H246.617V154.823H231.895V169.55ZM16.1016 154.136H30.8281V139.41H16.1016V154.136ZM31.5156 154.136H46.2422V139.41H31.5156V154.136ZM46.9297 154.136H61.6562V139.41H46.9297V154.136ZM62.3438 154.136H77.0703V139.41H62.3438V154.136ZM77.7578 154.136H92.4844V139.41H77.7578V154.136ZM93.1719 154.136H107.895V139.41H93.1719V154.136ZM108.582 154.136H123.309V139.41H108.582V154.136ZM123.996 154.136H138.723V139.41H123.996V154.136ZM139.41 154.136H154.137V139.41H139.41V154.136ZM154.824 154.136H169.551V139.41H154.824V154.136ZM170.238 154.136H184.961V139.41H170.238V154.136ZM185.648 154.136H200.379V139.41H185.648V154.136ZM201.066 154.136H215.793V139.41H201.066V154.136ZM216.48 154.136H231.207V139.41H216.48V154.136ZM231.895 154.136H246.617V139.41H231.895V154.136ZM16.1016 138.723H30.8281V123.996H16.1016V138.723ZM31.5156 138.723H46.2422V123.996H31.5156V138.723ZM46.9297 138.723H61.6562V123.996H46.9297V138.723ZM62.3438 138.723H77.0703V123.996H62.3438V138.723ZM77.7578 138.723H92.4844V123.996H77.7578V138.723ZM93.1719 138.723H107.895V123.996H93.1719V138.723ZM108.582 138.723H123.309V123.996H108.582V138.723ZM123.996 138.723H138.723V123.996H123.996V138.723ZM139.41 138.723H154.137V123.996H139.41V138.723ZM154.824 138.723H169.551V123.996H154.824V138.723ZM170.238 138.723H184.961V123.996H170.238V138.723ZM185.648 138.723H200.379V123.996H185.648V138.723ZM201.066 138.723H215.793V123.996H201.066V138.723ZM216.48 138.723H231.207V123.996H216.48V138.723ZM231.895 138.723H246.617V123.996H231.895V138.723ZM16.1016 123.309H30.8281V108.582H16.1016V123.309ZM31.5156 123.309H46.2422V108.582H31.5156V123.309ZM46.9297 123.309H61.6562V108.582H46.9297V123.309ZM62.3438 123.309H77.0703V108.582H62.3438V123.309ZM77.7578 123.309H92.4844V108.582H77.7578V123.309ZM93.1719 123.309H107.895V108.582H93.1719V123.309ZM108.582 123.309H123.309V108.582H108.582V123.309ZM123.996 123.309H138.723V108.582H123.996V123.309ZM139.41 123.309H154.137V108.582H139.41V123.309ZM154.824 123.309H169.551V108.582H154.824V123.309ZM170.238 123.309H184.961V108.582H170.238V123.309ZM185.648 123.309H200.379V108.582H185.648V123.309ZM201.066 123.309H215.793V108.582H201.066V123.309ZM216.48 123.309H231.207V108.582H216.48V123.309ZM231.895 123.309H246.617V108.582H231.895V123.309ZM16.1016 107.895H30.8281V93.1689H16.1016V107.895ZM31.5156 107.895H46.2422V93.1689H31.5156V107.895ZM46.9297 107.895H61.6562V93.1689H46.9297V107.895ZM62.3438 107.895H77.0703V93.1689H62.3438V107.895ZM77.7578 107.895H92.4844V93.1689H77.7578V107.895ZM93.1719 107.895H107.895V93.1689H93.1719V107.895ZM108.582 107.895H123.309V93.1689H108.582V107.895ZM123.996 107.895H138.723V93.1689H123.996V107.895ZM139.41 107.895H154.137V93.1689H139.41V107.895ZM154.824 107.895H169.551V93.1689H154.824V107.895ZM170.238 107.895H184.961V93.1689H170.238V107.895ZM185.648 107.895H200.379V93.1689H185.648V107.895ZM201.066 107.895H215.793V93.1689H201.066V107.895ZM216.48 107.895H231.207V93.1689H216.48V107.895ZM231.895 107.895H246.617V93.1689H231.895V107.895ZM16.1016 92.4814H30.8281V77.7549H16.1016V92.4814ZM31.5156 92.4814H46.2422V77.7549H31.5156V92.4814ZM46.9297 92.4814H61.6562V77.7549H46.9297V92.4814ZM62.3438 92.4814H77.0703V77.7549H62.3438V92.4814ZM77.7578 92.4814H92.4844V77.7549H77.7578V92.4814ZM93.1719 92.4814H107.895V77.7549H93.1719V92.4814ZM108.582 92.4814H123.309V77.7549H108.582V92.4814ZM123.996 92.4814H138.723V77.7549H123.996V92.4814ZM139.41 92.4814H154.137V77.7549H139.41V92.4814ZM154.824 92.4814H169.551V77.7549H154.824V92.4814ZM170.238 92.4814H184.961V77.7549H170.238V92.4814ZM185.648 92.4814H200.379V77.7549H185.648V92.4814ZM201.066 92.4814H215.793V77.7549H201.066V92.4814ZM216.48 92.4814H231.207V77.7549H216.48V92.4814ZM231.895 92.4814H246.617V77.7549H231.895V92.4814ZM16.1016 77.0674H30.8281V62.3418H16.1016V77.0674ZM31.5156 77.0674H46.2422V62.3418H31.5156V77.0674ZM46.9297 77.0674H61.6562V62.3418H46.9297V77.0674ZM62.3438 77.0674H77.0703V62.3418H62.3438V77.0674ZM77.7578 77.0674H92.4844V62.3418H77.7578V77.0674ZM93.1719 77.0674H107.895V62.3418H93.1719V77.0674ZM108.582 77.0674H123.309V62.3418H108.582V77.0674ZM123.996 77.0674H138.723V62.3418H123.996V77.0674ZM139.41 77.0674H154.137V62.3418H139.41V77.0674ZM154.824 77.0674H169.551V62.3418H154.824V77.0674ZM170.238 77.0674H184.961V62.3418H170.238V77.0674ZM185.648 77.0674H200.379V62.3418H185.648V77.0674ZM201.066 77.0674H215.793V62.3418H201.066V77.0674ZM216.48 77.0674H231.207V62.3418H216.48V77.0674ZM231.895 77.0674H246.617V62.3418H231.895V77.0674ZM16.1016 61.6543H30.8281V46.9277H16.1016V61.6543ZM31.5156 61.6543H46.2422V46.9277H31.5156V61.6543ZM46.9297 61.6543H61.6562V46.9277H46.9297V61.6543ZM62.3438 61.6543H77.0703V46.9277H62.3438V61.6543ZM77.7578 61.6543H92.4844V46.9277H77.7578V61.6543ZM93.1719 61.6543H107.895V46.9277H93.1719V61.6543ZM108.582 61.6543H123.309V46.9277H108.582V61.6543ZM123.996 61.6543H138.723V46.9277H123.996V61.6543ZM139.41 61.6543H154.137V46.9277H139.41V61.6543ZM154.824 61.6543H169.551V46.9277H154.824V61.6543ZM170.238 61.6543H184.961V46.9277H170.238V61.6543ZM185.648 61.6543H200.379V46.9277H185.648V61.6543ZM201.066 61.6543H215.793V46.9277H201.066V61.6543ZM216.48 61.6543H231.207V46.9277H216.48V61.6543ZM231.895 61.6543H246.617V46.9277H231.895V61.6543ZM16.1016 46.2402H30.8281V31.5137H16.1016V46.2402ZM31.5156 46.2402H46.2422V31.5137H31.5156V46.2402ZM46.9297 46.2402H61.6562V31.5137H46.9297V46.2402ZM62.3438 46.2402H77.0703V31.5137H62.3438V46.2402ZM77.7578 46.2402H92.4844V31.5137H77.7578V46.2402ZM93.1719 46.2402H107.895V31.5137H93.1719V46.2402ZM108.582 46.2402H123.309V31.5137H108.582V46.2402ZM123.996 46.2402H138.723V31.5137H123.996V46.2402ZM139.41 46.2402H154.137V31.5137H139.41V46.2402ZM154.824 46.2402H169.551V31.5137H154.824V46.2402ZM170.238 46.2402H184.961V31.5137H170.238V46.2402ZM185.648 46.2402H200.379V31.5137H185.648V46.2402ZM201.066 46.2402H215.793V31.5137H201.066V46.2402ZM216.48 46.2402H231.207V31.5137H216.48V46.2402ZM231.895 46.2402H246.617V31.5137H231.895V46.2402ZM16.1016 30.8262H30.8281V16.1006H16.1016V30.8262ZM31.5156 30.8262H46.2422V16.1006H31.5156V30.8262ZM46.9297 30.8262H61.6562V16.1006H46.9297V30.8262ZM62.3438 30.8262H77.0703V16.1006H62.3438V30.8262ZM77.7578 30.8262H92.4844V16.1006H77.7578V30.8262ZM93.1719 30.8262H107.895V16.1006H93.1719V30.8262ZM108.582 30.8262H123.309V16.1006H108.582V30.8262ZM123.996 30.8262H138.723V16.1006H123.996V30.8262ZM139.41 30.8262H154.137V16.1006H139.41V30.8262ZM154.824 30.8262H169.551V16.1006H154.824V30.8262ZM170.238 30.8262H184.961V16.1006H170.238V30.8262ZM185.648 30.8262H200.379V16.1006H185.648V30.8262ZM201.066 30.8262H215.793V16.1006H201.066V30.8262ZM216.48 30.8262H231.207V16.1006H216.48V30.8262ZM231.895 30.8262H246.617V16.1006H231.895V30.8262Z" fill="url(#pgz-union-radial)" fill-opacity="0.6"></path><defs><radialgradient id="pgz-union-radial" cx="0" cy="0" r="1" gradientUnits="userSpaceOnUse" gradientTransform="translate(131.016 131.016) rotate(90) scale(131.016)"><stop offset="0.00350423" stop-color="#EE0C88"></stop><stop offset="1" stop-color="#C0BEF5" stop-opacity="0.1"></stop></radialgradient></defs></svg>
    <div id="pgz-content">
      <div id="pgz-offer">
        <div id="pgz-badge" aria-label="40% off" role="img">
          <span class="pgz-badge-part" id="pgz-badge-pct"><span>40%</span></span>
          <span class="pgz-badge-part pgz-spark" id="pgz-spark-1"><span><svg aria-hidden="true" width="8.17708" height="11.6815" viewBox="0 0 8.17708 11.6815" fill="none" xmlns="http://www.w3.org/2000/svg"><path d="M0.761409 4.19767L7.73895 10.6768V0.708905L0.761409 4.19767Z" fill="white" stroke="url(#pgz-vector5-linear)" stroke-width="0.876255"></path><defs><lineargradient id="pgz-vector5-linear" x1="0.761409" y1="5.69286" x2="7.73895" y2="5.69286" gradientUnits="userSpaceOnUse"><stop stop-color="#EC008C"></stop><stop offset="1" stop-color="#FC6767"></stop></lineargradient></defs></svg></span></span><span class="pgz-badge-part pgz-spark" id="pgz-spark-2"><span><svg aria-hidden="true" width="5.61439" height="8.02056" viewBox="0 0 5.61439 8.02056" fill="none" xmlns="http://www.w3.org/2000/svg"><path d="M0.761409 2.91633L5.17626 7.01584V0.708905L0.761409 2.91633Z" fill="white" stroke="url(#pgz-vector7-linear)" stroke-width="0.876255"></path><defs><lineargradient id="pgz-vector7-linear" x1="0.761409" y1="3.86237" x2="5.17626" y2="3.86237" gradientUnits="userSpaceOnUse"><stop stop-color="#EC008C"></stop><stop offset="1" stop-color="#FC6767"></stop></lineargradient></defs></svg></span></span><span class="pgz-badge-part pgz-spark" id="pgz-spark-3"><span><svg aria-hidden="true" width="5.06548" height="7.23639" viewBox="0 0 5.06548 7.23639" fill="none" xmlns="http://www.w3.org/2000/svg"><path d="M0.761409 2.64187L4.62735 6.23167V0.708905L0.761409 2.64187Z" fill="white" stroke="url(#pgz-vector6-linear)" stroke-width="0.876255"></path><defs><lineargradient id="pgz-vector6-linear" x1="0.761409" y1="3.47029" x2="4.62735" y2="3.47029" gradientUnits="userSpaceOnUse"><stop stop-color="#EC008C"></stop><stop offset="1" stop-color="#FC6767"></stop></lineargradient></defs></svg></span></span><span class="pgz-badge-part pgz-spark" id="pgz-spark-4"><span><svg aria-hidden="true" width="4.36922" height="6.24173" viewBox="0 0 4.36922 6.24173" fill="none" xmlns="http://www.w3.org/2000/svg"><path d="M0.761409 2.29374L3.93109 5.23702V0.708905L0.761409 2.29374Z" fill="white" stroke="url(#pgz-vector8-linear)" stroke-width="0.876255"></path><defs><lineargradient id="pgz-vector8-linear" x1="0.761409" y1="2.97296" x2="3.93109" y2="2.97296" gradientUnits="userSpaceOnUse"><stop stop-color="#EC008C"></stop><stop offset="1" stop-color="#FC6767"></stop></lineargradient></defs></svg></span></span>
          <span class="pgz-badge-part" id="pgz-badge-tag"><span><svg aria-hidden="true" width="57.7853" height="33.4435" viewBox="0 0 57.7853 33.4435" fill="none" xmlns="http://www.w3.org/2000/svg"><path d="M54.8092 0.556624L2.09273 12.3237C1.16595 12.5306 0.506889 13.3529 0.506889 14.3025V30.9079C0.506889 32.2129 1.72176 33.1781 2.99294 32.883L55.7094 20.6452C56.6281 20.432 57.2784 19.6134 57.2784 18.6702V2.53548C57.2784 1.23757 56.0759 0.27387 54.8092 0.556624Z" fill="url(#pgz-vector9-linear)" stroke="white" stroke-width="1.01378"></path><defs><lineargradient id="pgz-vector9-linear" x1="0.506889" y1="16.7328" x2="57.2784" y2="16.7328" gradientUnits="userSpaceOnUse"><stop stop-color="#EC008C"></stop><stop offset="1" stop-color="#FC6767"></stop></lineargradient></defs></svg></span></span>
          <span class="pgz-badge-part" id="pgz-badge-off"><span>OFF</span></span>
        </div>
        <p id="pgz-msg">Be one of the first 100 customers to get<br>this offer in Programiz PRO.</p>
      </div>
      <a id="pgz-cta" href="https://programiz.pro/?utm_source=compiler&amp;utm_medium=referral&amp;utm_audience=ORGANIC-FREEMIUM&amp;utm_campaign=student-2026" target="_blank" rel="noreferrer">Claim 40% off<svg width="20" height="20" viewBox="0 0 20 20" fill="none" xmlns="http://www.w3.org/2000/svg" aria-hidden="true"><path d="M7.5 15L12.5 10L7.5 5" stroke="currentColor" stroke-width="1.6" stroke-linecap="round" stroke-linejoin="round"></path></svg></a>
    </div>
    <button id="pgz-close" type="button" aria-label="Dismiss banner"><svg width="16" height="16" viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg" aria-hidden="true"><path d="M12.6667 3.23576L3.33338 12.5691" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path><path d="M3.33333 3.23576L12.6666 12.5691" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path></svg></button>
  </div>
      
        <div class="container dark-mode tw:w-screen tw:overflow-hidden tw:relative" id="root" data-lang="cpp">
        <script>
      (function () {
        try {
          var root = document.getElementById('root');
          var raw = localStorage.getItem('playground');
          var stored = raw ? JSON.parse(raw) : null;
          var isDark = stored && stored.darkMode ? !!stored.darkMode.status : root.dataset.lang === 'python';

          if (!isDark) {
            root.classList.remove('dark-mode');
            root.setAttribute('data-viz-theme', 'light');
          }
        } catch (e) {
          // Leave the server-rendered dark default in place - matches getDarkModeStatus()'s own
          // fail-safe (any read/parse error there falls through to the same dark default too).
        }
      })();
    </script>
        <div class="spinner tw:bg-surface tw:dark:bg-[#1c2130] tw:fixed tw:top-0 tw:left-0 tw:z-[2147483001] tw:h-full tw:w-full tw:flex tw:justify-center tw:items-center" style="display: none">
      <div class="loader tw:opacity-80 tw:text-primary tw:dark:text-white tw:text-[20vh] tw:font-bold tw:font-[Consolas,Menlo,Monaco,monospace]">
        <span>{</span><span>}</span>
      </div>
    </div>
    <div class="mobile-nav-drawer tw:hidden tw:relative show">
      <div class="nav-backdrop tw:absolute tw:bg-black/60 tw:z-[999] tw:top-0 tw:left-[-999px] tw:w-screen tw:h-[1000px]">
      </div>
      <div class="nav-menu tw:z-[1000] tw:w-[calc(100vw-52px)] tw:h-[1000px] tw:absolute tw:left-[-999px] tw:top-0 tw:bg-white tw:dark:bg-[#383b40] tw:pt-[26px] tw:pr-0 tw:pb-[26px] tw:pl-6 tw:box-border tw:transition-all tw:duration-300 tw:ease-[ease] tw:overflow-hidden">
        <div class="nav-header-wrapper tw:flex tw:justify-between">
          <div class="nav-logo-title-wrapper">
            <a href="https://www.programiz.com/" target="_blank" class="nav-logo-link">
                            <img id="nav-logo" class="tw:w-[68px] tw:h-[23px]" alt="Programiz" src="./pallidrome_recursion_files/logo-inverted.svg">
            </a>
          </div>
          <button type="button" class="close-nav-btn tw:mt-0 tw:mr-5 tw:mb-0 tw:ml-0 tw:border-0 tw:bg-transparent" title="Close navigation">
            <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" class="svg replaced-svg">
<path d="M19 4.85352L5.00006 18.8535" stroke="#25265E" stroke-opacity="0.7" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
<path d="M5 4.85352L18.9999 18.8535" stroke="#25265E" stroke-opacity="0.7" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
</svg>
          </button>
        </div>
        <div class="nav-menu-list tw:pt-[40px] tw:overflow-y-scroll tw:h-[calc(100dvh-90px)]">
          <a target="_blank" href="https://www.programiz.com/python-programming/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border python " title="Online Python Compiler">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" fill="none" viewBox="0 0 24 25" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
  <path fill-opacity=".4" d="M9.091 11.663h5.782c1.61 0 2.877-1.353 2.877-2.96V3.225c0-1.559-1.315-2.73-2.886-2.99A18.088 18.088 0 0011.853 0a16.25 16.25 0 00-2.738.235c-2.45.43-2.866 1.33-2.866 2.99v2.132H12v.788H4.025C2.342 6.145.868 7.152.408 9.064c-.532 2.191-.556 3.531 0 5.82.411 1.702 1.394 2.888 3.076 2.888h1.972V15.2c0-1.9 1.672-3.538 3.635-3.538zm-.364-7.707c-.6 0-1.087-.489-1.087-1.093 0-.606.486-1.1 1.087-1.1.597 0 1.086.494 1.086 1.1a1.09 1.09 0 01-1.086 1.093zm14.83 5.108c-.416-1.665-1.21-2.919-2.895-2.919h-2.118v2.558c0 1.98-1.744 3.551-3.671 3.551H9.091c-1.584 0-2.842 1.444-2.842 3.02v5.479c0 1.558 1.338 2.475 2.868 2.923 1.833.535 3.568.632 5.76 0 1.458-.42 2.873-1.264 2.873-2.923V18.56H12v-.788h8.662c1.682 0 2.31-1.138 2.895-2.89.604-1.801.578-3.506 0-5.818zm-8.32 10.958c.6 0 1.087.488 1.087 1.093 0 .606-.486 1.1-1.087 1.1a1.095 1.095 0 01-1.086-1.1 1.09 1.09 0 011.086-1.093z"></path>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Online Python Compiler
            </span>
          </a>
          <a target="_blank" href="https://www.programiz.com/r/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border r " title="Online R Compiler">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" width="40" height="40" viewBox="0 0 40 40" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<g clip-path="url(#clip0_2886_601)">
<path fill-rule="evenodd" clip-rule="evenodd" d="M20.4449 31.25C31.1885 31.25 38.7187 25.3737 38.7187 18.125C38.7187 10.8763 32.1297 5 19.2656 5C8.52191 5 -0.1875 10.8763 -0.1875 18.125C-0.1875 25.3737 9.70118 31.25 20.4449 31.25ZM23.1934 27.9688C31.2187 27.9688 36.8437 23.9813 36.8437 19.0625C36.8437 14.1437 31.9219 10.1562 22.3125 10.1562C14.2871 10.1562 7.78131 14.1437 7.78131 19.0625C7.78131 23.9813 15.168 27.9688 23.1934 27.9688Z" fill="#6D6D93"></path>
<path fill-rule="evenodd" clip-rule="evenodd" d="M16.2188 35H22.7814V26.3281H24.2416C24.9302 26.3281 25.5635 26.7057 25.891 27.3116L30.047 35H37.547L32.9028 26.9784C32.572 26.4069 32.0506 25.9702 31.43 25.7445L29.8126 25.1562C32.3907 25.1562 35.2032 23.0469 35.4376 19.5312C35.672 16.0156 34.0314 13.2031 29.8126 13.2031H16.2188V35ZM27.0001 17.6562H22.7814V21.875H27.0001C29.3437 21.875 29.3437 17.6562 27.0001 17.6562Z" fill="#6D6D93"></path>
</g>
<defs>
<clippath id="clip0_2886_601">
<rect width="40" height="40" fill="white"></rect>
</clippath>
</defs>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Online R Compiler
            </span>
          </a>
          <a target="_blank" href="https://www.programiz.com/sql/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border sql" title="Online SQL Editor">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" width="21" height="28" viewBox="0 0 21 28" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<path fill-rule="evenodd" clip-rule="evenodd" d="M10.8017 4.96503C16.2496 4.96503 20.6659 4.07743 20.6659 2.98251C20.6659 1.8876 16.2496 1 10.8017 1C5.35386 1 0.9375 1.8876 0.9375 2.98251C0.9375 4.07743 5.35386 4.96503 10.8017 4.96503ZM10.8019 4.19152C15.7423 4.19152 19.7474 3.58535 19.7474 2.8376C19.7474 2.08986 15.7423 1.48369 10.8019 1.48369C5.86141 1.48369 1.85638 2.08986 1.85638 2.8376C1.85638 3.58535 5.86141 4.19152 10.8019 4.19152Z" fill="#A8A8BF"></path>
<path d="M20.3659 2.98251C20.3659 3.01082 20.353 3.0721 20.2553 3.16803C20.1571 3.26451 19.9962 3.37195 19.762 3.48323C19.2951 3.70509 18.6003 3.91285 17.7177 4.09024C15.9573 4.44404 13.512 4.66503 10.8017 4.66503V5.26503C13.5393 5.26503 16.0261 5.04221 17.8359 4.67848C18.7383 4.49711 19.4881 4.27768 20.0195 4.02516C20.2845 3.89926 20.5112 3.75773 20.6757 3.59609C20.8409 3.4339 20.9659 3.22793 20.9659 2.98251H20.3659ZM10.8017 1.3C13.512 1.3 15.9573 1.52099 17.7177 1.87478C18.6003 2.05218 19.2951 2.25994 19.762 2.4818C19.9962 2.59307 20.1571 2.70052 20.2553 2.797C20.353 2.89292 20.3659 2.9542 20.3659 2.98251H20.9659C20.9659 2.7371 20.8409 2.53113 20.6757 2.36894C20.5112 2.2073 20.2845 2.06577 20.0195 1.93986C19.4881 1.68735 18.7383 1.46792 17.8359 1.28655C16.0261 0.922815 13.5393 0.7 10.8017 0.7V1.3ZM1.2375 2.98251C1.2375 2.9542 1.25046 2.89292 1.34812 2.797C1.44635 2.70052 1.60725 2.59307 1.84143 2.4818C2.30833 2.25994 3.00312 2.05218 3.88577 1.87478C5.64613 1.52099 8.09145 1.3 10.8017 1.3V0.7C8.06413 0.7 5.57733 0.922815 3.76755 1.28655C2.86513 1.46792 2.11534 1.68735 1.58392 1.93986C1.31896 2.06577 1.09226 2.2073 0.927691 2.36894C0.762556 2.53113 0.6375 2.7371 0.6375 2.98251H1.2375ZM10.8017 4.66503C8.09145 4.66503 5.64613 4.44404 3.88577 4.09024C3.00312 3.91285 2.30833 3.70509 1.84143 3.48323C1.60725 3.37195 1.44635 3.26451 1.34812 3.16803C1.25046 3.0721 1.2375 3.01082 1.2375 2.98251H0.6375C0.6375 3.22793 0.762556 3.4339 0.927691 3.59609C1.09226 3.75773 1.31896 3.89926 1.58392 4.02516C2.11534 4.27768 2.86513 4.49711 3.76755 4.67848C5.57733 5.04221 8.06413 5.26503 10.8017 5.26503V4.66503ZM19.4474 2.8376C19.4474 2.78735 19.4799 2.8007 19.3872 2.86927C19.3023 2.9321 19.158 3.00532 18.9433 3.08215C18.5175 3.2345 17.8846 3.37692 17.0824 3.49834C15.4825 3.74048 13.2619 3.89152 10.8019 3.89152V4.49152C13.2823 4.49152 15.5344 4.33947 17.1722 4.09159C17.9887 3.968 18.6659 3.81867 19.1454 3.64707C19.3834 3.56191 19.5906 3.46511 19.744 3.35166C19.8896 3.24396 20.0474 3.07479 20.0474 2.8376H19.4474ZM10.8019 1.78369C13.2619 1.78369 15.4825 1.93473 17.0824 2.17687C17.8846 2.29829 18.5175 2.4407 18.9433 2.59306C19.158 2.66989 19.3023 2.74311 19.3872 2.80594C19.4799 2.87451 19.4474 2.88785 19.4474 2.8376H20.0474C20.0474 2.60042 19.8896 2.43125 19.744 2.32355C19.5906 2.2101 19.3834 2.11329 19.1454 2.02814C18.6659 1.85654 17.9887 1.70721 17.1722 1.58362C15.5344 1.33574 13.2823 1.18369 10.8019 1.18369V1.78369ZM2.15638 2.8376C2.15638 2.88785 2.1238 2.87451 2.21651 2.80594C2.30145 2.74311 2.44574 2.66989 2.66043 2.59306C3.08621 2.4407 3.71909 2.29829 4.52134 2.17687C6.1212 1.93473 8.34185 1.78369 10.8019 1.78369V1.18369C8.32142 1.18369 6.06933 1.33574 4.43155 1.58362C3.61499 1.70721 2.93784 1.85654 2.45828 2.02814C2.22031 2.11329 2.0131 2.2101 1.85972 2.32355C1.71411 2.43125 1.55638 2.60042 1.55638 2.8376H2.15638ZM10.8019 3.89152C8.34185 3.89152 6.1212 3.74048 4.52134 3.49834C3.71909 3.37692 3.08621 3.2345 2.66043 3.08215C2.44574 3.00532 2.30145 2.9321 2.21651 2.86927C2.1238 2.8007 2.15638 2.78735 2.15638 2.8376H1.55638C1.55638 3.07479 1.71411 3.24396 1.85972 3.35166C2.0131 3.46511 2.22031 3.56191 2.45828 3.64707C2.93784 3.81867 3.61499 3.968 4.43155 4.09159C6.06933 4.33947 8.32142 4.49152 10.8019 4.49152V3.89152Z" fill="#A8A8BF"></path>
<path d="M0.9375 2.93359C0.9375 2.93359 4.43011 4.25786 10.7679 4.25786C17.1057 4.25786 20.6659 2.93359 20.6659 2.93359V8.76378C20.6659 8.76378 20.1582 11.1054 10.8017 11.1054C1.44522 11.1054 0.9375 8.76378 0.9375 8.76378V2.93359Z" fill="#A8A8BF" stroke="#A8A8BF" stroke-width="0.6" stroke-linecap="round" stroke-linejoin="round"></path>
<path d="M0.9375 11.0636C0.9375 11.0636 0.944635 10.9089 0.985854 10.8218C1.04301 10.7012 1.22762 10.5801 1.22762 10.5801C1.22762 10.5801 2.92001 12.3208 10.8017 12.3208C18.6834 12.3208 20.3033 10.5801 20.3033 10.5801C20.4998 10.6953 20.6196 10.8408 20.6659 11.0636V16.8938C20.6659 16.8938 20.1582 19.2354 10.8017 19.2354C1.44522 19.2354 0.9375 16.8938 0.9375 16.8938V11.0636Z" fill="#A8A8BF" stroke="#A8A8BF" stroke-width="0.6" stroke-linecap="round" stroke-linejoin="round"></path>
<path d="M0.9375 19.2238C0.9375 19.2238 0.944635 19.069 0.985854 18.982C1.04301 18.8613 1.22762 18.7402 1.22762 18.7402C1.22762 18.7402 2.92001 20.481 10.8017 20.481C18.6834 20.481 20.3033 18.7402 20.3033 18.7402C20.4998 18.8554 20.6196 19.0009 20.6659 19.2238V25.054C20.6659 25.054 20.1582 27.3956 10.8017 27.3956C1.44522 27.3956 0.9375 25.054 0.9375 25.054V19.2238Z" fill="#A8A8BF" stroke="#A8A8BF" stroke-width="0.6" stroke-linecap="round" stroke-linejoin="round"></path>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Online SQL Editor
            </span>
          </a>
          <a target="_blank" href="https://www.programiz.com/html/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border html" title="Online HTML/CSS Editor">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" width="86" height="98" viewBox="0 0 86 98" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<path fill-rule="evenodd" clip-rule="evenodd" d="M0 0L7.81641 87.668L42.8914 97.4047L78.0625 87.6547L85.8875 0H0ZM42.9624 39.9803H28.7717L27.7889 28.9693H42.9624H42.9998H68.9343L69.1499 26.5537L69.6405 21.1021L69.8976 18.2178H42.9998H42.9624H16.0381L16.2959 21.1021L18.9381 50.7326H42.9624H42.9998H56.2022L54.9546 64.6772L42.9624 67.9139V67.9149L42.9521 67.9178L30.9779 64.6834L30.2131 56.1092H19.4186L20.9248 72.9912L42.9506 79.1053L42.9998 79.092V79.0902L65.0054 72.9912L65.1671 71.1748L67.6936 42.8678L67.9554 39.9803H65.0585H42.9998H42.9624Z" fill="#F9F7F7"></path>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Online HTML/CSS Editor
            </span>
          </a>
          <a target="_blank" href="https://www.programiz.com/java-programming/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border java " title="Online Java Compiler">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" fill="none" viewBox="0 0 21 28" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
  <path fill-rule="evenodd" d="M13.266 1s2.718 2.703-2.578 6.857c-3.285 2.578-2.069 4.3-.902 5.951.343.485.68.963.9 1.456-2.48-2.223-4.298-4.18-3.078-6.002.596-.89 1.543-1.626 2.501-2.372 1.922-1.495 3.889-3.026 3.157-5.89zm-1.403 12.431c1.263 1.445-.331 2.744-.331 2.744s3.204-1.644 1.733-3.703a46.915 46.915 0 00-.175-.242c-1.278-1.764-2.008-2.772 3.452-5.92 0 0-8.956 2.223-4.679 7.122zm-4.65 7.678s-.998.577.713.772c2.073.236 3.133.202 5.417-.227 0 0 .601.374 1.44.698-5.122 2.18-11.592-.127-7.57-1.244zm-.625-2.847s-1.121.825.591 1.001c2.215.227 3.964.246 6.99-.333 0 0 .419.422 1.076.652-6.191 1.8-13.088.142-8.657-1.32zm11.235 6.028c1.554-.468.815-1.075.815-1.075 2.708 1.215-5.885 3.655-16.326 1.972-3.83-.617 1.842-2.77 2.88-2.044 0 0-.328-.022-.902.101-.55.118-2.3.678-1.368 1.082 2.597 1.122 11.945.854 14.9-.036zM6.01 16.845c-3.07-.409 1.684-1.531 1.684-1.531s-1.847-.124-4.117.967c-2.686 1.29 6.641 1.879 11.47.616.503-.34 1.196-.636 1.196-.636s-1.975.351-3.943.516c-2.409.2-4.993.24-6.29.067zM17.28 15.41c1.584-.328 3.854 2.108-1.055 4.642-.02.055-.084.115-.096.127l-.002.001c6.555-1.712 4.145-6.036 1.011-4.941a.89.89 0 00-.419.321s.174-.07.561-.15zm3.017 9.127c-.172 2.216-7.408 2.681-12.118 2.382-3.096-.198-3.699-.694-3.699-.694 2.941.483 7.902.57 11.923-.182 3.564-.666 3.893-1.506 3.893-1.506z" clip-rule="evenodd"></path>
  <path d="M10.688 7.857l-.186-.236.186.236zM13.266 1l.212-.213a.3.3 0 00-.502.287l.29-.074zm-3.48 12.808l-.245.174.245-.174zm.9 1.456l-.2.223a.3.3 0 00.474-.345l-.274.122zM7.608 9.262l-.25-.167.25.167zm2.501-2.372l.184.237-.184-.237zm1.423 9.285l-.19-.233a.3.3 0 00.327.5l-.137-.267zm.331-2.744l-.226.198.226-.197zm1.402-.96l.244-.174-.244.175zm-.175-.241l-.243.176.243-.176zm3.452-5.92l.15.26a.3.3 0 00-.222-.55l.072.29zM7.926 21.882l-.034.298.034-.298zm-.712-.773l.15.26a.3.3 0 00-.23-.549l.08.29zm6.129.546l.158-.255a.3.3 0 00-.214-.04l.056.295zm1.44.698l.118.276a.3.3 0 00-.01-.556l-.108.28zM7.18 19.263l-.03.298.03-.298zm-.591-1l.177.24a.3.3 0 00-.271-.526l.094.285zm7.582.667l.213-.211a.3.3 0 00-.27-.084l.057.295zm1.075.652l.084.288a.3.3 0 00.016-.571l-.1.283zm3.393 3.633l.122-.273a.3.3 0 00-.312.505l.19-.232zm-.815 1.075l.086.287-.086-.287zm-15.511.897l-.048.297.048-.297zm2.88-2.044l-.02.3a.3.3 0 00.192-.546l-.172.246zm-.902.101l.063.293-.063-.293zm-1.368 1.082l-.119.275.12-.275zm4.773-9.012l.069.292a.3.3 0 00-.049-.591l-.02.299zm-1.684 1.53l.04-.297-.04.297zm-2.433-.563l.13.27-.13-.27zm11.47.616l.077.29a.301.301 0 00.092-.042l-.168-.248zm1.196-.636l.118.276a.3.3 0 00-.17-.571l.052.295zm-3.943.516l.025.299-.025-.3zm3.923 3.275l-.137-.267a.3.3 0 00-.143.16l.28.107zm1.055-4.642l.061.294-.06-.294zm-1.15 4.769l-.208-.218-.005.005.212.213zm0 0l.208.215.003-.003-.212-.212zm-.003.001l-.209-.215a.3.3 0 00.285.506l-.076-.29zm1.011-4.941l-.099-.284.1.284zm-.419.321l-.252-.162a.3.3 0 00.364.44l-.112-.278zm-8.54 11.36l-.02.298.02-.299zm12.117-2.383l.3.023a.3.3 0 00-.579-.132l.28.11zM4.48 26.225l.049-.296a.3.3 0 00-.349.296h.3zm11.923-.182l-.055-.295.055.295zm-5.53-17.95c2.69-2.11 3.41-3.904 3.391-5.227-.01-.655-.2-1.17-.391-1.521a2.916 2.916 0 00-.353-.514 1.677 1.677 0 00-.036-.039L13.48.79h-.001V.787L13.265 1c-.211.213-.211.213-.212.212l.002.003.016.016c.014.017.037.042.064.078.055.07.131.178.208.32.154.286.311.706.32 1.246.015 1.067-.555 2.702-3.162 4.746l.37.473zm-.84 5.542c-.597-.844-1.13-1.613-1.165-2.467-.033-.82.397-1.812 2.006-3.075l-.37-.472c-1.677 1.316-2.28 2.473-2.235 3.571.043 1.064.703 1.982 1.273 2.79l.49-.347zm.928 1.507c-.233-.525-.59-1.028-.929-1.507l-.49.347c.347.49.666.944.871 1.404l.548-.244zM7.358 9.095c-.34.51-.475 1.04-.432 1.585.043.537.257 1.068.578 1.59.638 1.037 1.745 2.108 2.982 3.217l.4-.446c-1.242-1.114-2.285-2.133-2.871-3.086-.291-.473-.458-.912-.49-1.323-.033-.404.063-.801.332-1.203l-.499-.334zm2.567-2.442c-.948.738-1.938 1.505-2.567 2.442l.499.334c.564-.841 1.468-1.549 2.436-2.302l-.368-.474zm3.05-5.579c.343 1.342.056 2.352-.54 3.214-.609.882-1.54 1.61-2.51 2.365l.368.474c.953-.741 1.965-1.526 2.637-2.498.685-.993 1.016-2.18.627-3.703l-.582.148zm-1.443 15.1l.19.233.002-.002.006-.004a12.436 12.436 0 00.073-.066 2.969 2.969 0 00.639-.861c.137-.287.235-.64.201-1.03-.034-.395-.2-.806-.554-1.21l-.452.395c.279.318.386.612.408.866a1.39 1.39 0 01-.145.72 2.287 2.287 0 01-.556.726l-.002.002.19.232zm1.49-3.528c.32.45.375.854.3 1.211-.079.37-.303.722-.592 1.035a5.084 5.084 0 01-.888.745 5.698 5.698 0 01-.417.255l-.024.013-.005.002h-.001l.137.268.137.267.001-.001.003-.001a5.685 5.685 0 001.498-1.14c.328-.356.629-.802.738-1.319.111-.53.014-1.104-.4-1.684l-.488.35zm-.175-.24l.174.24.488-.349-.176-.243-.486.352zm3.545-6.355c-1.371.79-2.366 1.453-3.064 2.034-.696.577-1.12 1.093-1.318 1.595-.204.519-.15.99.036 1.439.179.43.488.854.801 1.287l.486-.352c-.325-.45-.587-.813-.733-1.166-.14-.335-.168-.642-.031-.99.143-.363.479-.8 1.142-1.352.66-.549 1.622-1.192 2.98-1.975l-.299-.52zm-4.303 7.183c-1.026-1.175-1.214-2.133-1.01-2.905.212-.794.86-1.479 1.69-2.047.823-.564 1.783-.985 2.544-1.266a15.575 15.575 0 011.296-.413h.004l.001-.001-.072-.291-.073-.291h-.002l-.005.002a3.097 3.097 0 00-.098.025 16.165 16.165 0 00-1.258.406c-.784.29-1.796.73-2.677 1.334-.875.6-1.664 1.388-1.93 2.388-.27 1.023.026 2.18 1.138 3.454l.452-.395zm-4.13 8.35c-.417-.048-.627-.116-.72-.168-.045-.024-.041-.034-.03-.015a.124.124 0 01.013.083c-.005.02-.003-.003.057-.054a.704.704 0 01.082-.06l.004-.002-.151-.26-.15-.26v.001h-.001l-.002.001-.004.003a1.94 1.94 0 00-.05.032c-.031.02-.073.05-.117.089-.074.063-.215.197-.255.385a.477.477 0 00.054.342.658.658 0 00.258.24c.2.11.507.189.945.238l.068-.596zm5.328-.225c-2.256.424-3.285.456-5.327.224l-.068.596c2.105.24 3.194.204 5.506-.23l-.11-.59zm1.604.713a9.737 9.737 0 01-1.367-.659c-.008-.005-.014-.009-.018-.01l-.004-.003-.001-.001-.158.255-.159.255h.001l.002.001.006.004.023.014.084.05a10.362 10.362 0 001.375.654l.216-.56zm-7.757-1.253c-.517.144-.905.316-1.152.523a.919.919 0 00-.284.379.665.665 0 00-.001.46c.098.276.358.488.648.649.302.168.696.313 1.15.428 1.81.457 4.777.49 7.406-.63l-.235-.552c-2.494 1.061-5.324 1.03-7.023.6a4.304 4.304 0 01-1.007-.37c-.256-.143-.352-.263-.374-.326a.066.066 0 01-.001-.051.335.335 0 01.106-.127c.149-.125.438-.269.927-.404l-.16-.579zm.076-1.854c-.415-.043-.597-.121-.665-.172-.028-.021-.024-.027-.02-.014.004.012 0 .015.004.001a.509.509 0 01.125-.176 1.176 1.176 0 01.106-.096l.005-.004h.001l-.178-.242-.178-.241h-.001l-.002.001-.004.003-.012.01a1.51 1.51 0 00-.166.15c-.088.088-.218.24-.272.428-.029.1-.04.22 0 .346a.63.63 0 00.231.313c.203.153.523.244.965.29l.061-.597zm6.904-.33c-2.996.573-4.715.554-6.904.33l-.061.596c2.24.23 4.018.248 7.077-.337l-.113-.589zm1.23.664a2.835 2.835 0 01-.96-.579l-.002-.002h.001l-.213.212a46.433 46.433 0 00-.213.211v.001l.003.002.005.005.018.018.065.058a3.438 3.438 0 001.098.64l.199-.566zm-8.85-1.322c-.566.187-.984.386-1.25.603-.265.216-.45.517-.325.86.104.287.394.487.703.629.327.15.756.275 1.255.37 1.993.382 5.313.343 8.452-.569l-.167-.576c-3.052.887-6.276.92-8.172.556-.473-.09-.85-.203-1.117-.326-.284-.131-.374-.243-.39-.288-.003-.009-.005-.016.003-.036a.457.457 0 01.137-.155c.18-.147.516-.319 1.059-.498l-.188-.57zm12.144 5.238l-.19.232h-.001l-.002-.001v-.001c-.001 0-.001 0 0 0l.008.008c.008.008.02.021.03.037.025.035.031.06.03.074 0 .001.002.047-.098.129-.106.087-.309.198-.679.31l.173.574c.408-.123.695-.263.888-.42.198-.164.307-.358.316-.567a.722.722 0 00-.139-.445.907.907 0 00-.127-.145l-.012-.01-.004-.004-.002-.002-.191.231zM2.264 25.484c5.253.846 10.045.657 13.194.1 1.564-.278 2.76-.652 3.4-1.058.163-.104.305-.218.407-.345a.724.724 0 00.177-.47c-.008-.372-.334-.613-.681-.77l-.246.548c.15.068.24.13.287.178.023.023.033.04.037.048l.003.008v.005a.26.26 0 01-.044.076c-.047.059-.13.132-.261.215-.535.34-1.632.699-3.183.973-3.081.546-7.806.735-12.995-.1l-.095.592zm3.1-2.587c-.202-.14-.475-.19-.74-.2a4.4 4.4 0 00-.91.077 7.598 7.598 0 00-1.92.618c-.28.137-.534.293-.725.46-.18.158-.36.376-.369.643-.01.302.193.518.447.66.255.141.626.25 1.117.329l.095-.593c-.466-.075-.756-.17-.92-.26a.411.411 0 01-.13-.102l-.009-.013c0-.01.017-.083.164-.213.136-.12.34-.247.595-.372a7.003 7.003 0 011.759-.566c.295-.053.565-.076.784-.068.229.009.36.051.418.092l.344-.492zm-1.01.64c.271-.058.482-.081.621-.09a2.307 2.307 0 01.197-.005l.02-.299.02-.3h-.024a2.871 2.871 0 00-.25.005 4.88 4.88 0 00-.711.103l.126.586zm-1.313.513c-.097-.042-.115-.069-.11-.061.02.027.03.078.015.119-.006.017-.006.002.044-.039.045-.037.112-.08.2-.126.356-.188.903-.35 1.163-.406l-.126-.586c-.29.062-.894.239-1.317.461-.107.057-.212.121-.3.193a.715.715 0 00-.226.293.464.464 0 00.066.45.85.85 0 00.353.253l.238-.55zm14.695-.047c-1.434.431-4.473.721-7.502.76-1.508.018-3.002-.026-4.276-.143-1.285-.119-2.315-.31-2.917-.57l-.238.55c.696.302 1.809.498 3.1.617 1.3.12 2.816.164 4.339.145 3.033-.038 6.146-.327 7.667-.785l-.173-.574zM7.695 15.314l-.07-.292h-.003c-.002.002-.006.002-.01.003l-.041.01a16.032 16.032 0 00-.652.172c-.401.112-.913.27-1.332.442-.208.086-.406.18-.559.282-.076.051-.152.11-.213.18a.521.521 0 00-.135.297.45.45 0 00.128.35c.076.08.176.137.276.18.202.086.497.152.888.204l.079-.595c-.377-.05-.606-.108-.732-.162-.063-.027-.079-.043-.075-.04.01.012.039.053.034.114-.004.047-.026.064-.011.047a.495.495 0 01.094-.075c.104-.07.26-.147.455-.227.386-.16.87-.309 1.265-.42a20.51 20.51 0 01.632-.166l.038-.01.01-.001h.002v-.001l-.068-.292zm-3.987 1.237a9.68 9.68 0 012.822-.866c.36-.05.65-.068.849-.074a4.554 4.554 0 01.28.002h.016l.02-.299.02-.3h-.001-.027a3.501 3.501 0 00-.324-.002 8.124 8.124 0 00-.917.08c-.77.108-1.83.357-2.998.919l.26.54zm11.265.056c-2.373.62-5.878.79-8.46.64-1.3-.075-2.323-.23-2.849-.428a.984.984 0 01-.252-.128c-.045-.036-.014-.03-.011.023.003.054-.029.062.018.017.045-.044.134-.105.289-.18l-.26-.54c-.181.087-.334.18-.445.287a.581.581 0 00-.201.448c.01.19.126.327.236.414.112.09.257.16.414.22.619.235 1.725.39 3.026.466 2.617.151 6.19-.017 8.647-.659l-.152-.58zm1.271-.346l-.117-.276h-.001l-.002.001a7.207 7.207 0 00-1.243.662l.336.497c.234-.158.52-.31.75-.424a9.775 9.775 0 01.367-.172l.021-.009.006-.002-.117-.277zm-3.918.815a45.615 45.615 0 002.728-.322 52.192 52.192 0 001.152-.182l.067-.011.018-.003.004-.001h.001l-.052-.296-.052-.295h-.002-.004c-.003.002-.009.002-.016.004a13.238 13.238 0 01-.314.053c-.214.035-.52.084-.889.137a45.05 45.05 0 01-2.69.318l.05.598zm-6.354.066c1.33.177 3.941.135 6.354-.066l-.05-.598c-2.404.2-4.962.237-6.225.07l-.08.594zm10.39 3.177c2.47-1.276 3.309-2.614 3.12-3.712-.184-1.077-1.331-1.684-2.264-1.49l.122.587c.652-.135 1.432.312 1.551 1.005.115.671-.366 1.817-2.804 3.076l.275.534zm-.027.077a.91.91 0 00.066-.07.584.584 0 00.104-.168l-.561-.212a.147.147 0 01.007-.016l.002-.003-.008.01a.326.326 0 01-.024.024l.414.435zm.005-.005l-.424-.425.424.425zm-.004.004l.002-.001-.419-.43-.002.001.419.43zm.9-4.873c1.441-.503 2.593.258 2.732 1.18.07.463-.093 1.038-.687 1.615-.597.58-1.622 1.153-3.23 1.573l.151.58c1.669-.435 2.8-1.046 3.497-1.723.701-.681.968-1.44.863-2.135-.21-1.394-1.83-2.248-3.524-1.656l.198.566zm-.518.038l.253.162-.001.001v.001l-.001.001v-.002l.011-.014a.594.594 0 01.257-.187l-.2-.566a1.169 1.169 0 00-.566.434l-.003.005-.001.002h-.001v.001l.252.162zm.5-.444a5.432 5.432 0 00-.566.149 1.725 1.725 0 00-.04.015h-.003l-.002.001.111.28.112.278h-.001l.003-.001.018-.007a4.842 4.842 0 01.49-.127l-.122-.588zm-9.06 12.102c2.37.151 5.38.11 7.825-.25 1.22-.18 2.32-.441 3.133-.809.793-.358 1.422-.868 1.479-1.599l-.599-.046c-.029.377-.368.756-1.127 1.099-.739.333-1.775.585-2.974.761-2.393.353-5.358.395-7.698.246l-.038.598zm-3.979-.993a.622.622 0 00.105.228l.004.003a.41.41 0 00.004.004l.006.005a.385.385 0 00.055.037c.033.02.079.046.14.075.123.058.312.132.594.21.564.156 1.51.332 3.071.431l.039-.598c-1.535-.098-2.438-.27-2.95-.411a3.156 3.156 0 01-.497-.174.819.819 0 01-.081-.043l-.008-.005.003.002.003.003.004.002.003.004a.622.622 0 01.105.228h-.6zm12.168-.477c-3.985.746-8.91.659-11.82.181l-.097.592c2.974.488 7.97.576 12.027-.183l-.11-.59zm3.948-1.21l-.279-.111v-.001l.002-.002v-.003l.003-.006a.173.173 0 01.004-.007l-.001.002a.426.426 0 01-.05.06c-.063.064-.19.173-.434.308-.49.272-1.428.64-3.193.97l.11.59c1.8-.336 2.808-.72 3.374-1.035.284-.158.462-.301.573-.415a1.027 1.027 0 00.153-.203.499.499 0 00.015-.03l.001-.005.001-.001v-.001l-.279-.11z"></path>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Online Java Compiler
            </span>
          </a>
                    <a target="_blank" href="https://www.programiz.com/c-programming/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border c " title="Online C Compiler">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" fill="none" viewBox="0 0 24 28" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
  <path fill-opacity=".4" d="M23.903 6.916l.067-.044c-.134-.243-.334-.464-.534-.574L12.696.155C12.518.045 12.274 0 12.007 0c-.267 0-.511.066-.69.155L.646 6.32C.267 6.54 0 7.093 0 7.513v12.308c0 .243.044.508.2.752l-.044.022c.11.176.266.331.422.42l10.718 6.165c.178.11.422.154.689.154.267 0 .511-.066.69-.154l10.672-6.165c.378-.221.645-.774.645-1.194V7.491c.022-.177 0-.376-.089-.575zM12.007 19.07a5.455 5.455 0 004.736-2.74l2.869 1.68a8.794 8.794 0 01-7.605 4.374c-4.847 0-8.783-3.91-8.783-8.728 0-4.817 3.936-8.728 8.783-8.728a8.796 8.796 0 017.627 4.42l-2.89 1.656a5.43 5.43 0 00-4.737-2.762c-3.002 0-5.448 2.431-5.448 5.414 0 2.983 2.446 5.414 5.448 5.414z"></path>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Online C Compiler
            </span>
          </a>
          <a target="_blank" href="https://www.programiz.com/cpp-programming/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border cpp active" title="Online C++ Compiler">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" fill="none" viewBox="0 0 24 27" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
  <path fill="#25265E" fill-opacity=".4" d="M23.903 6.639l.067-.043c-.134-.233-.334-.445-.534-.551L12.696.148C12.518.042 12.274 0 12.007 0a1.64 1.64 0 00-.69.148L.646 6.066C.267 6.278 0 6.808 0 7.21v11.814c0 .233.044.488.2.72l-.044.022c.11.17.266.318.422.403l10.718 5.918c.178.106.422.148.689.148.267 0 .511-.064.69-.148l10.672-5.918c.378-.212.645-.742.645-1.145V7.19c.022-.17 0-.36-.089-.551zm-7.893 6.893v-.849h1.111v-1.06h1.112v1.06h1.112v.849h-1.112v1.06h-1.112v-1.06H16.01zm.733-2.97c-.934-1.59-2.712-2.65-4.736-2.65-3.002 0-5.448 2.332-5.448 5.195 0 2.864 2.446 5.197 5.448 5.197 2.024 0 3.802-1.06 4.736-2.63l2.869 1.612c-1.512 2.502-4.358 4.2-7.605 4.2-4.847 0-8.783-3.755-8.783-8.379 0-4.623 3.936-8.377 8.783-8.377 3.269 0 6.115 1.718 7.627 4.242l-2.89 1.59zm6.604 2.97h-1.112v1.06h-.889v-1.06h-1.334v-.849h1.334v-1.06h.89v1.06h1.111v.849z"></path>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Online C++ Compiler
            </span>
          </a>
          <a target="_blank" href="https://www.programiz.com/csharp-programming/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border csharp " title="Online C# Compiler">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" fill="none" viewBox="0 0 24 28" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
  <path fill-opacity=".4" d="M23.903 6.916l.067-.044c-.134-.243-.334-.464-.534-.574L12.696.155C12.518.045 12.274 0 12.007 0c-.267 0-.511.066-.69.155L.646 6.32C.267 6.54 0 7.093 0 7.513v12.308c0 .243.044.508.2.752l-.044.022c.11.176.266.331.422.42l10.718 6.165c.178.11.422.154.689.154.267 0 .511-.066.69-.154l10.672-6.165c.378-.221.645-.774.645-1.194V7.491c.022-.177 0-.376-.089-.575zM12.007 22.384c-4.847 0-8.783-3.91-8.783-8.728 0-4.817 3.936-8.728 8.783-8.728a8.796 8.796 0 017.627 4.42l-2.89 1.656a5.43 5.43 0 00-4.737-2.762c-3.002 0-5.448 2.431-5.448 5.414 0 2.983 2.446 5.414 5.448 5.414a5.455 5.455 0 004.736-2.74l2.869 1.68a8.794 8.794 0 01-7.605 4.374zm11.34-9.17h-.711l-.2.884h.911v1.105h-1.112l-.266 1.326h-1.09l.267-1.326H20.3l-.267 1.326h-1.067l.267-1.326h-.556v-1.105h.778l.2-.884h-.978V12.11h1.178l.267-1.325h1.09l-.267 1.325h.845l.267-1.325h1.067l-.267 1.325h.49v1.105zm-2.824.884h.845l.2-.884h-.845l-.2.884z"></path>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Online C# Compiler
            </span>
          </a>
          <a target="_blank" href="https://www.programiz.com/javascript/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border javascript " title="Online JavaScript Compiler (Editor)">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 630 630" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<rect width="630" height="630" fill="#25265E" fill-opacity="0.0"></rect>
<path d="m423.2 492.19c12.69 20.72 29.2 35.95 58.4 35.95 24.53 0 40.2-12.26 40.2-29.2 0-20.3-16.1-27.49-43.1-39.3l-14.8-6.35c-42.72-18.2-71.1-41-71.1-89.2 0-44.4 33.83-78.2 86.7-78.2 37.64 0 64.7 13.1 84.2 47.4l-46.1 29.6c-10.15-18.2-21.1-25.37-38.1-25.37-17.34 0-28.33 11-28.33 25.37 0 17.76 11 24.95 36.4 35.95l14.8 6.34c50.3 21.57 78.7 43.56 78.7 93 0 53.3-41.87 82.5-98.1 82.5-54.98 0-90.5-26.2-107.88-60.54zm-209.13 5.13c9.3 16.5 17.76 30.45 38.1 30.45 19.45 0 31.72-7.61 31.72-37.2v-201.3h59.2v202.1c0 61.3-35.94 89.2-88.4 89.2-47.4 0-74.85-24.53-88.81-54.075z"></path>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Online JavaScript Compiler
            </span>
          </a>
          <a target="_blank" href="https://www.programiz.com/typescript/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border typescript " title="Online Typescript Compiler (Editor)">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<path d="M19.0562 11.0988C19.6709 11.2305 20.2295 11.5292 20.6606 11.9566C20.8976 12.1882 21.104 12.4451 21.2755 12.722C21.2834 12.7522 20.1683 13.4472 19.4921 13.835C19.4676 13.8504 19.3701 13.7519 19.2597 13.6006C19.1364 13.4034 18.9611 13.2385 18.7503 13.1214C18.5394 13.0042 18.3 12.9387 18.0544 12.9309C17.2771 12.8814 16.7762 13.2591 16.7799 13.8905C16.7731 14.0457 16.8113 14.1997 16.8903 14.3365C17.0613 14.6646 17.3789 14.8615 18.3763 15.2626C20.2124 15.9959 21.0005 16.4794 21.4869 17.1664C21.7618 17.6005 21.9311 18.0852 21.983 18.5864C22.0348 19.0876 21.968 19.5932 21.7872 20.0679C21.5388 20.5887 21.1445 21.0382 20.6455 21.3697C20.1464 21.7012 19.5607 21.9026 18.9494 21.953C18.2995 22.0214 17.6431 22.0151 16.9949 21.9342C16.0022 21.7829 15.0877 21.3408 14.3852 20.6726C14.1199 20.3952 13.8952 20.0865 13.7169 19.7545C13.7922 19.7034 13.871 19.6569 13.9529 19.6153C14.0669 19.555 14.4985 19.3246 14.9055 19.1057L15.6446 18.7039L15.799 18.9128C16.0596 19.2576 16.3906 19.5516 16.7734 19.778C17.1602 19.9749 17.5984 20.0682 18.0391 20.0475C18.4798 20.0268 18.9056 19.8929 19.2691 19.6608C19.4566 19.4912 19.5738 19.2659 19.6002 19.0242C19.6266 18.7825 19.5604 18.5399 19.4134 18.3389C19.2142 18.0744 18.8072 17.8521 17.6503 17.3867C16.7431 17.1029 15.9168 16.6325 15.2332 16.0106C14.9079 15.6662 14.6675 15.2601 14.5288 14.8207C14.4262 14.3199 14.4111 13.8071 14.4841 13.3019C14.6197 12.7205 14.9448 12.1918 15.4152 11.7877C15.8857 11.3835 16.4788 11.1234 17.114 11.0426C17.7608 10.9709 18.4155 10.9898 19.0562 11.0988ZM13.0348 12.0919L13.0428 13.0655H9.70119V21.8699H7.34477V13.0676H4.00319V12.1113C3.99432 11.7838 4.00396 11.4562 4.03206 11.1296C4.04433 11.1142 6.07598 11.1069 8.53922 11.1109L13.0218 11.1223L13.0348 12.0919Z" fill="black"></path>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Online Typescript Compiler
            </span>
          </a>
          <a target="_blank" href="https://www.programiz.com/golang/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border golang " title="Online GoLang Compiler">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" width="40" height="40" viewBox="0 0 40 40" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<g clip-path="url(#clip0_2886_601)">
<path d="M3.00684 16.739C2.9516 16.739 2.89634 16.6837 2.9516 16.6285L3.33841 16.0759C3.39365 16.0206 3.44891 15.9654 3.55944 15.9654H10.522C10.5772 15.9654 10.6325 16.0206 10.5772 16.0759L10.2457 16.5731C10.1905 16.6285 10.1352 16.6837 10.0247 16.6837L3.00684 16.739ZM0.0781503 18.5072C0.0228897 18.5072 -0.0323709 18.4519 0.0228897 18.3967L0.409701 17.8441C0.464961 17.7888 0.520209 17.7336 0.63073 17.7336H9.52736C9.58262 17.7336 9.63788 17.7888 9.63788 17.8441L9.47211 18.3967C9.47211 18.4519 9.36159 18.5072 9.30633 18.5072H0.0781503ZM4.77513 20.3307C4.71987 20.3307 4.66461 20.2755 4.71987 20.2202L4.99616 19.7229C5.05142 19.6676 5.10668 19.6124 5.21719 19.6124H9.0853C9.14055 19.6124 9.19581 19.6676 9.19581 19.7229L9.14055 20.165C9.14055 20.2202 9.0853 20.2755 9.03004 20.2755L4.77513 20.3307ZM24.9997 16.3521L21.7394 17.181C21.4632 17.2362 21.408 17.2916 21.187 16.96C20.9106 16.6285 20.6896 16.4074 20.2475 16.2416C19.0318 15.6338 17.8161 15.7995 16.711 16.5179C15.3848 17.3468 14.7217 18.6178 14.7217 20.2202C14.7217 21.7674 15.8268 23.0384 17.3741 23.2595C18.7003 23.4252 19.8054 22.9831 20.6896 21.9886C20.8554 21.7674 21.0211 21.5464 21.2422 21.2702H17.4846C17.0977 21.2702 16.9872 20.9938 17.0977 20.6624C17.3741 20.0545 17.8161 19.0598 18.0925 18.5624C18.1477 18.4519 18.3134 18.2309 18.5898 18.2309H25.6628C25.6076 18.7835 25.6076 19.2809 25.5523 19.8334C25.3313 21.215 24.834 22.5412 23.9499 23.6462C22.5684 25.4698 20.7449 26.6303 18.4239 26.9617C16.4899 27.2381 14.7217 26.8512 13.1744 25.6908C11.7377 24.5857 10.9088 23.149 10.6879 21.3807C10.4115 19.2809 11.0746 17.3468 12.3455 15.689C13.727 13.8655 15.5505 12.7051 17.8161 12.3183C19.6396 11.9867 21.408 12.2078 22.9552 13.2576C24.0051 13.9207 24.7235 14.8602 25.2208 16.0206C25.2761 16.2416 25.2208 16.2969 24.9997 16.3521Z" fill="#6D6D93"></path>
<path d="M31.4177 27.1297C29.6494 27.0745 28.0469 26.5771 26.6653 25.4168C25.505 24.4221 24.7867 23.1511 24.5655 21.6592C24.2341 19.4489 24.8419 17.5148 26.1681 15.8018C27.6048 13.9229 29.3179 12.9836 31.6387 12.5415C33.628 12.2099 35.5068 12.3758 37.1646 13.5361C38.7118 14.586 39.6511 16.0227 39.9275 17.9015C40.259 20.554 39.4854 22.6537 37.7171 24.4773C36.4461 25.8035 34.8437 26.5771 33.0754 26.964C32.4675 27.0745 31.9149 27.0745 31.4177 27.1297ZM36.0594 19.283C36.0594 19.0068 36.0594 18.841 36.0041 18.6199C35.6725 16.6858 33.9043 15.5808 32.0255 16.0227C30.202 16.4096 29.0415 17.5701 28.5994 19.3935C28.2679 20.8856 28.9863 22.4328 30.3677 23.0959C31.4177 23.538 32.5228 23.4827 33.5175 22.9854C35.1199 22.2118 35.9489 20.9408 36.0594 19.283Z" fill="#6D6D93"></path>
</g>
<defs>
<clippath id="clip0_2886_601">
<rect width="40" height="40" fill="white"></rect>
</clippath>
</defs>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Online GoLang Compiler
            </span>
          </a>
          <a target="_blank" href="https://www.programiz.com/rust/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border rust " title="Online Rust Compiler">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" width="40" height="40" viewBox="0 0 40 40" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<g clip-path="url(#clip0_2886_605)">
<path fill-rule="evenodd" clip-rule="evenodd" d="M13.8839 2.84442L14.4084 2.68631L15.1505 0.663847C15.2559 0.46731 15.603 0.273265 15.9643 0.487312C16.1369 0.589616 16.7641 1.30652 17.1641 1.76388C17.2685 1.88336 17.3577 1.98513 17.419 2.05361H18.0516L19.129 0.167618C19.2712 -0.0427356 19.6845 -0.0686346 19.924 0.167618C20.0716 0.313238 20.3929 0.883897 20.6664 1.36934C20.8365 1.6714 20.9878 1.94045 21.0674 2.05361H21.7002L23.0602 0.523151C23.2474 0.335748 23.7311 0.346159 23.9339 0.741787C24.0241 0.917836 24.1409 1.26358 24.261 1.61915C24.4107 2.06265 24.5658 2.52141 24.6807 2.68514C24.8677 2.79683 25.0045 2.83134 25.2354 2.82004L26.8525 1.60471C27.0398 1.4173 27.596 1.5539 27.7135 1.90697C27.7613 2.05037 27.7923 2.37341 27.826 2.72628C27.8754 3.24222 27.931 3.82191 28.0541 3.99709C28.1741 4.11715 28.4858 4.32123 28.7737 4.17717C29.0617 4.03311 29.9347 3.61122 30.3351 3.41829C30.5515 3.36255 30.9609 3.33726 31.0997 3.70769V6.0165L31.4596 6.33811L33.3422 5.88792C33.4493 5.86421 33.6878 5.83122 33.7855 5.88792C33.8831 5.94446 34.079 6.15146 34.1646 6.24798C34.1882 6.28658 34.2134 6.46532 34.1261 6.87189C34.0386 7.27831 33.7984 8.13447 33.6892 8.51171L34.0233 8.9619L36.2913 8.88484C36.452 8.95764 36.6884 9.30023 36.6319 9.54721C36.5883 9.7375 36.2534 10.4298 35.9726 11.0103C35.8889 11.1831 35.8101 11.3462 35.7453 11.4829L35.9958 12.036L38.0905 12.3383C38.249 12.4048 38.5492 12.6355 38.4824 13.0264L37.2295 14.7949C37.2038 14.9386 37.1935 15.2555 37.3579 15.3739C37.5225 15.4921 38.7073 15.899 39.2792 16.0876C39.4055 16.1627 39.6506 16.3732 39.6198 16.615C39.5888 16.8568 39.5469 16.9473 39.5297 16.9623L37.9813 18.3772V18.9046C38.6516 19.3032 39.9924 20.1328 39.9924 20.2615C39.9924 20.291 39.9939 20.3274 39.9956 20.3675C40.003 20.5459 40.0137 20.8013 39.9089 20.8853C39.8061 20.9677 38.581 21.687 37.9813 22.0365V22.6282C38.5252 23.1083 39.612 24.0892 39.6069 24.1716C39.6053 24.1959 39.606 24.2307 39.6067 24.2719C39.6091 24.4049 39.6128 24.6049 39.549 24.7376C39.4822 24.8765 38.0561 25.3871 37.3516 25.6251L37.2231 26.1975C37.6301 26.7419 38.4478 27.8425 38.4631 27.8888C38.4824 27.9467 38.5081 28.4548 38.174 28.6863L36.0537 28.9821L35.7838 29.4645L36.6641 31.4324C36.6983 31.5782 36.6757 31.9211 36.3106 32.1269L34.0167 32.0755L33.7149 32.4356L34.2032 34.6545C34.2009 34.7894 34.0656 35.0828 33.5413 35.1753L31.5174 34.6995L31.1126 34.9952L31.1768 37.2655C31.1211 37.424 30.8915 37.7195 30.4186 37.6321L28.5232 36.7381L28.0348 36.9954L27.6749 39.2076C27.5893 39.3319 27.3178 39.5497 26.9167 39.4263L25.1756 38.1786C25.0406 38.1916 24.7567 38.2327 24.7 38.2945C24.6435 38.3562 24.094 39.7864 23.8263 40.4939C23.6999 40.5817 23.3816 40.7138 23.1194 40.5389L21.6223 38.9568H21.1148L19.8619 40.9119C19.7612 40.9784 19.4982 41.0715 19.2514 40.9119L17.9663 38.9568H17.433L15.8587 40.6032C15.7367 40.646 15.4475 40.6856 15.2677 40.5003L14.3938 38.3651C14.3402 38.2966 14.1626 38.1659 13.8798 38.1916L12.0614 39.4906C11.8793 39.4991 11.4909 39.4468 11.3932 39.169C11.2956 38.8912 11.1427 37.6385 11.0784 37.0468L10.5515 36.7317L8.66886 37.6192C8.50183 37.6813 8.12144 37.7028 7.93648 37.2912V34.9888C7.92145 34.9373 7.82077 34.8075 7.53802 34.6995L5.48195 35.1817C5.30641 35.1883 4.94094 35.1007 4.8844 34.6995C4.82785 34.2981 5.17779 33.1217 5.35986 32.5836L5.07076 32.0948L2.7769 32.1527C2.62698 32.0605 2.33741 31.8041 2.37854 31.516C2.41966 31.2279 3.02536 30.0755 3.32307 29.5352L3.02108 29.0079L0.842888 28.6992C0.716532 28.6456 0.481784 28.4278 0.553747 27.9853L1.84522 26.1975C1.83237 26.0431 1.77584 25.7087 1.65246 25.6058L-0.300845 24.9434C-0.412213 24.8533 -0.623394 24.5948 -0.577139 24.2809C-0.53087 23.967 0.547293 23.0612 1.08058 22.6475V22.0365C0.476606 21.7278 -0.768624 21.0409 -0.917697 20.7631C-1.06676 20.4853 -0.979805 20.2743 -0.917697 20.2036L1.11917 18.943V18.3965C0.652268 18.0127 -0.335528 17.1526 -0.551416 16.7822V16.3513C-0.544992 16.3021 -0.460183 16.1712 -0.172317 16.0426C0.115533 15.914 1.23269 15.5517 1.75527 15.3866L1.87094 14.8272L0.579441 13.0457V12.602C0.624419 12.4969 0.818471 12.2816 1.23483 12.2611C1.6512 12.2406 2.62056 12.1067 3.0532 12.0424L3.31021 11.5086L2.38496 9.57289C2.34212 9.36072 2.36183 8.92466 2.78333 8.8783C3.20484 8.8321 4.44964 8.859 5.01935 8.8783L5.38552 8.53754L4.85229 6.36379C4.84801 6.1773 4.97437 5.80812 5.51414 5.82347L7.57021 6.31881L7.97505 5.9972L7.87863 3.72056C7.92357 3.56192 8.12918 3.25751 8.59187 3.30896L10.5002 4.24791L11.0721 3.96495L11.374 1.89411C11.4553 1.70332 11.7184 1.36547 12.1194 1.5404C12.5203 1.71532 13.4628 2.48263 13.8839 2.84442ZM20.7002 4.89056C20.7002 5.53728 20.1767 6.06134 19.5305 6.06134C18.8845 6.06134 18.3608 5.53728 18.3608 4.89056C18.3608 4.244 18.8845 3.71982 19.5305 3.71982C20.1767 3.71982 20.7002 4.244 20.7002 4.89056ZM24.5236 10.4094H8.48148C11.3531 7.29655 13.1362 6.23065 16.6696 5.7262C16.6696 5.7262 18.6748 7.73337 19.0091 7.90056C19.3433 8.0679 19.7703 8.10498 20.1788 7.90056C20.513 7.73337 22.3512 5.7262 22.3512 5.7262C27.0871 6.75866 29.3134 8.52402 32.7117 13.2527C32.3775 13.7546 31.6422 14.9588 31.3748 15.7616C31.1076 16.5644 31.4863 17.0997 31.709 17.2669L34.3827 18.605L34.5499 21.6156H32.5447C33.3802 25.2953 29.7038 25.4625 29.2026 22.9536C28.8835 21.3574 28.0884 20.5562 27.1972 19.7758C31.8762 17.2669 30.3723 11.2457 24.5236 10.4094ZM7.14457 17.2669C7.81303 16.8655 7.7573 16.3191 7.64599 16.0961L7.27076 15.1849C7.25269 15.1409 7.28504 15.0925 7.33257 15.0925H9.81838V24.7934H5.12585C4.3237 22.6525 4.45268 19.7955 4.61979 18.6246C5.17688 18.3459 6.47627 17.6683 7.14457 17.2669ZM16.3354 15.0925V17.7686H21.6827C23.6881 17.7686 24.0223 15.2599 21.6827 15.0925H16.3354ZM16.3354 24.7934V22.1173H20.513C21.5157 22.1173 22.6854 23.2881 23.0196 26.2987C23.287 28.7073 24.5793 29.4209 25.192 29.4766H31.709L30.3723 30.8146C30.0938 30.7588 29.236 30.614 28.0327 30.4801C26.8296 30.3463 26.4175 30.982 26.3617 31.3165L26.0275 34.1597C20.6881 35.8537 17.848 35.8704 12.9933 33.9926C12.9376 33.4351 12.7929 32.1193 12.6591 31.3165C12.5254 30.5135 11.935 30.3129 11.6565 30.3129L8.64867 30.8146L7.57583 29.5876C7.53802 29.5443 7.5687 29.4766 7.62625 29.4766H19.6775C19.7698 29.4766 19.8447 29.4017 19.8447 29.3093V24.9607C19.8447 24.8683 19.7698 24.7934 19.6775 24.7934H16.3354ZM34.3827 16.9324C35.0288 16.9324 35.5524 16.4082 35.5524 15.7616C35.5524 15.115 35.0288 14.5908 34.3827 14.5908C33.7367 14.5908 33.213 15.115 33.213 15.7616C33.213 16.4082 33.7367 16.9324 34.3827 16.9324ZM4.68672 16.8641C5.33268 16.8641 5.85641 16.3399 5.85641 15.6934C5.85641 15.0468 5.33268 14.5226 4.68672 14.5226C4.04068 14.5226 3.51697 15.0468 3.51697 15.6934C3.51697 16.3399 4.04068 16.8641 4.68672 16.8641ZM11.5203 33.1356C11.5203 33.7822 10.9966 34.3064 10.3506 34.3064C9.70449 34.3064 9.18091 33.7822 9.18091 33.1356C9.18091 32.4891 9.70449 31.9649 10.3506 31.9649C10.9966 31.9649 11.5203 32.4891 11.5203 33.1356ZM28.7012 34.3271C29.3471 34.3271 29.8709 33.8029 29.8709 33.1563C29.8709 32.5096 29.3471 31.9854 28.7012 31.9854C28.0552 31.9854 27.5314 32.5096 27.5314 33.1563C27.5314 33.8029 28.0552 34.3271 28.7012 34.3271Z" fill="#25265E" fill-opacity="0.67"></path>
</g>
<defs>
<clippath id="clip0_2886_605">
<rect width="40" height="40" fill="white"></rect>
</clippath>
</defs>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Online Rust Compiler
            </span>
          </a>
          <a target="_blank" href="https://www.programiz.com/scala/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border scala " title="Scala Online Compiler (Editor)">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
    <path d="M5 20.2615V17.511L7.09413 17.4269C9.2719 17.3429 10.8873 17.1628 13.2564 16.7543C15.9488 16.2859 18.6051 15.4452 18.8805 14.9647C18.9523 14.8446 19 15.7695 19 17.5591V20.3456L18.6888 20.5858C18.3538 20.8501 17.0615 21.2945 15.5898 21.6668C13.2923 22.2433 7.68035 23 5.76589 23H5.00018L5 20.2615ZM5 13.2953V10.5445L7.09413 10.4724C9.4155 10.3764 11.2223 10.1723 13.6154 9.72781C16.2958 9.22334 18.7367 8.40665 18.9164 7.96218C18.9523 7.87822 18.9882 9.04318 18.9882 10.5566C19 12.9587 18.9761 13.343 18.7966 13.5351C18.3779 14.0037 15.147 14.8444 11.8205 15.3609C9.79835 15.6733 6.44796 16.0337 5.51443 16.0337H5V13.2953ZM5 6.37706V3.68663L5.37101 3.61456C5.57437 3.57852 6.07695 3.54249 6.48386 3.54249C8.49399 3.54249 13.2685 2.88182 15.6137 2.28132C17.253 1.84892 18.3897 1.41652 18.7846 1.05619C18.988 0.876019 19 0.98412 19 3.62645C19 6.20879 18.9882 6.40085 18.7728 6.59326C18.4497 6.89342 16.236 7.57806 14.5127 7.92632C11.7248 8.47889 7.09413 9.0675 5.5146 9.0675H5V6.37706Z" fill="black"></path>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Scala Online Compiler
            </span>
          </a>
          <a target="_blank" href="https://www.programiz.com/dart/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border dart " title="Dart Online Compiler (Editor)">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
    <path d="M16.5285 5.23613C16.4137 5.23203 16.2988 5.22793 16.1799 5.22793H5.34766L11.2211 2.2748C11.5246 2.09434 11.9922 2 12.468 2C13.0217 2 13.6738 2.37734 13.9855 2.68906L16.5285 5.23203V5.23613ZM5.40098 5.95801H16.1799C16.8361 5.95801 17.2217 6.01543 17.6318 6.33945L22 10.7035V19.2676L18.7475 19.2963L5.40098 5.95801ZM4.95801 17.2988V6.54453L18.2389 19.8254L18.2676 23H9.56406L5.54043 18.9723C5.07695 18.5088 4.95801 18.3447 4.95801 17.2988ZM4.22793 6.31895V17.2988C4.22793 17.4342 4.23203 17.5572 4.23613 17.6721L1.69316 15.1291C1.2666 14.6861 1 14.0709 1 13.468C1 13.1891 1.15996 12.7502 1.2748 12.5L4.22793 6.31895Z" fill="black"></path>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Dart Online Compiler
            </span>
          </a>
          <a target="_blank" href="https://www.programiz.com/ruby/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border ruby " title="Ruby Online Compiler (Editor)">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
    <path d="M19.4333 19.4667V20H20V19.4667H19.4333ZM19.4333 4.53333H20V4H19.4333V4.53333ZM12.6333 4.53333V4H12.3987L12.2321 4.15573L12.6333 4.53333ZM3.56667 13.0667L3.16547 12.6891L3 12.8459V13.0667H3.56667ZM3.56667 19.4667H3V20H3.56667V19.4667ZM8.1 15.2L7.84613 15.6768L7.86767 15.6875L7.89033 15.6949L8.1 15.2ZM8.1 8.8V8.26667C7.94971 8.26667 7.80558 8.32286 7.69931 8.42288C7.59304 8.5229 7.53333 8.65855 7.53333 8.8H8.1ZM14.9 8.8L15.4259 8.6016L15.4168 8.58133L15.4066 8.56107L14.9 8.8ZM20 19.4667V4.53333H18.8667V19.4667H20ZM19.4333 4H12.6333V5.06667H19.4333V4ZM12.2321 4.15573L3.16547 12.6891L3.96787 13.4443L13.0345 4.91093L12.2321 4.15573ZM3 13.0667V19.4667H4.13333V13.0667H3ZM3.56667 20H19.4333V18.9333H3.56667V20ZM19.0321 4.15573L3.16547 19.0891L3.96787 19.8443L19.8345 4.91093L19.0321 4.15573ZM8.66667 15.2V8.8H7.53333V15.2H8.66667ZM8.1 9.33333H14.9V8.26667H8.1V9.33333ZM7.89033 15.6949L19.2225 19.9616L19.6441 18.9717L8.3108 14.7051L7.89033 15.6949ZM14.3741 8.9984L18.9075 19.6651L19.9592 19.2683L15.4259 8.6016L14.3741 8.9984ZM12.1267 4.77227L14.3934 9.03893L15.4066 8.56107L13.1399 4.2944L12.1267 4.77227ZM3.3128 13.5435L7.84613 15.6768L8.35387 14.7232L3.82053 12.5899L3.3128 13.5435Z" fill="black"></path>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Ruby Online Compiler
            </span>
          </a>
                    <a target="_blank" href="https://www.programiz.com/php/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border php " title="Online PHP Compiler">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" width="40" height="40" viewBox="0 0 40 40" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<path d="M3.83821 13.8008H9.6625C11.372 13.8151 12.6107 14.308 13.3788 15.2786C14.1468 16.2492 14.4002 17.5748 14.1394 19.2556C14.0381 20.0236 13.8134 20.7769 13.4657 21.5158C13.1323 22.2547 12.669 22.921 12.0748 23.5152C11.3503 24.2684 10.5753 24.7465 9.74943 24.9495C8.9236 25.1525 8.06865 25.2538 7.185 25.2538H4.57711L3.75128 29.3829H0.730469L3.83821 13.8008ZM6.3809 16.2783L5.07696 22.798C5.16389 22.8124 5.25082 22.8197 5.33775 22.8197C5.43903 22.8197 5.54072 22.8197 5.642 22.8197C7.03288 22.8341 8.19208 22.6967 9.11919 22.4068C10.0463 22.1026 10.6696 21.0451 10.9882 19.2339C11.249 17.7126 10.9882 16.8359 10.2058 16.6043C9.4378 16.3726 8.4746 16.2639 7.3154 16.2783C7.14154 16.2926 6.97506 16.3 6.81555 16.3C6.67081 16.3 6.51868 16.3 6.35917 16.3L6.3809 16.2783Z" fill="#25265E" fill-opacity="0.67"></path>
<path d="M17.5748 9.64844H20.5739L19.7263 13.7993H22.4211C23.8989 13.8284 24.9999 14.1327 25.7244 14.7121C26.4634 15.2915 26.6807 16.3929 26.3764 18.0154L24.9203 25.2523H21.8778L23.2687 18.3414C23.4134 17.6169 23.37 17.1027 23.1383 16.7984C22.9066 16.4942 22.4068 16.342 21.6387 16.342L19.2265 16.3203L17.4444 25.2523H14.4453L17.5748 9.64844Z" fill="#25265E" fill-opacity="0.67"></path>
<path d="M29.5999 13.8008H35.4242C37.1337 13.8151 38.3725 14.308 39.1405 15.2786C39.9085 16.2492 40.1619 17.5748 39.9011 19.2556C39.7998 20.0236 39.5751 20.7769 39.2274 21.5158C38.894 22.2547 38.4307 22.921 37.8365 23.5152C37.112 24.2684 36.337 24.7465 35.5111 24.9495C34.6853 25.1525 33.8304 25.2538 32.9467 25.2538H30.3388L29.513 29.3829H26.4922L29.5999 13.8008ZM32.1426 16.2783L30.8387 22.798C30.9256 22.8124 31.0125 22.8197 31.0995 22.8197C31.2007 22.8197 31.3024 22.8197 31.4037 22.8197C32.7946 22.8341 33.9538 22.6967 34.8809 22.4068C35.808 22.1026 36.4313 21.0451 36.7499 19.2339C37.0107 17.7126 36.7499 16.8359 35.9675 16.6043C35.1995 16.3726 34.2363 16.2639 33.0771 16.2783C32.9033 16.2926 32.7368 16.3 32.5773 16.3C32.4325 16.3 32.2804 16.3 32.1209 16.3L32.1426 16.2783Z" fill="#25265E" fill-opacity="0.67"></path>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Online PHP Compiler
            </span>
          </a>
          <a target="_blank" href="https://www.programiz.com/swift/online-compiler/" class="change-lang-row tw:inline-flex tw:items-center tw:mb-4 tw:w-full tw:box-border swift " title="Online Swift Compiler">
            <span class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px]">
              <svg xmlns="http://www.w3.org/2000/svg" width="40" height="40" viewBox="0 0 40 40" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<path fill-rule="evenodd" clip-rule="evenodd" d="M29.9196 33.8549C32.0265 33.0205 36.1973 31.7405 38.4533 35.8806C38.9712 36.8532 40.1207 31.7059 35.9618 26.8506L35.8873 26.7661C35.9081 26.6956 35.9286 26.6286 35.9487 26.5631C35.9889 26.4317 36.0272 26.3061 36.0638 26.1702C38.159 18.6894 33.1565 9.75527 24.7445 5C28.3777 9.66308 30.0412 15.2949 28.5857 20.25C28.4536 20.7083 28.2951 21.1588 28.1109 21.5995C27.9383 21.4841 27.7225 21.361 27.4439 21.2149C21.1601 17.3644 15.3113 12.871 9.99608 7.81009C13.1936 12.2165 16.7354 16.3731 20.5896 20.2423C17.8902 18.7855 10.3022 13.638 5.53115 9.5593C6.1325 10.4985 6.82774 11.3767 7.60662 12.181C11.5537 16.9401 16.8504 22.768 23.0888 27.2504C18.7062 29.7914 12.4836 29.9798 6.257 27.2504C4.73944 26.619 3.30917 25.8028 2 24.8209C4.81703 28.9559 8.83711 32.1663 13.539 34.0355C19.5694 36.4535 25.5607 36.2113 29.9196 33.8549Z" fill="#25265E" fill-opacity="0.67"></path>
</svg>
            </span>
            <span class="nav-menu-text tw:ml-4 tw:font-medium tw:text-sm">
              Online Swift Compiler
            </span>
          </a>
        </div>
      </div>
    </div>

    
        <div class="share-link-generating-modal tw:hidden tw:relative" style="display: none;">
      <div class="modal-backdrop-share">
      </div>

      <div class="modal-content">
        <div class="modal-header tw:flex tw:justify-between tw:items-center tw:text-text tw:dark:text-white/87 tw:pt-6 tw:px-6 tw:pb-4">
          <h2 class="modal-title tw:m-0 tw:text-[24px] tw:font-medium tw:leading-[36px]">Generating Link</h2>
          <h2 class="modal-title modal-title-mob tw:m-0 tw:text-[24px] tw:font-medium tw:leading-[36px]">Generating
            Link</h2>
        </div>
        <div class="modal-body tw:pt-0 tw:px-6 tw:pb-6">
          <div class="progress-bar tw:w-full tw:bg-border tw:dark:bg-white/20 tw:rounded-sm">
            <div class="progress tw:w-0 tw:h-2 tw:bg-primary tw:rounded-sm"></div>
          </div>
        </div>
      </div>
    </div>

        <div class="notification " id="notification" style="display:none;">
      <div class="check-icon-wrapper tw:bg-success/15 tw:dark:bg-white/20 tw:flex tw:items-center tw:justify-center tw:py-[14px] tw:px-2 tw:border-r tw:border-r-success">
        <img src="./pallidrome_recursion_files/check.svg" alt="check">
      </div>

      <div class="notification-message-wrapper tw:flex tw:items-center tw:h-full tw:w-max">
        <p class="notification-message tw:text-[16px] tw:leading-[24px] tw:font-medium tw:pt-3 tw:pr-0 tw:pb-3 tw:pl-2 tw:m-0">
        </p>
        <button type="button" class="close-modal-notification tw:cursor-pointer tw:outline-none tw:bg-transparent tw:border-0 tw:flex tw:items-center tw:pt-[10px] tw:pr-2 tw:pb-[10px] tw:pl-3" title="Close">
          <svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" viewBox="0 0 32 32" fill="none" class="svg replaced-svg">
<path d="M25.333 6.4707L6.66643 25.1373" stroke="#25265E" stroke-opacity="0.67" stroke-width="2.66667" stroke-linecap="round" stroke-linejoin="round"></path>
<path d="M6.66699 6.4707L25.3336 25.1373" stroke="#25265E" stroke-opacity="0.67" stroke-width="2.66667" stroke-linecap="round" stroke-linejoin="round"></path>
</svg>
        </button>
      </div>
    </div>

        <div class=" share-link-modal tw:hidden" style="display: none;">
      <div class="modal-backdrop-share">
      </div>

      <div class="modal-content">
        <div class="modal-header tw:flex tw:justify-between tw:items-center tw:text-text tw:dark:text-white/87 tw:pt-6 tw:px-6 tw:pb-4">
          <h2 class="modal-title tw:m-0 tw:text-[24px] tw:font-medium tw:leading-[36px]">Share your code</h2>
          <h2 class="modal-title modal-title-mob tw:m-0 tw:text-[24px] tw:font-medium tw:leading-[36px]">Share code
          </h2>
          <button type="button" class="close-modal tw:cursor-pointer tw:outline-none tw:bg-transparent tw:border-0" title="Close">
            <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" class="svg replaced-svg">
<path d="M19 4.85352L5.00006 18.8535" stroke="#25265E" stroke-opacity="0.7" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
<path d="M5 4.85352L18.9999 18.8535" stroke="#25265E" stroke-opacity="0.7" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
</svg>
          </button>
        </div>

        <div class="modal-body tw:pt-0 tw:px-6 tw:pb-6">
          <div class="share-code-container tw:flex tw:items-center tw:justify-between tw:bg-[#f8faff] tw:border tw:border-border tw:dark:border-white/20 tw:rounded-sm tw:py-3 tw:px-4 tw:text-[16px] tw:leading-[24px]">
            <input type="text" class="share-code-value tw:flex tw:grow tw:border-0 tw:bg-transparent tw:w-full tw:text-text tw:dark:text-white/87 tw:font-normal tw:text-sm tw:p-0" value="https://www.programiz.com/online-compiler/XXXXXXXXX" readonly="">
          </div>
          <button class="share-code-copy-btn tw:w-full tw:py-2 tw:px-0 tw:text-sm tw:mt-4 tw:bg-primary tw:hover:bg-primary-hover tw:text-white tw:border-0 tw:rounded-sm tw:font-bold" title="Copy Link">Copy Link</button>
          <button class="share-code-copy-btn code-copied-success tw:bg-success tw:items-center tw:justify-center tw:gap-2 tw:hidden tw:flex" title="Copied to clipboard">
            <svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" viewBox="0 0 20 20" fill="none" class="svg replaced-svg">
<g clip-path="url(#clip0_13050_2098)">
<path d="M18.3334 9.2333V9.99997C18.3323 11.797 17.7504 13.5455 16.6745 14.9848C15.5985 16.4241 14.0861 17.477 12.3628 17.9866C10.6395 18.4961 8.79774 18.4349 7.11208 17.8121C5.42642 17.1894 3.98723 16.0384 3.00915 14.5309C2.03108 13.0233 1.56651 11.24 1.68475 9.4469C1.80299 7.65377 2.49769 5.94691 3.66525 4.58086C4.83281 3.21482 6.41068 2.26279 8.16351 1.86676C9.91635 1.47073 11.7502 1.65192 13.3917 2.3833" stroke="#56BD5B" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
<path d="M18.3333 3.33337L10 11.675L7.5 9.17504" stroke="#56BD5B" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
</g>
<defs>
<clippath id="clip0_13050_2098">
<rect width="20" height="20" fill="white"></rect>
</clippath>
</defs>
</svg>
            Copied to clipboard
          </button>

                    <div class="social-wrapper">
            <span>or share using</span>
            <div id="social-icons">
            </div>
          </div>

        </div>
      </div>
    </div>

    
        <div class="contact-modal tw:hidden" style="display: none;">
      <div class="modal-backdrop-share"></div>

      <div class="modal-content">
        <div class="modal-header tw:flex tw:justify-between tw:items-center tw:text-text tw:dark:text-white/87 tw:pt-6 tw:px-6 tw:pb-4">
                    <h2 class="tw:m-0 tw:text-[24px] tw:font-medium tw:leading-[36px]">Contact us</h2>
          <button type="button" class="close-contact-modal tw:cursor-pointer tw:outline-none tw:bg-transparent tw:border-0" title="Close">
            <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" class="svg replaced-svg">
<path d="M19 4.85352L5.00006 18.8535" stroke="#25265E" stroke-opacity="0.7" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
<path d="M5 4.85352L18.9999 18.8535" stroke="#25265E" stroke-opacity="0.7" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
</svg>
          </button>
        </div>

        <form id="contact-form" class="modal-body tw:pt-0 tw:px-6 tw:pb-6 tw:flex tw:flex-col tw:gap-3">
                    <div class="contact-form-field tw:flex tw:flex-col tw:gap-1">
            <label for="contact-email" class="tw:text-xs tw:font-medium tw:text-text/70 tw:dark:text-white/70">Email
              <span class="tw:text-danger">*</span></label>
            <input type="email" id="contact-email" name="email" required="" maxlength="254" class="tw:border tw:border-border tw:dark:border-white/20 tw:rounded-sm tw:bg-transparent tw:text-text tw:dark:text-white/87 tw:text-sm tw:py-2 tw:px-3 tw:w-full tw:box-border" placeholder="you@example.com">
          </div>

          <div class="contact-form-field tw:flex tw:flex-col tw:gap-1">
            <label for="contact-name" class="tw:text-xs tw:font-medium tw:text-text/70 tw:dark:text-white/70">Name</label>
            <input type="text" id="contact-name" name="name" maxlength="120" class="tw:border tw:border-border tw:dark:border-white/20 tw:rounded-sm tw:bg-transparent tw:text-text tw:dark:text-white/87 tw:text-sm tw:py-2 tw:px-3 tw:w-full tw:box-border" placeholder="Your name">
          </div>

          <div class="contact-form-field tw:flex tw:flex-col tw:gap-1">
            <label for="contact-category" class="tw:text-xs tw:font-medium tw:text-text/70 tw:dark:text-white/70">Category <span class="tw:text-danger">*</span></label>
                        <select id="contact-category" name="category" required="" style="background-image: url('https://cdn.playground-v2.programiz.com/assets/icons/chevron-down.svg'); background-repeat: no-repeat; background-position: right 0.75rem center; background-size: 12px;" class="tw:appearance-none tw:cursor-pointer tw:border tw:border-border tw:dark:border-white/20 tw:rounded-sm tw:bg-transparent tw:text-text tw:dark:text-white/87 tw:text-sm tw:py-2 tw:pl-3 tw:pr-8 tw:w-full tw:box-border">
                            <option value="" disabled="" selected="">Select a category</option>
              <option value="bug">Bug report</option>
              <option value="feature">Feature request</option>
              <option value="general">General query</option>
              <option value="advertise">Advertise</option>
            </select>
          </div>

          <div class="contact-form-field tw:flex tw:flex-col tw:gap-1">
            <label for="contact-message" class="tw:text-xs tw:font-medium tw:text-text/70 tw:dark:text-white/70">Message <span class="tw:text-danger">*</span></label>
            <textarea id="contact-message" name="message" required="" maxlength="5000" rows="4" class="tw:border tw:border-border tw:dark:border-white/20 tw:rounded-sm tw:bg-transparent tw:text-text tw:dark:text-white/87 tw:text-sm tw:py-2 tw:px-3 tw:w-full tw:box-border tw:resize-y" placeholder="Tell us what's going on"></textarea>
          </div>

          <div class="contact-form-field tw:flex tw:flex-col tw:gap-1">
            <label class="tw:text-xs tw:font-medium tw:text-text/70 tw:dark:text-white/70">Screenshot or recording
              (optional, up to 3 files, 10MB each)</label>
                        <input type="file" id="contact-attachments" name="attachments" multiple="" accept="image/png,image/jpeg,image/webp,image/gif,video/webm,video/mp4" class="tw:text-xs tw:text-text tw:dark:text-white/87 tw:cursor-pointer tw:file:mr-3 tw:file:py-1.5 tw:file:px-3 tw:file:rounded-sm tw:file:border tw:file:border-border tw:file:bg-transparent tw:file:hover:bg-black/5 tw:file:text-xs tw:file:font-medium tw:file:text-text tw:file:cursor-pointer">
            <ul id="contact-attachments-list" class="tw:flex tw:flex-col tw:gap-1 tw:m-0 tw:p-0 tw:list-none"></ul>
          </div>

                    <div id="contact-form-turnstile" class="contact-form-field"></div>

          <p id="contact-form-error" class="tw:hidden tw:text-danger tw:text-xs tw:m-0"></p>

          <p class="contact-form-field tw:text-[11px] tw:text-text/50 tw:dark:text-white/50 tw:m-0">
            Submitting this form sends your code, browser info, and IP address to our support team
            to help resolve your issue.
          </p>

                    <button type="submit" id="contact-form-submit" disabled="" class="tw:w-full tw:py-2 tw:px-0 tw:text-sm tw:mt-1 tw:bg-primary tw:hover:bg-primary-hover tw:disabled:opacity-50 tw:disabled:cursor-not-allowed tw:text-white tw:border-0 tw:rounded-sm tw:font-bold tw:cursor-pointer">
            Submit
          </button>

          <div id="contact-form-success" class="tw:hidden tw:items-center tw:justify-center tw:gap-2 tw:bg-success tw:text-white tw:text-sm tw:font-bold tw:py-2 tw:rounded-sm">
            <svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" viewBox="0 0 20 20" fill="none" class="svg replaced-svg">
<g clip-path="url(#clip0_13050_2098)">
<path d="M18.3334 9.2333V9.99997C18.3323 11.797 17.7504 13.5455 16.6745 14.9848C15.5985 16.4241 14.0861 17.477 12.3628 17.9866C10.6395 18.4961 8.79774 18.4349 7.11208 17.8121C5.42642 17.1894 3.98723 16.0384 3.00915 14.5309C2.03108 13.0233 1.56651 11.24 1.68475 9.4469C1.80299 7.65377 2.49769 5.94691 3.66525 4.58086C4.83281 3.21482 6.41068 2.26279 8.16351 1.86676C9.91635 1.47073 11.7502 1.65192 13.3917 2.3833" stroke="#56BD5B" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
<path d="M18.3333 3.33337L10 11.675L7.5 9.17504" stroke="#56BD5B" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
</g>
<defs>
<clippath id="clip0_13050_2098">
<rect width="20" height="20" fill="white"></rect>
</clippath>
</defs>
</svg>
            Thanks! We'll get back to you at your email.
          </div>
        </form>
      </div>
    </div>
    
    <div class="wrapper has-adhesive-ad tw:bg-surface tw:flex tw:flex-col tw:h-full tw:w-full tw:max-h-full">
      <div class="header tw:flex tw:justify-between tw:bg-white tw:h-[51px] tw:border-b tw:border-b-border">
        <div class="header-wrapper tw:flex">
          <div class="burger-menu tw:flex tw:items-center">
            <button type="button" class="burger-menu-btn tw:pt-0 tw:pr-0 tw:pb-0 tw:pl-4 tw:border-0 tw:bg-transparent" title="Open navigation">
              <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" class="svg burger-menu-btn-icon replaced-svg">
  <path d="M3 12H21" stroke="#25265E" stroke-opacity="0.7" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
  <path d="M3 6H21" stroke="#25265E" stroke-opacity="0.7" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
  <path d="M3 18H21" stroke="#25265E" stroke-opacity="0.7" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
</svg>
            </button>
          </div>
          <div class="logo-wrapper tw:bg-white tw:flex tw:items-center tw:text-text/70 tw:dark:text-white">
            <h1 class="logo-title-wrapper tw:m-0 tw:inline-block tw:text-left tw:translate-x-0 tw:left-0">
              <a href="https://www.programiz.com/" target="_blank" class="logo-link tw:flex tw:flex-col tw:ml-4">
                                <img id="logo" class="tw:w-[53px]" alt="Programiz" src="./pallidrome_recursion_files/logo-inverted.svg">
                <span class="logo-sub-title-wrapper tw:text-[10px] tw:align-middle tw:font-normal tw:leading-[15px] tw:mt-[5px]">
                  <span class="logo-sub-title">
                    C++ Online                    Compiler                  </span>
                </span>
              </a>
            </h1>
          </div>
        </div>
        <div class="compiler-header-ad tw:py-1 tw:px-0 tw:m-auto tw:hidden">
                    <div id="div-gpt-ad-Programizcom36786" class="content-top-ad"></div>
        </div>
        <div id="add-replacement" class="tw:hidden tw:w-[728px]"></div>
        <div id="feedback-desktop" class="tw:hidden">
          <a id="ad-link" href="https://programiz.pro/?utm_source=programiz_compiler&amp;utm_medium=referral&amp;utm_audience=ORGANIC-FREEMIUM&amp;utm_campaign=offer-pro&amp;utm_content=interests_pro&amp;utm_term=nav_floating_button" target="_blank">Programiz PRO ❯</a>
        </div>
        <div id="feedback-mobile" class="tw:block">
          <a id="mobile-ad-link" class="tw:no-underline tw:border tw:border-primary tw:text-primary tw:text-[12px] tw:box-border tw:rounded-sm tw:py-1.5 tw:px-4 tw:float-right tw:mr-4 tw:mt-3 tw:bg-[#f5f8ff] tw:font-medium tw:leading-[16px]" href="https://programiz.pro/?utm_source=programiz_compiler&amp;utm_medium=referral&amp;utm_audience=ORGANIC-FREEMIUM&amp;utm_campaign=offer-pro&amp;utm_content=interests_pro&amp;utm_term=nav_floating_button" target="_blank">Programiz PRO</a>
        </div>
      </div>

      <div class="mobile-ad-wrapper clearfix tw:w-[300px] tw:h-[250px] tw:my-3 tw:mx-auto">
                <div id="programizcom50430">
        </div>
      </div>

      <div class="mobile-top-bar clearfix tw:flex tw:items-center tw:relative tw:p-2 tw:border-b tw:border-b-border tw:dark:border-b-white/20 tw:bg-white tw:dark:bg-[#2d2f34]">
        <div class="pills-wrapper tw:float-left tw:flex tw:grow tw:w-1/2">
          <div class="pills clearfix tw:flex tw:max-w-[200px] tw:min-w-[175px] tw:text-center">
            <button class="pill active compiler-pill tw:bg-white tw:text-[rgba(51,51,51,0.6)] tw:py-1 tw:px-[15px] tw:text-sm tw:shadow-none tw:flex-1 tw:border tw:border-black/12 tw:border-l-white tw:border-r-white tw:box-border tw:max-w-full tw:overflow-hidden tw:whitespace-nowrap tw:text-ellipsis" id="executed-file-name-mobile" title="main.cpp">
              main.cpp            </button>
            <button class="pill shell-pill tw:bg-white tw:text-[rgba(51,51,51,0.6)] tw:py-1 tw:px-[15px] tw:text-sm tw:shadow-none tw:flex-1 tw:border tw:border-black/12 tw:border-l-white tw:border-r-white tw:box-border">
              Output            </button>
          </div>
        </div>

        <div class="other-options-wrapper tw:float-right tw:flex tw:items-center tw:gap-0.5">
                              <div class="mobile-top-bar-visualize-button visualize tw:cursor-pointer tw:bg-transparent tw:text-sm tw:text-text/70 tw:border tw:border-border tw:outline-none tw:rounded-xs tw:box-border tw:z-[109] tw:flex tw:flex-row tw:shrink-0 tw:items-center tw:justify-center tw:h-8 tw:py-1 tw:px-[14px] tw:w-fit tw:ml-2" style="display: none" title="Visualize">
                            <svg class="visualize-start-icon tw:block tw:shrink-0 tw:w-[18px] tw:h-[18px] tw:text-inherit" width="24" height="24" viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg">
                <path fill-rule="evenodd" clip-rule="evenodd" d="M8.00004 1.33331L14.6667 5.66665V10.3333L8.00004 14.6666L1.33337 10.3333V5.66665L8.00004 1.33331V1.33331Z" stroke="url(#paint0_linear_26731_46345)" stroke-width="1.33" stroke-linecap="round" stroke-linejoin="round"></path>
                <path d="M8 14.6666V10.3333" stroke="url(#paint1_linear_26731_46345)" stroke-width="1.33" stroke-linecap="round" stroke-linejoin="round"></path>
                <path d="M14.6667 5.66669L8.00004 10.3334L1.33337 5.66669" stroke="url(#paint2_linear_26731_46345)" stroke-width="1.33" stroke-linecap="round" stroke-linejoin="round"></path>
                <path d="M1.33337 10.3334L8.00004 5.66669L14.6667 10.3334" stroke="url(#paint3_linear_26731_46345)" stroke-width="1.33" stroke-linecap="round" stroke-linejoin="round"></path>
                <path d="M8 1.33331V5.66665" stroke="url(#paint4_linear_26731_46345)" stroke-width="1.33" stroke-linecap="round" stroke-linejoin="round"></path>
                <defs>
                  <lineargradient id="paint0_linear_26731_46345" x1="8.00004" y1="1.33331" x2="8.00004" y2="14.6666" gradientUnits="userSpaceOnUse">
                    <stop stop-color="#00DBCD"></stop>
                    <stop offset="1" stop-color="#00BBE1"></stop>
                  </lineargradient>
                  <lineargradient id="paint1_linear_26731_46345" x1="8.33333" y1="10.3333" x2="8.33333" y2="14.6666" gradientUnits="userSpaceOnUse">
                    <stop stop-color="#00DBCD"></stop>
                    <stop offset="1" stop-color="#00BBE1"></stop>
                  </lineargradient>
                  <lineargradient id="paint2_linear_26731_46345" x1="8.00004" y1="5.66669" x2="8.00004" y2="10.3334" gradientUnits="userSpaceOnUse">
                    <stop stop-color="#00DBCD"></stop>
                    <stop offset="1" stop-color="#00BBE1"></stop>
                  </lineargradient>
                  <lineargradient id="paint3_linear_26731_46345" x1="8.00004" y1="5.66669" x2="8.00004" y2="10.3334" gradientUnits="userSpaceOnUse">
                    <stop stop-color="#00DBCD"></stop>
                    <stop offset="1" stop-color="#00BBE1"></stop>
                  </lineargradient>
                  <lineargradient id="paint4_linear_26731_46345" x1="8.33333" y1="1.33331" x2="8.33333" y2="5.66665" gradientUnits="userSpaceOnUse">
                    <stop stop-color="#00DBCD"></stop>
                    <stop offset="1" stop-color="#00BBE1"></stop>
                  </lineargradient>
                </defs>
              </svg>
                            <svg class="visualize-stop-icon tw:hidden tw:shrink-0 tw:w-3 tw:h-3 tw:text-inherit" width="12" height="12" viewBox="0 0 14 14" fill="none" xmlns="http://www.w3.org/2000/svg">
                <rect x="1" y="1" width="12" height="12" rx="2" fill="currentColor"></rect>
              </svg>
            <span class="visualize-text tw:whitespace-nowrap tw:hidden">Visualize</span>
          </div>
                    <div class="mobile-top-bar-run-button run tw:flex tw:items-center tw:box-border tw:h-8 tw:py-1.5 tw:px-4 tw:w-[52px] tw:justify-center tw:ml-2 tw:cursor-pointer tw:bg-primary tw:text-sm tw:text-white tw:border-0 tw:outline-none tw:rounded-xs tw:z-[109] tw:hover:bg-primary-hover"><img src="./pallidrome_recursion_files/play.svg" alt="run-icon"></div>
                    <div class="mobile-overflow-menu-wrapper tw:relative tw:flex tw:items-center tw:shrink-0 tw:ml-1">
            <button type="button" class="mobile-overflow-menu-btn new-feature-dot-host tw:flex tw:items-center tw:justify-center tw:p-1.5 tw:bg-transparent tw:border-0 tw:rounded-xs tw:cursor-pointer" data-new-feature="download" id="toggle-overflow-menu-mobile" title="More options" data-base-title="More options">
              <svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" viewBox="0 0 20 20" fill="none" class="svg replaced-svg">
<path fill-rule="evenodd" clip-rule="evenodd" d="M9.99967 11.6673C10.9201 11.6673 11.6663 10.9211 11.6663 10.0007C11.6663 9.08018 10.9201 8.33398 9.99967 8.33398C9.0792 8.33398 8.33301 9.08018 8.33301 10.0007C8.33301 10.9211 9.0792 11.6673 9.99967 11.6673Z" stroke="#25265E" stroke-opacity="0.4" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
<path fill-rule="evenodd" clip-rule="evenodd" d="M9.99967 4.99935C10.9201 4.99935 11.6663 4.25316 11.6663 3.33268C11.6663 2.41221 10.9201 1.66602 9.99967 1.66602C9.0792 1.66602 8.33301 2.41221 8.33301 3.33268C8.33301 4.25316 9.0792 4.99935 9.99967 4.99935Z" stroke="#25265E" stroke-opacity="0.4" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
<path fill-rule="evenodd" clip-rule="evenodd" d="M9.99967 18.3333C10.9201 18.3333 11.6663 17.5871 11.6663 16.6667C11.6663 15.7462 10.9201 15 9.99967 15C9.0792 15 8.33301 15.7462 8.33301 16.6667C8.33301 17.5871 9.0792 18.3333 9.99967 18.3333Z" stroke="#25265E" stroke-opacity="0.4" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
</svg>
            </button>
            <div class="mobile-overflow-menu tw:hidden tw:absolute tw:top-[calc(100%+8px)] tw:right-0 tw:flex-col tw:min-w-[160px] tw:bg-white tw:dark:bg-[#2d2f34] tw:border tw:border-border tw:dark:border-white/20 tw:rounded-sm tw:shadow-[0px_4px_12px_0px_#000a010f] tw:p-1 tw:z-[110]" id="mobile-overflow-menu">
              <button type="button" class="share-button-mob mobile-overflow-menu-item tw:flex tw:items-center tw:cursor-pointer tw:p-0 tw:bg-transparent tw:border-0" title="Share code">
                <svg xmlns="http://www.w3.org/2000/svg" width="18" height="18" viewBox="0 0 18 18" fill="none" class="svg share-icon tw:w-5 tw:h-5 replaced-svg">
<path fill-rule="evenodd" clip-rule="evenodd" d="M13.5 6C14.7426 6 15.75 4.99264 15.75 3.75C15.75 2.50736 14.7426 1.5 13.5 1.5C12.2574 1.5 11.25 2.50736 11.25 3.75C11.25 4.99264 12.2574 6 13.5 6Z" stroke="white" stroke-width="1.77778" stroke-linecap="round" stroke-linejoin="round"></path>
<path fill-rule="evenodd" clip-rule="evenodd" d="M4.5 11.25C5.74264 11.25 6.75 10.2426 6.75 9C6.75 7.75736 5.74264 6.75 4.5 6.75C3.25736 6.75 2.25 7.75736 2.25 9C2.25 10.2426 3.25736 11.25 4.5 11.25Z" stroke="white" stroke-width="1.77778" stroke-linecap="round" stroke-linejoin="round"></path>
<path fill-rule="evenodd" clip-rule="evenodd" d="M13.5 16.5C14.7426 16.5 15.75 15.4926 15.75 14.25C15.75 13.0074 14.7426 12 13.5 12C12.2574 12 11.25 13.0074 11.25 14.25C11.25 15.4926 12.2574 16.5 13.5 16.5Z" stroke="white" stroke-width="1.77778" stroke-linecap="round" stroke-linejoin="round"></path>
<path d="M6.44336 10.1328L11.5659 13.1178" stroke="white" stroke-width="1.77778" stroke-linecap="round" stroke-linejoin="round"></path>
<path d="M11.5584 4.88281L6.44336 7.86781" stroke="white" stroke-width="1.77778" stroke-linecap="round" stroke-linejoin="round"></path>
</svg>
                <span>Share</span>
              </button>
                            <button type="button" id="download-project-mobile" class="download-project-trigger mobile-overflow-menu-item tw:flex tw:items-center tw:cursor-pointer tw:p-0 tw:bg-transparent tw:border-0" title="Download the current code as a runnable project (.zip)">
                <svg class="tw:w-5 tw:h-5" width="18" height="18" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" xmlns="http://www.w3.org/2000/svg" aria-hidden="true"><path d="M12 3v12"></path><path d="M7 10l5 5 5-5"></path><path d="M4 20h16"></path></svg>
                <span class="tw:inline-flex tw:items-center tw:gap-2">
                  <span>Download</span>
                  <span class="new-feature-tag tw:inline-flex tw:items-center tw:justify-center tw:h-4 tw:pt-[1.5px] tw:pl-[7.6px] tw:pr-[8.4px] tw:rounded-full tw:bg-[#ff8a00] tw:text-white tw:text-[10px] tw:font-bold tw:leading-none tw:uppercase" data-new-feature="download">New</span>
                </span>
              </button>
              <button type="button" id="open-contact-modal-mobile" class="mobile-overflow-menu-item tw:flex tw:items-center tw:cursor-pointer tw:p-0 tw:bg-transparent tw:border-0" title="Contact us">
                <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg tw:w-5 tw:h-5 replaced-svg">
  <path d="M21 15a2 2 0 0 1-2 2H7l-4 4V5a2 2 0 0 1 2-2h14a2 2 0 0 1 2 2z"></path>
</svg>
                <span>Contact us</span>
              </button>
                            <button type="button" id="toggle-dark-mode-mobile" class="mobile-overflow-menu-item tw:flex tw:items-center tw:cursor-pointer tw:p-0 tw:bg-transparent tw:border-0" title="Toggle dark mode">
                <svg class="toggle-dark-mode-mobile-icon moon tw:w-5 tw:h-5" width="18" height="18" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" xmlns="http://www.w3.org/2000/svg">
                  <path d="M21 12.79A9 9 0 1 1 11.21 3 7 7 0 0 0 21 12.79z"></path>
                </svg>
                <svg class="toggle-dark-mode-mobile-icon sun tw:w-5 tw:h-5" width="18" height="18" viewBox="0 0 24 24" fill="none" stroke="#ffffff" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" xmlns="http://www.w3.org/2000/svg">
                  <circle cx="12" cy="12" r="5"></circle>
                  <line x1="12" y1="1" x2="12" y2="3"></line>
                  <line x1="12" y1="21" x2="12" y2="23"></line>
                  <line x1="4.22" y1="4.22" x2="5.64" y2="5.64"></line>
                  <line x1="18.36" y1="18.36" x2="19.78" y2="19.78"></line>
                  <line x1="1" y1="12" x2="3" y2="12"></line>
                  <line x1="21" y1="12" x2="23" y2="12"></line>
                  <line x1="4.22" y1="19.78" x2="5.64" y2="18.36"></line>
                  <line x1="18.36" y1="5.64" x2="19.78" y2="4.22"></line>
                </svg>
                <span class="theme-menu-label to-dark">Dark mode</span>
                <span class="theme-menu-label to-light tw:hidden">Light mode</span>
              </button>
            </div>
          </div>
        </div>
      </div>
      <div class="main-content-wrapper tw:flex-1 tw:flex tw:min-h-0 tw:min-w-0 tw:h-full tw:w-full">
        <div class="sidebar-wrapper tw:transition-all tw:duration-300 tw:ease-[ease] tw:w-0 tw:hidden">
          <a target="_blank" href="https://www.programiz.com/python-programming/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 python " title="Online Python Compiler">
            <svg xmlns="http://www.w3.org/2000/svg" fill="none" viewBox="0 0 24 25" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
  <path fill-opacity=".4" d="M9.091 11.663h5.782c1.61 0 2.877-1.353 2.877-2.96V3.225c0-1.559-1.315-2.73-2.886-2.99A18.088 18.088 0 0011.853 0a16.25 16.25 0 00-2.738.235c-2.45.43-2.866 1.33-2.866 2.99v2.132H12v.788H4.025C2.342 6.145.868 7.152.408 9.064c-.532 2.191-.556 3.531 0 5.82.411 1.702 1.394 2.888 3.076 2.888h1.972V15.2c0-1.9 1.672-3.538 3.635-3.538zm-.364-7.707c-.6 0-1.087-.489-1.087-1.093 0-.606.486-1.1 1.087-1.1.597 0 1.086.494 1.086 1.1a1.09 1.09 0 01-1.086 1.093zm14.83 5.108c-.416-1.665-1.21-2.919-2.895-2.919h-2.118v2.558c0 1.98-1.744 3.551-3.671 3.551H9.091c-1.584 0-2.842 1.444-2.842 3.02v5.479c0 1.558 1.338 2.475 2.868 2.923 1.833.535 3.568.632 5.76 0 1.458-.42 2.873-1.264 2.873-2.923V18.56H12v-.788h8.662c1.682 0 2.31-1.138 2.895-2.89.604-1.801.578-3.506 0-5.818zm-8.32 10.958c.6 0 1.087.488 1.087 1.093 0 .606-.486 1.1-1.087 1.1a1.095 1.095 0 01-1.086-1.1 1.09 1.09 0 011.086-1.093z"></path>
</svg>
          </a>
          <a target="_blank" href="https://www.programiz.com/r/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 r " title="Online R Compiler">
            <svg xmlns="http://www.w3.org/2000/svg" width="40" height="40" viewBox="0 0 40 40" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<g clip-path="url(#clip0_2886_601)">
<path fill-rule="evenodd" clip-rule="evenodd" d="M20.4449 31.25C31.1885 31.25 38.7187 25.3737 38.7187 18.125C38.7187 10.8763 32.1297 5 19.2656 5C8.52191 5 -0.1875 10.8763 -0.1875 18.125C-0.1875 25.3737 9.70118 31.25 20.4449 31.25ZM23.1934 27.9688C31.2187 27.9688 36.8437 23.9813 36.8437 19.0625C36.8437 14.1437 31.9219 10.1562 22.3125 10.1562C14.2871 10.1562 7.78131 14.1437 7.78131 19.0625C7.78131 23.9813 15.168 27.9688 23.1934 27.9688Z" fill="#6D6D93"></path>
<path fill-rule="evenodd" clip-rule="evenodd" d="M16.2188 35H22.7814V26.3281H24.2416C24.9302 26.3281 25.5635 26.7057 25.891 27.3116L30.047 35H37.547L32.9028 26.9784C32.572 26.4069 32.0506 25.9702 31.43 25.7445L29.8126 25.1562C32.3907 25.1562 35.2032 23.0469 35.4376 19.5312C35.672 16.0156 34.0314 13.2031 29.8126 13.2031H16.2188V35ZM27.0001 17.6562H22.7814V21.875H27.0001C29.3437 21.875 29.3437 17.6562 27.0001 17.6562Z" fill="#6D6D93"></path>
</g>
<defs>
<clippath id="clip0_2886_601">
<rect width="40" height="40" fill="white"></rect>
</clippath>
</defs>
</svg>
          </a>

          <a target="_blank" href="https://www.programiz.com/sql/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 sql" title="Online SQL Editor">
            <svg xmlns="http://www.w3.org/2000/svg" width="21" height="28" viewBox="0 0 21 28" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<path fill-rule="evenodd" clip-rule="evenodd" d="M10.8017 4.96503C16.2496 4.96503 20.6659 4.07743 20.6659 2.98251C20.6659 1.8876 16.2496 1 10.8017 1C5.35386 1 0.9375 1.8876 0.9375 2.98251C0.9375 4.07743 5.35386 4.96503 10.8017 4.96503ZM10.8019 4.19152C15.7423 4.19152 19.7474 3.58535 19.7474 2.8376C19.7474 2.08986 15.7423 1.48369 10.8019 1.48369C5.86141 1.48369 1.85638 2.08986 1.85638 2.8376C1.85638 3.58535 5.86141 4.19152 10.8019 4.19152Z" fill="#A8A8BF"></path>
<path d="M20.3659 2.98251C20.3659 3.01082 20.353 3.0721 20.2553 3.16803C20.1571 3.26451 19.9962 3.37195 19.762 3.48323C19.2951 3.70509 18.6003 3.91285 17.7177 4.09024C15.9573 4.44404 13.512 4.66503 10.8017 4.66503V5.26503C13.5393 5.26503 16.0261 5.04221 17.8359 4.67848C18.7383 4.49711 19.4881 4.27768 20.0195 4.02516C20.2845 3.89926 20.5112 3.75773 20.6757 3.59609C20.8409 3.4339 20.9659 3.22793 20.9659 2.98251H20.3659ZM10.8017 1.3C13.512 1.3 15.9573 1.52099 17.7177 1.87478C18.6003 2.05218 19.2951 2.25994 19.762 2.4818C19.9962 2.59307 20.1571 2.70052 20.2553 2.797C20.353 2.89292 20.3659 2.9542 20.3659 2.98251H20.9659C20.9659 2.7371 20.8409 2.53113 20.6757 2.36894C20.5112 2.2073 20.2845 2.06577 20.0195 1.93986C19.4881 1.68735 18.7383 1.46792 17.8359 1.28655C16.0261 0.922815 13.5393 0.7 10.8017 0.7V1.3ZM1.2375 2.98251C1.2375 2.9542 1.25046 2.89292 1.34812 2.797C1.44635 2.70052 1.60725 2.59307 1.84143 2.4818C2.30833 2.25994 3.00312 2.05218 3.88577 1.87478C5.64613 1.52099 8.09145 1.3 10.8017 1.3V0.7C8.06413 0.7 5.57733 0.922815 3.76755 1.28655C2.86513 1.46792 2.11534 1.68735 1.58392 1.93986C1.31896 2.06577 1.09226 2.2073 0.927691 2.36894C0.762556 2.53113 0.6375 2.7371 0.6375 2.98251H1.2375ZM10.8017 4.66503C8.09145 4.66503 5.64613 4.44404 3.88577 4.09024C3.00312 3.91285 2.30833 3.70509 1.84143 3.48323C1.60725 3.37195 1.44635 3.26451 1.34812 3.16803C1.25046 3.0721 1.2375 3.01082 1.2375 2.98251H0.6375C0.6375 3.22793 0.762556 3.4339 0.927691 3.59609C1.09226 3.75773 1.31896 3.89926 1.58392 4.02516C2.11534 4.27768 2.86513 4.49711 3.76755 4.67848C5.57733 5.04221 8.06413 5.26503 10.8017 5.26503V4.66503ZM19.4474 2.8376C19.4474 2.78735 19.4799 2.8007 19.3872 2.86927C19.3023 2.9321 19.158 3.00532 18.9433 3.08215C18.5175 3.2345 17.8846 3.37692 17.0824 3.49834C15.4825 3.74048 13.2619 3.89152 10.8019 3.89152V4.49152C13.2823 4.49152 15.5344 4.33947 17.1722 4.09159C17.9887 3.968 18.6659 3.81867 19.1454 3.64707C19.3834 3.56191 19.5906 3.46511 19.744 3.35166C19.8896 3.24396 20.0474 3.07479 20.0474 2.8376H19.4474ZM10.8019 1.78369C13.2619 1.78369 15.4825 1.93473 17.0824 2.17687C17.8846 2.29829 18.5175 2.4407 18.9433 2.59306C19.158 2.66989 19.3023 2.74311 19.3872 2.80594C19.4799 2.87451 19.4474 2.88785 19.4474 2.8376H20.0474C20.0474 2.60042 19.8896 2.43125 19.744 2.32355C19.5906 2.2101 19.3834 2.11329 19.1454 2.02814C18.6659 1.85654 17.9887 1.70721 17.1722 1.58362C15.5344 1.33574 13.2823 1.18369 10.8019 1.18369V1.78369ZM2.15638 2.8376C2.15638 2.88785 2.1238 2.87451 2.21651 2.80594C2.30145 2.74311 2.44574 2.66989 2.66043 2.59306C3.08621 2.4407 3.71909 2.29829 4.52134 2.17687C6.1212 1.93473 8.34185 1.78369 10.8019 1.78369V1.18369C8.32142 1.18369 6.06933 1.33574 4.43155 1.58362C3.61499 1.70721 2.93784 1.85654 2.45828 2.02814C2.22031 2.11329 2.0131 2.2101 1.85972 2.32355C1.71411 2.43125 1.55638 2.60042 1.55638 2.8376H2.15638ZM10.8019 3.89152C8.34185 3.89152 6.1212 3.74048 4.52134 3.49834C3.71909 3.37692 3.08621 3.2345 2.66043 3.08215C2.44574 3.00532 2.30145 2.9321 2.21651 2.86927C2.1238 2.8007 2.15638 2.78735 2.15638 2.8376H1.55638C1.55638 3.07479 1.71411 3.24396 1.85972 3.35166C2.0131 3.46511 2.22031 3.56191 2.45828 3.64707C2.93784 3.81867 3.61499 3.968 4.43155 4.09159C6.06933 4.33947 8.32142 4.49152 10.8019 4.49152V3.89152Z" fill="#A8A8BF"></path>
<path d="M0.9375 2.93359C0.9375 2.93359 4.43011 4.25786 10.7679 4.25786C17.1057 4.25786 20.6659 2.93359 20.6659 2.93359V8.76378C20.6659 8.76378 20.1582 11.1054 10.8017 11.1054C1.44522 11.1054 0.9375 8.76378 0.9375 8.76378V2.93359Z" fill="#A8A8BF" stroke="#A8A8BF" stroke-width="0.6" stroke-linecap="round" stroke-linejoin="round"></path>
<path d="M0.9375 11.0636C0.9375 11.0636 0.944635 10.9089 0.985854 10.8218C1.04301 10.7012 1.22762 10.5801 1.22762 10.5801C1.22762 10.5801 2.92001 12.3208 10.8017 12.3208C18.6834 12.3208 20.3033 10.5801 20.3033 10.5801C20.4998 10.6953 20.6196 10.8408 20.6659 11.0636V16.8938C20.6659 16.8938 20.1582 19.2354 10.8017 19.2354C1.44522 19.2354 0.9375 16.8938 0.9375 16.8938V11.0636Z" fill="#A8A8BF" stroke="#A8A8BF" stroke-width="0.6" stroke-linecap="round" stroke-linejoin="round"></path>
<path d="M0.9375 19.2238C0.9375 19.2238 0.944635 19.069 0.985854 18.982C1.04301 18.8613 1.22762 18.7402 1.22762 18.7402C1.22762 18.7402 2.92001 20.481 10.8017 20.481C18.6834 20.481 20.3033 18.7402 20.3033 18.7402C20.4998 18.8554 20.6196 19.0009 20.6659 19.2238V25.054C20.6659 25.054 20.1582 27.3956 10.8017 27.3956C1.44522 27.3956 0.9375 25.054 0.9375 25.054V19.2238Z" fill="#A8A8BF" stroke="#A8A8BF" stroke-width="0.6" stroke-linecap="round" stroke-linejoin="round"></path>
</svg>
          </a>

          <a target="_blank" href="https://www.programiz.com/html/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 html" title="Online HTML/CSS Editor">
            <svg xmlns="http://www.w3.org/2000/svg" width="86" height="98" viewBox="0 0 86 98" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<path fill-rule="evenodd" clip-rule="evenodd" d="M0 0L7.81641 87.668L42.8914 97.4047L78.0625 87.6547L85.8875 0H0ZM42.9624 39.9803H28.7717L27.7889 28.9693H42.9624H42.9998H68.9343L69.1499 26.5537L69.6405 21.1021L69.8976 18.2178H42.9998H42.9624H16.0381L16.2959 21.1021L18.9381 50.7326H42.9624H42.9998H56.2022L54.9546 64.6772L42.9624 67.9139V67.9149L42.9521 67.9178L30.9779 64.6834L30.2131 56.1092H19.4186L20.9248 72.9912L42.9506 79.1053L42.9998 79.092V79.0902L65.0054 72.9912L65.1671 71.1748L67.6936 42.8678L67.9554 39.9803H65.0585H42.9998H42.9624Z" fill="#F9F7F7"></path>
</svg>
          </a>
          <a target="_blank" href="https://www.programiz.com/java-programming/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 java " title="Online Java Compiler">
            <svg xmlns="http://www.w3.org/2000/svg" fill="none" viewBox="0 0 21 28" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
  <path fill-rule="evenodd" d="M13.266 1s2.718 2.703-2.578 6.857c-3.285 2.578-2.069 4.3-.902 5.951.343.485.68.963.9 1.456-2.48-2.223-4.298-4.18-3.078-6.002.596-.89 1.543-1.626 2.501-2.372 1.922-1.495 3.889-3.026 3.157-5.89zm-1.403 12.431c1.263 1.445-.331 2.744-.331 2.744s3.204-1.644 1.733-3.703a46.915 46.915 0 00-.175-.242c-1.278-1.764-2.008-2.772 3.452-5.92 0 0-8.956 2.223-4.679 7.122zm-4.65 7.678s-.998.577.713.772c2.073.236 3.133.202 5.417-.227 0 0 .601.374 1.44.698-5.122 2.18-11.592-.127-7.57-1.244zm-.625-2.847s-1.121.825.591 1.001c2.215.227 3.964.246 6.99-.333 0 0 .419.422 1.076.652-6.191 1.8-13.088.142-8.657-1.32zm11.235 6.028c1.554-.468.815-1.075.815-1.075 2.708 1.215-5.885 3.655-16.326 1.972-3.83-.617 1.842-2.77 2.88-2.044 0 0-.328-.022-.902.101-.55.118-2.3.678-1.368 1.082 2.597 1.122 11.945.854 14.9-.036zM6.01 16.845c-3.07-.409 1.684-1.531 1.684-1.531s-1.847-.124-4.117.967c-2.686 1.29 6.641 1.879 11.47.616.503-.34 1.196-.636 1.196-.636s-1.975.351-3.943.516c-2.409.2-4.993.24-6.29.067zM17.28 15.41c1.584-.328 3.854 2.108-1.055 4.642-.02.055-.084.115-.096.127l-.002.001c6.555-1.712 4.145-6.036 1.011-4.941a.89.89 0 00-.419.321s.174-.07.561-.15zm3.017 9.127c-.172 2.216-7.408 2.681-12.118 2.382-3.096-.198-3.699-.694-3.699-.694 2.941.483 7.902.57 11.923-.182 3.564-.666 3.893-1.506 3.893-1.506z" clip-rule="evenodd"></path>
  <path d="M10.688 7.857l-.186-.236.186.236zM13.266 1l.212-.213a.3.3 0 00-.502.287l.29-.074zm-3.48 12.808l-.245.174.245-.174zm.9 1.456l-.2.223a.3.3 0 00.474-.345l-.274.122zM7.608 9.262l-.25-.167.25.167zm2.501-2.372l.184.237-.184-.237zm1.423 9.285l-.19-.233a.3.3 0 00.327.5l-.137-.267zm.331-2.744l-.226.198.226-.197zm1.402-.96l.244-.174-.244.175zm-.175-.241l-.243.176.243-.176zm3.452-5.92l.15.26a.3.3 0 00-.222-.55l.072.29zM7.926 21.882l-.034.298.034-.298zm-.712-.773l.15.26a.3.3 0 00-.23-.549l.08.29zm6.129.546l.158-.255a.3.3 0 00-.214-.04l.056.295zm1.44.698l.118.276a.3.3 0 00-.01-.556l-.108.28zM7.18 19.263l-.03.298.03-.298zm-.591-1l.177.24a.3.3 0 00-.271-.526l.094.285zm7.582.667l.213-.211a.3.3 0 00-.27-.084l.057.295zm1.075.652l.084.288a.3.3 0 00.016-.571l-.1.283zm3.393 3.633l.122-.273a.3.3 0 00-.312.505l.19-.232zm-.815 1.075l.086.287-.086-.287zm-15.511.897l-.048.297.048-.297zm2.88-2.044l-.02.3a.3.3 0 00.192-.546l-.172.246zm-.902.101l.063.293-.063-.293zm-1.368 1.082l-.119.275.12-.275zm4.773-9.012l.069.292a.3.3 0 00-.049-.591l-.02.299zm-1.684 1.53l.04-.297-.04.297zm-2.433-.563l.13.27-.13-.27zm11.47.616l.077.29a.301.301 0 00.092-.042l-.168-.248zm1.196-.636l.118.276a.3.3 0 00-.17-.571l.052.295zm-3.943.516l.025.299-.025-.3zm3.923 3.275l-.137-.267a.3.3 0 00-.143.16l.28.107zm1.055-4.642l.061.294-.06-.294zm-1.15 4.769l-.208-.218-.005.005.212.213zm0 0l.208.215.003-.003-.212-.212zm-.003.001l-.209-.215a.3.3 0 00.285.506l-.076-.29zm1.011-4.941l-.099-.284.1.284zm-.419.321l-.252-.162a.3.3 0 00.364.44l-.112-.278zm-8.54 11.36l-.02.298.02-.299zm12.117-2.383l.3.023a.3.3 0 00-.579-.132l.28.11zM4.48 26.225l.049-.296a.3.3 0 00-.349.296h.3zm11.923-.182l-.055-.295.055.295zm-5.53-17.95c2.69-2.11 3.41-3.904 3.391-5.227-.01-.655-.2-1.17-.391-1.521a2.916 2.916 0 00-.353-.514 1.677 1.677 0 00-.036-.039L13.48.79h-.001V.787L13.265 1c-.211.213-.211.213-.212.212l.002.003.016.016c.014.017.037.042.064.078.055.07.131.178.208.32.154.286.311.706.32 1.246.015 1.067-.555 2.702-3.162 4.746l.37.473zm-.84 5.542c-.597-.844-1.13-1.613-1.165-2.467-.033-.82.397-1.812 2.006-3.075l-.37-.472c-1.677 1.316-2.28 2.473-2.235 3.571.043 1.064.703 1.982 1.273 2.79l.49-.347zm.928 1.507c-.233-.525-.59-1.028-.929-1.507l-.49.347c.347.49.666.944.871 1.404l.548-.244zM7.358 9.095c-.34.51-.475 1.04-.432 1.585.043.537.257 1.068.578 1.59.638 1.037 1.745 2.108 2.982 3.217l.4-.446c-1.242-1.114-2.285-2.133-2.871-3.086-.291-.473-.458-.912-.49-1.323-.033-.404.063-.801.332-1.203l-.499-.334zm2.567-2.442c-.948.738-1.938 1.505-2.567 2.442l.499.334c.564-.841 1.468-1.549 2.436-2.302l-.368-.474zm3.05-5.579c.343 1.342.056 2.352-.54 3.214-.609.882-1.54 1.61-2.51 2.365l.368.474c.953-.741 1.965-1.526 2.637-2.498.685-.993 1.016-2.18.627-3.703l-.582.148zm-1.443 15.1l.19.233.002-.002.006-.004a12.436 12.436 0 00.073-.066 2.969 2.969 0 00.639-.861c.137-.287.235-.64.201-1.03-.034-.395-.2-.806-.554-1.21l-.452.395c.279.318.386.612.408.866a1.39 1.39 0 01-.145.72 2.287 2.287 0 01-.556.726l-.002.002.19.232zm1.49-3.528c.32.45.375.854.3 1.211-.079.37-.303.722-.592 1.035a5.084 5.084 0 01-.888.745 5.698 5.698 0 01-.417.255l-.024.013-.005.002h-.001l.137.268.137.267.001-.001.003-.001a5.685 5.685 0 001.498-1.14c.328-.356.629-.802.738-1.319.111-.53.014-1.104-.4-1.684l-.488.35zm-.175-.24l.174.24.488-.349-.176-.243-.486.352zm3.545-6.355c-1.371.79-2.366 1.453-3.064 2.034-.696.577-1.12 1.093-1.318 1.595-.204.519-.15.99.036 1.439.179.43.488.854.801 1.287l.486-.352c-.325-.45-.587-.813-.733-1.166-.14-.335-.168-.642-.031-.99.143-.363.479-.8 1.142-1.352.66-.549 1.622-1.192 2.98-1.975l-.299-.52zm-4.303 7.183c-1.026-1.175-1.214-2.133-1.01-2.905.212-.794.86-1.479 1.69-2.047.823-.564 1.783-.985 2.544-1.266a15.575 15.575 0 011.296-.413h.004l.001-.001-.072-.291-.073-.291h-.002l-.005.002a3.097 3.097 0 00-.098.025 16.165 16.165 0 00-1.258.406c-.784.29-1.796.73-2.677 1.334-.875.6-1.664 1.388-1.93 2.388-.27 1.023.026 2.18 1.138 3.454l.452-.395zm-4.13 8.35c-.417-.048-.627-.116-.72-.168-.045-.024-.041-.034-.03-.015a.124.124 0 01.013.083c-.005.02-.003-.003.057-.054a.704.704 0 01.082-.06l.004-.002-.151-.26-.15-.26v.001h-.001l-.002.001-.004.003a1.94 1.94 0 00-.05.032c-.031.02-.073.05-.117.089-.074.063-.215.197-.255.385a.477.477 0 00.054.342.658.658 0 00.258.24c.2.11.507.189.945.238l.068-.596zm5.328-.225c-2.256.424-3.285.456-5.327.224l-.068.596c2.105.24 3.194.204 5.506-.23l-.11-.59zm1.604.713a9.737 9.737 0 01-1.367-.659c-.008-.005-.014-.009-.018-.01l-.004-.003-.001-.001-.158.255-.159.255h.001l.002.001.006.004.023.014.084.05a10.362 10.362 0 001.375.654l.216-.56zm-7.757-1.253c-.517.144-.905.316-1.152.523a.919.919 0 00-.284.379.665.665 0 00-.001.46c.098.276.358.488.648.649.302.168.696.313 1.15.428 1.81.457 4.777.49 7.406-.63l-.235-.552c-2.494 1.061-5.324 1.03-7.023.6a4.304 4.304 0 01-1.007-.37c-.256-.143-.352-.263-.374-.326a.066.066 0 01-.001-.051.335.335 0 01.106-.127c.149-.125.438-.269.927-.404l-.16-.579zm.076-1.854c-.415-.043-.597-.121-.665-.172-.028-.021-.024-.027-.02-.014.004.012 0 .015.004.001a.509.509 0 01.125-.176 1.176 1.176 0 01.106-.096l.005-.004h.001l-.178-.242-.178-.241h-.001l-.002.001-.004.003-.012.01a1.51 1.51 0 00-.166.15c-.088.088-.218.24-.272.428-.029.1-.04.22 0 .346a.63.63 0 00.231.313c.203.153.523.244.965.29l.061-.597zm6.904-.33c-2.996.573-4.715.554-6.904.33l-.061.596c2.24.23 4.018.248 7.077-.337l-.113-.589zm1.23.664a2.835 2.835 0 01-.96-.579l-.002-.002h.001l-.213.212a46.433 46.433 0 00-.213.211v.001l.003.002.005.005.018.018.065.058a3.438 3.438 0 001.098.64l.199-.566zm-8.85-1.322c-.566.187-.984.386-1.25.603-.265.216-.45.517-.325.86.104.287.394.487.703.629.327.15.756.275 1.255.37 1.993.382 5.313.343 8.452-.569l-.167-.576c-3.052.887-6.276.92-8.172.556-.473-.09-.85-.203-1.117-.326-.284-.131-.374-.243-.39-.288-.003-.009-.005-.016.003-.036a.457.457 0 01.137-.155c.18-.147.516-.319 1.059-.498l-.188-.57zm12.144 5.238l-.19.232h-.001l-.002-.001v-.001c-.001 0-.001 0 0 0l.008.008c.008.008.02.021.03.037.025.035.031.06.03.074 0 .001.002.047-.098.129-.106.087-.309.198-.679.31l.173.574c.408-.123.695-.263.888-.42.198-.164.307-.358.316-.567a.722.722 0 00-.139-.445.907.907 0 00-.127-.145l-.012-.01-.004-.004-.002-.002-.191.231zM2.264 25.484c5.253.846 10.045.657 13.194.1 1.564-.278 2.76-.652 3.4-1.058.163-.104.305-.218.407-.345a.724.724 0 00.177-.47c-.008-.372-.334-.613-.681-.77l-.246.548c.15.068.24.13.287.178.023.023.033.04.037.048l.003.008v.005a.26.26 0 01-.044.076c-.047.059-.13.132-.261.215-.535.34-1.632.699-3.183.973-3.081.546-7.806.735-12.995-.1l-.095.592zm3.1-2.587c-.202-.14-.475-.19-.74-.2a4.4 4.4 0 00-.91.077 7.598 7.598 0 00-1.92.618c-.28.137-.534.293-.725.46-.18.158-.36.376-.369.643-.01.302.193.518.447.66.255.141.626.25 1.117.329l.095-.593c-.466-.075-.756-.17-.92-.26a.411.411 0 01-.13-.102l-.009-.013c0-.01.017-.083.164-.213.136-.12.34-.247.595-.372a7.003 7.003 0 011.759-.566c.295-.053.565-.076.784-.068.229.009.36.051.418.092l.344-.492zm-1.01.64c.271-.058.482-.081.621-.09a2.307 2.307 0 01.197-.005l.02-.299.02-.3h-.024a2.871 2.871 0 00-.25.005 4.88 4.88 0 00-.711.103l.126.586zm-1.313.513c-.097-.042-.115-.069-.11-.061.02.027.03.078.015.119-.006.017-.006.002.044-.039.045-.037.112-.08.2-.126.356-.188.903-.35 1.163-.406l-.126-.586c-.29.062-.894.239-1.317.461-.107.057-.212.121-.3.193a.715.715 0 00-.226.293.464.464 0 00.066.45.85.85 0 00.353.253l.238-.55zm14.695-.047c-1.434.431-4.473.721-7.502.76-1.508.018-3.002-.026-4.276-.143-1.285-.119-2.315-.31-2.917-.57l-.238.55c.696.302 1.809.498 3.1.617 1.3.12 2.816.164 4.339.145 3.033-.038 6.146-.327 7.667-.785l-.173-.574zM7.695 15.314l-.07-.292h-.003c-.002.002-.006.002-.01.003l-.041.01a16.032 16.032 0 00-.652.172c-.401.112-.913.27-1.332.442-.208.086-.406.18-.559.282-.076.051-.152.11-.213.18a.521.521 0 00-.135.297.45.45 0 00.128.35c.076.08.176.137.276.18.202.086.497.152.888.204l.079-.595c-.377-.05-.606-.108-.732-.162-.063-.027-.079-.043-.075-.04.01.012.039.053.034.114-.004.047-.026.064-.011.047a.495.495 0 01.094-.075c.104-.07.26-.147.455-.227.386-.16.87-.309 1.265-.42a20.51 20.51 0 01.632-.166l.038-.01.01-.001h.002v-.001l-.068-.292zm-3.987 1.237a9.68 9.68 0 012.822-.866c.36-.05.65-.068.849-.074a4.554 4.554 0 01.28.002h.016l.02-.299.02-.3h-.001-.027a3.501 3.501 0 00-.324-.002 8.124 8.124 0 00-.917.08c-.77.108-1.83.357-2.998.919l.26.54zm11.265.056c-2.373.62-5.878.79-8.46.64-1.3-.075-2.323-.23-2.849-.428a.984.984 0 01-.252-.128c-.045-.036-.014-.03-.011.023.003.054-.029.062.018.017.045-.044.134-.105.289-.18l-.26-.54c-.181.087-.334.18-.445.287a.581.581 0 00-.201.448c.01.19.126.327.236.414.112.09.257.16.414.22.619.235 1.725.39 3.026.466 2.617.151 6.19-.017 8.647-.659l-.152-.58zm1.271-.346l-.117-.276h-.001l-.002.001a7.207 7.207 0 00-1.243.662l.336.497c.234-.158.52-.31.75-.424a9.775 9.775 0 01.367-.172l.021-.009.006-.002-.117-.277zm-3.918.815a45.615 45.615 0 002.728-.322 52.192 52.192 0 001.152-.182l.067-.011.018-.003.004-.001h.001l-.052-.296-.052-.295h-.002-.004c-.003.002-.009.002-.016.004a13.238 13.238 0 01-.314.053c-.214.035-.52.084-.889.137a45.05 45.05 0 01-2.69.318l.05.598zm-6.354.066c1.33.177 3.941.135 6.354-.066l-.05-.598c-2.404.2-4.962.237-6.225.07l-.08.594zm10.39 3.177c2.47-1.276 3.309-2.614 3.12-3.712-.184-1.077-1.331-1.684-2.264-1.49l.122.587c.652-.135 1.432.312 1.551 1.005.115.671-.366 1.817-2.804 3.076l.275.534zm-.027.077a.91.91 0 00.066-.07.584.584 0 00.104-.168l-.561-.212a.147.147 0 01.007-.016l.002-.003-.008.01a.326.326 0 01-.024.024l.414.435zm.005-.005l-.424-.425.424.425zm-.004.004l.002-.001-.419-.43-.002.001.419.43zm.9-4.873c1.441-.503 2.593.258 2.732 1.18.07.463-.093 1.038-.687 1.615-.597.58-1.622 1.153-3.23 1.573l.151.58c1.669-.435 2.8-1.046 3.497-1.723.701-.681.968-1.44.863-2.135-.21-1.394-1.83-2.248-3.524-1.656l.198.566zm-.518.038l.253.162-.001.001v.001l-.001.001v-.002l.011-.014a.594.594 0 01.257-.187l-.2-.566a1.169 1.169 0 00-.566.434l-.003.005-.001.002h-.001v.001l.252.162zm.5-.444a5.432 5.432 0 00-.566.149 1.725 1.725 0 00-.04.015h-.003l-.002.001.111.28.112.278h-.001l.003-.001.018-.007a4.842 4.842 0 01.49-.127l-.122-.588zm-9.06 12.102c2.37.151 5.38.11 7.825-.25 1.22-.18 2.32-.441 3.133-.809.793-.358 1.422-.868 1.479-1.599l-.599-.046c-.029.377-.368.756-1.127 1.099-.739.333-1.775.585-2.974.761-2.393.353-5.358.395-7.698.246l-.038.598zm-3.979-.993a.622.622 0 00.105.228l.004.003a.41.41 0 00.004.004l.006.005a.385.385 0 00.055.037c.033.02.079.046.14.075.123.058.312.132.594.21.564.156 1.51.332 3.071.431l.039-.598c-1.535-.098-2.438-.27-2.95-.411a3.156 3.156 0 01-.497-.174.819.819 0 01-.081-.043l-.008-.005.003.002.003.003.004.002.003.004a.622.622 0 01.105.228h-.6zm12.168-.477c-3.985.746-8.91.659-11.82.181l-.097.592c2.974.488 7.97.576 12.027-.183l-.11-.59zm3.948-1.21l-.279-.111v-.001l.002-.002v-.003l.003-.006a.173.173 0 01.004-.007l-.001.002a.426.426 0 01-.05.06c-.063.064-.19.173-.434.308-.49.272-1.428.64-3.193.97l.11.59c1.8-.336 2.808-.72 3.374-1.035.284-.158.462-.301.573-.415a1.027 1.027 0 00.153-.203.499.499 0 00.015-.03l.001-.005.001-.001v-.001l-.279-.11z"></path>
</svg>
          </a>
                    <a target="_blank" href="https://www.programiz.com/kotlin-programming/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 kotlin " title="Online Kotlin Compiler (Editor)">
            <svg xmlns="http://www.w3.org/2000/svg" width="22" height="22" viewBox="0 0 24 24" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg"><path fill="currentColor" d="M24 24H0V0h24L12 12Z"></path></svg>
          </a>
          <a target="_blank" href="https://www.programiz.com/c-programming/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 c " title="Online C Compiler">
            <svg xmlns="http://www.w3.org/2000/svg" fill="none" viewBox="0 0 24 28" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
  <path fill-opacity=".4" d="M23.903 6.916l.067-.044c-.134-.243-.334-.464-.534-.574L12.696.155C12.518.045 12.274 0 12.007 0c-.267 0-.511.066-.69.155L.646 6.32C.267 6.54 0 7.093 0 7.513v12.308c0 .243.044.508.2.752l-.044.022c.11.176.266.331.422.42l10.718 6.165c.178.11.422.154.689.154.267 0 .511-.066.69-.154l10.672-6.165c.378-.221.645-.774.645-1.194V7.491c.022-.177 0-.376-.089-.575zM12.007 19.07a5.455 5.455 0 004.736-2.74l2.869 1.68a8.794 8.794 0 01-7.605 4.374c-4.847 0-8.783-3.91-8.783-8.728 0-4.817 3.936-8.728 8.783-8.728a8.796 8.796 0 017.627 4.42l-2.89 1.656a5.43 5.43 0 00-4.737-2.762c-3.002 0-5.448 2.431-5.448 5.414 0 2.983 2.446 5.414 5.448 5.414z"></path>
</svg>
          </a>
          <a target="_blank" href="https://www.programiz.com/cpp-programming/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 cpp active" title="Online C++ Compiler">
            <svg xmlns="http://www.w3.org/2000/svg" fill="none" viewBox="0 0 24 27" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
  <path fill="#25265E" fill-opacity=".4" d="M23.903 6.639l.067-.043c-.134-.233-.334-.445-.534-.551L12.696.148C12.518.042 12.274 0 12.007 0a1.64 1.64 0 00-.69.148L.646 6.066C.267 6.278 0 6.808 0 7.21v11.814c0 .233.044.488.2.72l-.044.022c.11.17.266.318.422.403l10.718 5.918c.178.106.422.148.689.148.267 0 .511-.064.69-.148l10.672-5.918c.378-.212.645-.742.645-1.145V7.19c.022-.17 0-.36-.089-.551zm-7.893 6.893v-.849h1.111v-1.06h1.112v1.06h1.112v.849h-1.112v1.06h-1.112v-1.06H16.01zm.733-2.97c-.934-1.59-2.712-2.65-4.736-2.65-3.002 0-5.448 2.332-5.448 5.195 0 2.864 2.446 5.197 5.448 5.197 2.024 0 3.802-1.06 4.736-2.63l2.869 1.612c-1.512 2.502-4.358 4.2-7.605 4.2-4.847 0-8.783-3.755-8.783-8.379 0-4.623 3.936-8.377 8.783-8.377 3.269 0 6.115 1.718 7.627 4.242l-2.89 1.59zm6.604 2.97h-1.112v1.06h-.889v-1.06h-1.334v-.849h1.334v-1.06h.89v1.06h1.111v.849z"></path>
</svg>
          </a>
          <a target="_blank" href="https://www.programiz.com/csharp-programming/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 csharp " title="Online C# Compiler">
            <svg xmlns="http://www.w3.org/2000/svg" fill="none" viewBox="0 0 24 28" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
  <path fill-opacity=".4" d="M23.903 6.916l.067-.044c-.134-.243-.334-.464-.534-.574L12.696.155C12.518.045 12.274 0 12.007 0c-.267 0-.511.066-.69.155L.646 6.32C.267 6.54 0 7.093 0 7.513v12.308c0 .243.044.508.2.752l-.044.022c.11.176.266.331.422.42l10.718 6.165c.178.11.422.154.689.154.267 0 .511-.066.69-.154l10.672-6.165c.378-.221.645-.774.645-1.194V7.491c.022-.177 0-.376-.089-.575zM12.007 22.384c-4.847 0-8.783-3.91-8.783-8.728 0-4.817 3.936-8.728 8.783-8.728a8.796 8.796 0 017.627 4.42l-2.89 1.656a5.43 5.43 0 00-4.737-2.762c-3.002 0-5.448 2.431-5.448 5.414 0 2.983 2.446 5.414 5.448 5.414a5.455 5.455 0 004.736-2.74l2.869 1.68a8.794 8.794 0 01-7.605 4.374zm11.34-9.17h-.711l-.2.884h.911v1.105h-1.112l-.266 1.326h-1.09l.267-1.326H20.3l-.267 1.326h-1.067l.267-1.326h-.556v-1.105h.778l.2-.884h-.978V12.11h1.178l.267-1.325h1.09l-.267 1.325h.845l.267-1.325h1.067l-.267 1.325h.49v1.105zm-2.824.884h.845l.2-.884h-.845l-.2.884z"></path>
</svg>
          </a>
          <a target="_blank" href="https://www.programiz.com/javascript/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 javascript " title="Online JavaScript Compiler (Editor)">
            <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 630 630" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<rect width="630" height="630" fill="#25265E" fill-opacity="0.0"></rect>
<path d="m423.2 492.19c12.69 20.72 29.2 35.95 58.4 35.95 24.53 0 40.2-12.26 40.2-29.2 0-20.3-16.1-27.49-43.1-39.3l-14.8-6.35c-42.72-18.2-71.1-41-71.1-89.2 0-44.4 33.83-78.2 86.7-78.2 37.64 0 64.7 13.1 84.2 47.4l-46.1 29.6c-10.15-18.2-21.1-25.37-38.1-25.37-17.34 0-28.33 11-28.33 25.37 0 17.76 11 24.95 36.4 35.95l14.8 6.34c50.3 21.57 78.7 43.56 78.7 93 0 53.3-41.87 82.5-98.1 82.5-54.98 0-90.5-26.2-107.88-60.54zm-209.13 5.13c9.3 16.5 17.76 30.45 38.1 30.45 19.45 0 31.72-7.61 31.72-37.2v-201.3h59.2v202.1c0 61.3-35.94 89.2-88.4 89.2-47.4 0-74.85-24.53-88.81-54.075z"></path>
</svg>
          </a>
          <a target="_blank" href="https://www.programiz.com/typescript/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 typescript " title="Online Typescript Compiler (Editor)">
            <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<path d="M19.0562 11.0988C19.6709 11.2305 20.2295 11.5292 20.6606 11.9566C20.8976 12.1882 21.104 12.4451 21.2755 12.722C21.2834 12.7522 20.1683 13.4472 19.4921 13.835C19.4676 13.8504 19.3701 13.7519 19.2597 13.6006C19.1364 13.4034 18.9611 13.2385 18.7503 13.1214C18.5394 13.0042 18.3 12.9387 18.0544 12.9309C17.2771 12.8814 16.7762 13.2591 16.7799 13.8905C16.7731 14.0457 16.8113 14.1997 16.8903 14.3365C17.0613 14.6646 17.3789 14.8615 18.3763 15.2626C20.2124 15.9959 21.0005 16.4794 21.4869 17.1664C21.7618 17.6005 21.9311 18.0852 21.983 18.5864C22.0348 19.0876 21.968 19.5932 21.7872 20.0679C21.5388 20.5887 21.1445 21.0382 20.6455 21.3697C20.1464 21.7012 19.5607 21.9026 18.9494 21.953C18.2995 22.0214 17.6431 22.0151 16.9949 21.9342C16.0022 21.7829 15.0877 21.3408 14.3852 20.6726C14.1199 20.3952 13.8952 20.0865 13.7169 19.7545C13.7922 19.7034 13.871 19.6569 13.9529 19.6153C14.0669 19.555 14.4985 19.3246 14.9055 19.1057L15.6446 18.7039L15.799 18.9128C16.0596 19.2576 16.3906 19.5516 16.7734 19.778C17.1602 19.9749 17.5984 20.0682 18.0391 20.0475C18.4798 20.0268 18.9056 19.8929 19.2691 19.6608C19.4566 19.4912 19.5738 19.2659 19.6002 19.0242C19.6266 18.7825 19.5604 18.5399 19.4134 18.3389C19.2142 18.0744 18.8072 17.8521 17.6503 17.3867C16.7431 17.1029 15.9168 16.6325 15.2332 16.0106C14.9079 15.6662 14.6675 15.2601 14.5288 14.8207C14.4262 14.3199 14.4111 13.8071 14.4841 13.3019C14.6197 12.7205 14.9448 12.1918 15.4152 11.7877C15.8857 11.3835 16.4788 11.1234 17.114 11.0426C17.7608 10.9709 18.4155 10.9898 19.0562 11.0988ZM13.0348 12.0919L13.0428 13.0655H9.70119V21.8699H7.34477V13.0676H4.00319V12.1113C3.99432 11.7838 4.00396 11.4562 4.03206 11.1296C4.04433 11.1142 6.07598 11.1069 8.53922 11.1109L13.0218 11.1223L13.0348 12.0919Z" fill="black"></path>
</svg>
          </a>
          <a target="_blank" href="https://www.programiz.com/golang/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 golang " title="Online Golang Compiler">
            <svg xmlns="http://www.w3.org/2000/svg" width="40" height="40" viewBox="0 0 40 40" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<g clip-path="url(#clip0_2886_601)">
<path d="M3.00684 16.739C2.9516 16.739 2.89634 16.6837 2.9516 16.6285L3.33841 16.0759C3.39365 16.0206 3.44891 15.9654 3.55944 15.9654H10.522C10.5772 15.9654 10.6325 16.0206 10.5772 16.0759L10.2457 16.5731C10.1905 16.6285 10.1352 16.6837 10.0247 16.6837L3.00684 16.739ZM0.0781503 18.5072C0.0228897 18.5072 -0.0323709 18.4519 0.0228897 18.3967L0.409701 17.8441C0.464961 17.7888 0.520209 17.7336 0.63073 17.7336H9.52736C9.58262 17.7336 9.63788 17.7888 9.63788 17.8441L9.47211 18.3967C9.47211 18.4519 9.36159 18.5072 9.30633 18.5072H0.0781503ZM4.77513 20.3307C4.71987 20.3307 4.66461 20.2755 4.71987 20.2202L4.99616 19.7229C5.05142 19.6676 5.10668 19.6124 5.21719 19.6124H9.0853C9.14055 19.6124 9.19581 19.6676 9.19581 19.7229L9.14055 20.165C9.14055 20.2202 9.0853 20.2755 9.03004 20.2755L4.77513 20.3307ZM24.9997 16.3521L21.7394 17.181C21.4632 17.2362 21.408 17.2916 21.187 16.96C20.9106 16.6285 20.6896 16.4074 20.2475 16.2416C19.0318 15.6338 17.8161 15.7995 16.711 16.5179C15.3848 17.3468 14.7217 18.6178 14.7217 20.2202C14.7217 21.7674 15.8268 23.0384 17.3741 23.2595C18.7003 23.4252 19.8054 22.9831 20.6896 21.9886C20.8554 21.7674 21.0211 21.5464 21.2422 21.2702H17.4846C17.0977 21.2702 16.9872 20.9938 17.0977 20.6624C17.3741 20.0545 17.8161 19.0598 18.0925 18.5624C18.1477 18.4519 18.3134 18.2309 18.5898 18.2309H25.6628C25.6076 18.7835 25.6076 19.2809 25.5523 19.8334C25.3313 21.215 24.834 22.5412 23.9499 23.6462C22.5684 25.4698 20.7449 26.6303 18.4239 26.9617C16.4899 27.2381 14.7217 26.8512 13.1744 25.6908C11.7377 24.5857 10.9088 23.149 10.6879 21.3807C10.4115 19.2809 11.0746 17.3468 12.3455 15.689C13.727 13.8655 15.5505 12.7051 17.8161 12.3183C19.6396 11.9867 21.408 12.2078 22.9552 13.2576C24.0051 13.9207 24.7235 14.8602 25.2208 16.0206C25.2761 16.2416 25.2208 16.2969 24.9997 16.3521Z" fill="#6D6D93"></path>
<path d="M31.4177 27.1297C29.6494 27.0745 28.0469 26.5771 26.6653 25.4168C25.505 24.4221 24.7867 23.1511 24.5655 21.6592C24.2341 19.4489 24.8419 17.5148 26.1681 15.8018C27.6048 13.9229 29.3179 12.9836 31.6387 12.5415C33.628 12.2099 35.5068 12.3758 37.1646 13.5361C38.7118 14.586 39.6511 16.0227 39.9275 17.9015C40.259 20.554 39.4854 22.6537 37.7171 24.4773C36.4461 25.8035 34.8437 26.5771 33.0754 26.964C32.4675 27.0745 31.9149 27.0745 31.4177 27.1297ZM36.0594 19.283C36.0594 19.0068 36.0594 18.841 36.0041 18.6199C35.6725 16.6858 33.9043 15.5808 32.0255 16.0227C30.202 16.4096 29.0415 17.5701 28.5994 19.3935C28.2679 20.8856 28.9863 22.4328 30.3677 23.0959C31.4177 23.538 32.5228 23.4827 33.5175 22.9854C35.1199 22.2118 35.9489 20.9408 36.0594 19.283Z" fill="#6D6D93"></path>
</g>
<defs>
<clippath id="clip0_2886_601">
<rect width="40" height="40" fill="white"></rect>
</clippath>
</defs>
</svg>
          </a>
          <a target="_blank" href="https://www.programiz.com/rust/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 rust " title="Online Rust Compiler">
            <svg xmlns="http://www.w3.org/2000/svg" width="40" height="40" viewBox="0 0 40 40" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<g clip-path="url(#clip0_2886_605)">
<path fill-rule="evenodd" clip-rule="evenodd" d="M13.8839 2.84442L14.4084 2.68631L15.1505 0.663847C15.2559 0.46731 15.603 0.273265 15.9643 0.487312C16.1369 0.589616 16.7641 1.30652 17.1641 1.76388C17.2685 1.88336 17.3577 1.98513 17.419 2.05361H18.0516L19.129 0.167618C19.2712 -0.0427356 19.6845 -0.0686346 19.924 0.167618C20.0716 0.313238 20.3929 0.883897 20.6664 1.36934C20.8365 1.6714 20.9878 1.94045 21.0674 2.05361H21.7002L23.0602 0.523151C23.2474 0.335748 23.7311 0.346159 23.9339 0.741787C24.0241 0.917836 24.1409 1.26358 24.261 1.61915C24.4107 2.06265 24.5658 2.52141 24.6807 2.68514C24.8677 2.79683 25.0045 2.83134 25.2354 2.82004L26.8525 1.60471C27.0398 1.4173 27.596 1.5539 27.7135 1.90697C27.7613 2.05037 27.7923 2.37341 27.826 2.72628C27.8754 3.24222 27.931 3.82191 28.0541 3.99709C28.1741 4.11715 28.4858 4.32123 28.7737 4.17717C29.0617 4.03311 29.9347 3.61122 30.3351 3.41829C30.5515 3.36255 30.9609 3.33726 31.0997 3.70769V6.0165L31.4596 6.33811L33.3422 5.88792C33.4493 5.86421 33.6878 5.83122 33.7855 5.88792C33.8831 5.94446 34.079 6.15146 34.1646 6.24798C34.1882 6.28658 34.2134 6.46532 34.1261 6.87189C34.0386 7.27831 33.7984 8.13447 33.6892 8.51171L34.0233 8.9619L36.2913 8.88484C36.452 8.95764 36.6884 9.30023 36.6319 9.54721C36.5883 9.7375 36.2534 10.4298 35.9726 11.0103C35.8889 11.1831 35.8101 11.3462 35.7453 11.4829L35.9958 12.036L38.0905 12.3383C38.249 12.4048 38.5492 12.6355 38.4824 13.0264L37.2295 14.7949C37.2038 14.9386 37.1935 15.2555 37.3579 15.3739C37.5225 15.4921 38.7073 15.899 39.2792 16.0876C39.4055 16.1627 39.6506 16.3732 39.6198 16.615C39.5888 16.8568 39.5469 16.9473 39.5297 16.9623L37.9813 18.3772V18.9046C38.6516 19.3032 39.9924 20.1328 39.9924 20.2615C39.9924 20.291 39.9939 20.3274 39.9956 20.3675C40.003 20.5459 40.0137 20.8013 39.9089 20.8853C39.8061 20.9677 38.581 21.687 37.9813 22.0365V22.6282C38.5252 23.1083 39.612 24.0892 39.6069 24.1716C39.6053 24.1959 39.606 24.2307 39.6067 24.2719C39.6091 24.4049 39.6128 24.6049 39.549 24.7376C39.4822 24.8765 38.0561 25.3871 37.3516 25.6251L37.2231 26.1975C37.6301 26.7419 38.4478 27.8425 38.4631 27.8888C38.4824 27.9467 38.5081 28.4548 38.174 28.6863L36.0537 28.9821L35.7838 29.4645L36.6641 31.4324C36.6983 31.5782 36.6757 31.9211 36.3106 32.1269L34.0167 32.0755L33.7149 32.4356L34.2032 34.6545C34.2009 34.7894 34.0656 35.0828 33.5413 35.1753L31.5174 34.6995L31.1126 34.9952L31.1768 37.2655C31.1211 37.424 30.8915 37.7195 30.4186 37.6321L28.5232 36.7381L28.0348 36.9954L27.6749 39.2076C27.5893 39.3319 27.3178 39.5497 26.9167 39.4263L25.1756 38.1786C25.0406 38.1916 24.7567 38.2327 24.7 38.2945C24.6435 38.3562 24.094 39.7864 23.8263 40.4939C23.6999 40.5817 23.3816 40.7138 23.1194 40.5389L21.6223 38.9568H21.1148L19.8619 40.9119C19.7612 40.9784 19.4982 41.0715 19.2514 40.9119L17.9663 38.9568H17.433L15.8587 40.6032C15.7367 40.646 15.4475 40.6856 15.2677 40.5003L14.3938 38.3651C14.3402 38.2966 14.1626 38.1659 13.8798 38.1916L12.0614 39.4906C11.8793 39.4991 11.4909 39.4468 11.3932 39.169C11.2956 38.8912 11.1427 37.6385 11.0784 37.0468L10.5515 36.7317L8.66886 37.6192C8.50183 37.6813 8.12144 37.7028 7.93648 37.2912V34.9888C7.92145 34.9373 7.82077 34.8075 7.53802 34.6995L5.48195 35.1817C5.30641 35.1883 4.94094 35.1007 4.8844 34.6995C4.82785 34.2981 5.17779 33.1217 5.35986 32.5836L5.07076 32.0948L2.7769 32.1527C2.62698 32.0605 2.33741 31.8041 2.37854 31.516C2.41966 31.2279 3.02536 30.0755 3.32307 29.5352L3.02108 29.0079L0.842888 28.6992C0.716532 28.6456 0.481784 28.4278 0.553747 27.9853L1.84522 26.1975C1.83237 26.0431 1.77584 25.7087 1.65246 25.6058L-0.300845 24.9434C-0.412213 24.8533 -0.623394 24.5948 -0.577139 24.2809C-0.53087 23.967 0.547293 23.0612 1.08058 22.6475V22.0365C0.476606 21.7278 -0.768624 21.0409 -0.917697 20.7631C-1.06676 20.4853 -0.979805 20.2743 -0.917697 20.2036L1.11917 18.943V18.3965C0.652268 18.0127 -0.335528 17.1526 -0.551416 16.7822V16.3513C-0.544992 16.3021 -0.460183 16.1712 -0.172317 16.0426C0.115533 15.914 1.23269 15.5517 1.75527 15.3866L1.87094 14.8272L0.579441 13.0457V12.602C0.624419 12.4969 0.818471 12.2816 1.23483 12.2611C1.6512 12.2406 2.62056 12.1067 3.0532 12.0424L3.31021 11.5086L2.38496 9.57289C2.34212 9.36072 2.36183 8.92466 2.78333 8.8783C3.20484 8.8321 4.44964 8.859 5.01935 8.8783L5.38552 8.53754L4.85229 6.36379C4.84801 6.1773 4.97437 5.80812 5.51414 5.82347L7.57021 6.31881L7.97505 5.9972L7.87863 3.72056C7.92357 3.56192 8.12918 3.25751 8.59187 3.30896L10.5002 4.24791L11.0721 3.96495L11.374 1.89411C11.4553 1.70332 11.7184 1.36547 12.1194 1.5404C12.5203 1.71532 13.4628 2.48263 13.8839 2.84442ZM20.7002 4.89056C20.7002 5.53728 20.1767 6.06134 19.5305 6.06134C18.8845 6.06134 18.3608 5.53728 18.3608 4.89056C18.3608 4.244 18.8845 3.71982 19.5305 3.71982C20.1767 3.71982 20.7002 4.244 20.7002 4.89056ZM24.5236 10.4094H8.48148C11.3531 7.29655 13.1362 6.23065 16.6696 5.7262C16.6696 5.7262 18.6748 7.73337 19.0091 7.90056C19.3433 8.0679 19.7703 8.10498 20.1788 7.90056C20.513 7.73337 22.3512 5.7262 22.3512 5.7262C27.0871 6.75866 29.3134 8.52402 32.7117 13.2527C32.3775 13.7546 31.6422 14.9588 31.3748 15.7616C31.1076 16.5644 31.4863 17.0997 31.709 17.2669L34.3827 18.605L34.5499 21.6156H32.5447C33.3802 25.2953 29.7038 25.4625 29.2026 22.9536C28.8835 21.3574 28.0884 20.5562 27.1972 19.7758C31.8762 17.2669 30.3723 11.2457 24.5236 10.4094ZM7.14457 17.2669C7.81303 16.8655 7.7573 16.3191 7.64599 16.0961L7.27076 15.1849C7.25269 15.1409 7.28504 15.0925 7.33257 15.0925H9.81838V24.7934H5.12585C4.3237 22.6525 4.45268 19.7955 4.61979 18.6246C5.17688 18.3459 6.47627 17.6683 7.14457 17.2669ZM16.3354 15.0925V17.7686H21.6827C23.6881 17.7686 24.0223 15.2599 21.6827 15.0925H16.3354ZM16.3354 24.7934V22.1173H20.513C21.5157 22.1173 22.6854 23.2881 23.0196 26.2987C23.287 28.7073 24.5793 29.4209 25.192 29.4766H31.709L30.3723 30.8146C30.0938 30.7588 29.236 30.614 28.0327 30.4801C26.8296 30.3463 26.4175 30.982 26.3617 31.3165L26.0275 34.1597C20.6881 35.8537 17.848 35.8704 12.9933 33.9926C12.9376 33.4351 12.7929 32.1193 12.6591 31.3165C12.5254 30.5135 11.935 30.3129 11.6565 30.3129L8.64867 30.8146L7.57583 29.5876C7.53802 29.5443 7.5687 29.4766 7.62625 29.4766H19.6775C19.7698 29.4766 19.8447 29.4017 19.8447 29.3093V24.9607C19.8447 24.8683 19.7698 24.7934 19.6775 24.7934H16.3354ZM34.3827 16.9324C35.0288 16.9324 35.5524 16.4082 35.5524 15.7616C35.5524 15.115 35.0288 14.5908 34.3827 14.5908C33.7367 14.5908 33.213 15.115 33.213 15.7616C33.213 16.4082 33.7367 16.9324 34.3827 16.9324ZM4.68672 16.8641C5.33268 16.8641 5.85641 16.3399 5.85641 15.6934C5.85641 15.0468 5.33268 14.5226 4.68672 14.5226C4.04068 14.5226 3.51697 15.0468 3.51697 15.6934C3.51697 16.3399 4.04068 16.8641 4.68672 16.8641ZM11.5203 33.1356C11.5203 33.7822 10.9966 34.3064 10.3506 34.3064C9.70449 34.3064 9.18091 33.7822 9.18091 33.1356C9.18091 32.4891 9.70449 31.9649 10.3506 31.9649C10.9966 31.9649 11.5203 32.4891 11.5203 33.1356ZM28.7012 34.3271C29.3471 34.3271 29.8709 33.8029 29.8709 33.1563C29.8709 32.5096 29.3471 31.9854 28.7012 31.9854C28.0552 31.9854 27.5314 32.5096 27.5314 33.1563C27.5314 33.8029 28.0552 34.3271 28.7012 34.3271Z" fill="#25265E" fill-opacity="0.67"></path>
</g>
<defs>
<clippath id="clip0_2886_605">
<rect width="40" height="40" fill="white"></rect>
</clippath>
</defs>
</svg>
          </a>
          <a target="_blank" href="https://www.programiz.com/scala/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 scala " title="Online Scala Compiler (Editor)">
            <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
    <path d="M5 20.2615V17.511L7.09413 17.4269C9.2719 17.3429 10.8873 17.1628 13.2564 16.7543C15.9488 16.2859 18.6051 15.4452 18.8805 14.9647C18.9523 14.8446 19 15.7695 19 17.5591V20.3456L18.6888 20.5858C18.3538 20.8501 17.0615 21.2945 15.5898 21.6668C13.2923 22.2433 7.68035 23 5.76589 23H5.00018L5 20.2615ZM5 13.2953V10.5445L7.09413 10.4724C9.4155 10.3764 11.2223 10.1723 13.6154 9.72781C16.2958 9.22334 18.7367 8.40665 18.9164 7.96218C18.9523 7.87822 18.9882 9.04318 18.9882 10.5566C19 12.9587 18.9761 13.343 18.7966 13.5351C18.3779 14.0037 15.147 14.8444 11.8205 15.3609C9.79835 15.6733 6.44796 16.0337 5.51443 16.0337H5V13.2953ZM5 6.37706V3.68663L5.37101 3.61456C5.57437 3.57852 6.07695 3.54249 6.48386 3.54249C8.49399 3.54249 13.2685 2.88182 15.6137 2.28132C17.253 1.84892 18.3897 1.41652 18.7846 1.05619C18.988 0.876019 19 0.98412 19 3.62645C19 6.20879 18.9882 6.40085 18.7728 6.59326C18.4497 6.89342 16.236 7.57806 14.5127 7.92632C11.7248 8.47889 7.09413 9.0675 5.5146 9.0675H5V6.37706Z" fill="black"></path>
</svg>
          </a>
          <a target="_blank" href="https://www.programiz.com/dart/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 dart " title="Online Dart Compiler (Editor)">
            <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
    <path d="M16.5285 5.23613C16.4137 5.23203 16.2988 5.22793 16.1799 5.22793H5.34766L11.2211 2.2748C11.5246 2.09434 11.9922 2 12.468 2C13.0217 2 13.6738 2.37734 13.9855 2.68906L16.5285 5.23203V5.23613ZM5.40098 5.95801H16.1799C16.8361 5.95801 17.2217 6.01543 17.6318 6.33945L22 10.7035V19.2676L18.7475 19.2963L5.40098 5.95801ZM4.95801 17.2988V6.54453L18.2389 19.8254L18.2676 23H9.56406L5.54043 18.9723C5.07695 18.5088 4.95801 18.3447 4.95801 17.2988ZM4.22793 6.31895V17.2988C4.22793 17.4342 4.23203 17.5572 4.23613 17.6721L1.69316 15.1291C1.2666 14.6861 1 14.0709 1 13.468C1 13.1891 1.15996 12.7502 1.2748 12.5L4.22793 6.31895Z" fill="black"></path>
</svg>
          </a>
          <a target="_blank" href="https://www.programiz.com/ruby/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 ruby " title="Online Ruby Compiler (Editor)">
            <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
    <path d="M19.4333 19.4667V20H20V19.4667H19.4333ZM19.4333 4.53333H20V4H19.4333V4.53333ZM12.6333 4.53333V4H12.3987L12.2321 4.15573L12.6333 4.53333ZM3.56667 13.0667L3.16547 12.6891L3 12.8459V13.0667H3.56667ZM3.56667 19.4667H3V20H3.56667V19.4667ZM8.1 15.2L7.84613 15.6768L7.86767 15.6875L7.89033 15.6949L8.1 15.2ZM8.1 8.8V8.26667C7.94971 8.26667 7.80558 8.32286 7.69931 8.42288C7.59304 8.5229 7.53333 8.65855 7.53333 8.8H8.1ZM14.9 8.8L15.4259 8.6016L15.4168 8.58133L15.4066 8.56107L14.9 8.8ZM20 19.4667V4.53333H18.8667V19.4667H20ZM19.4333 4H12.6333V5.06667H19.4333V4ZM12.2321 4.15573L3.16547 12.6891L3.96787 13.4443L13.0345 4.91093L12.2321 4.15573ZM3 13.0667V19.4667H4.13333V13.0667H3ZM3.56667 20H19.4333V18.9333H3.56667V20ZM19.0321 4.15573L3.16547 19.0891L3.96787 19.8443L19.8345 4.91093L19.0321 4.15573ZM8.66667 15.2V8.8H7.53333V15.2H8.66667ZM8.1 9.33333H14.9V8.26667H8.1V9.33333ZM7.89033 15.6949L19.2225 19.9616L19.6441 18.9717L8.3108 14.7051L7.89033 15.6949ZM14.3741 8.9984L18.9075 19.6651L19.9592 19.2683L15.4259 8.6016L14.3741 8.9984ZM12.1267 4.77227L14.3934 9.03893L15.4066 8.56107L13.1399 4.2944L12.1267 4.77227ZM3.3128 13.5435L7.84613 15.6768L8.35387 14.7232L3.82053 12.5899L3.3128 13.5435Z" fill="black"></path>
</svg>
          </a>
                    <a target="_blank" href="https://www.programiz.com/php/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 php " title="Online PHP Compiler ">
            <svg xmlns="http://www.w3.org/2000/svg" width="40" height="40" viewBox="0 0 40 40" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<path d="M3.83821 13.8008H9.6625C11.372 13.8151 12.6107 14.308 13.3788 15.2786C14.1468 16.2492 14.4002 17.5748 14.1394 19.2556C14.0381 20.0236 13.8134 20.7769 13.4657 21.5158C13.1323 22.2547 12.669 22.921 12.0748 23.5152C11.3503 24.2684 10.5753 24.7465 9.74943 24.9495C8.9236 25.1525 8.06865 25.2538 7.185 25.2538H4.57711L3.75128 29.3829H0.730469L3.83821 13.8008ZM6.3809 16.2783L5.07696 22.798C5.16389 22.8124 5.25082 22.8197 5.33775 22.8197C5.43903 22.8197 5.54072 22.8197 5.642 22.8197C7.03288 22.8341 8.19208 22.6967 9.11919 22.4068C10.0463 22.1026 10.6696 21.0451 10.9882 19.2339C11.249 17.7126 10.9882 16.8359 10.2058 16.6043C9.4378 16.3726 8.4746 16.2639 7.3154 16.2783C7.14154 16.2926 6.97506 16.3 6.81555 16.3C6.67081 16.3 6.51868 16.3 6.35917 16.3L6.3809 16.2783Z" fill="#25265E" fill-opacity="0.67"></path>
<path d="M17.5748 9.64844H20.5739L19.7263 13.7993H22.4211C23.8989 13.8284 24.9999 14.1327 25.7244 14.7121C26.4634 15.2915 26.6807 16.3929 26.3764 18.0154L24.9203 25.2523H21.8778L23.2687 18.3414C23.4134 17.6169 23.37 17.1027 23.1383 16.7984C22.9066 16.4942 22.4068 16.342 21.6387 16.342L19.2265 16.3203L17.4444 25.2523H14.4453L17.5748 9.64844Z" fill="#25265E" fill-opacity="0.67"></path>
<path d="M29.5999 13.8008H35.4242C37.1337 13.8151 38.3725 14.308 39.1405 15.2786C39.9085 16.2492 40.1619 17.5748 39.9011 19.2556C39.7998 20.0236 39.5751 20.7769 39.2274 21.5158C38.894 22.2547 38.4307 22.921 37.8365 23.5152C37.112 24.2684 36.337 24.7465 35.5111 24.9495C34.6853 25.1525 33.8304 25.2538 32.9467 25.2538H30.3388L29.513 29.3829H26.4922L29.5999 13.8008ZM32.1426 16.2783L30.8387 22.798C30.9256 22.8124 31.0125 22.8197 31.0995 22.8197C31.2007 22.8197 31.3024 22.8197 31.4037 22.8197C32.7946 22.8341 33.9538 22.6967 34.8809 22.4068C35.808 22.1026 36.4313 21.0451 36.7499 19.2339C37.0107 17.7126 36.7499 16.8359 35.9675 16.6043C35.1995 16.3726 34.2363 16.2639 33.0771 16.2783C32.9033 16.2926 32.7368 16.3 32.5773 16.3C32.4325 16.3 32.2804 16.3 32.1209 16.3L32.1426 16.2783Z" fill="#25265E" fill-opacity="0.67"></path>
</svg>
          </a>
          <a target="_blank" href="https://www.programiz.com/swift/online-compiler/" class="change-lang-btn tw:flex tw:text-center tw:bg-transparent tw:rounded-xs tw:border tw:border-border tw:p-[7px] tw:mb-3 swift " title="Online Swift Compiler ">
            <svg xmlns="http://www.w3.org/2000/svg" width="40" height="40" viewBox="0 0 40 40" fill="none" class="change-lang-btn-icon tw:h-[22px] tw:w-[22px] svg replaced-svg">
<path fill-rule="evenodd" clip-rule="evenodd" d="M29.9196 33.8549C32.0265 33.0205 36.1973 31.7405 38.4533 35.8806C38.9712 36.8532 40.1207 31.7059 35.9618 26.8506L35.8873 26.7661C35.9081 26.6956 35.9286 26.6286 35.9487 26.5631C35.9889 26.4317 36.0272 26.3061 36.0638 26.1702C38.159 18.6894 33.1565 9.75527 24.7445 5C28.3777 9.66308 30.0412 15.2949 28.5857 20.25C28.4536 20.7083 28.2951 21.1588 28.1109 21.5995C27.9383 21.4841 27.7225 21.361 27.4439 21.2149C21.1601 17.3644 15.3113 12.871 9.99608 7.81009C13.1936 12.2165 16.7354 16.3731 20.5896 20.2423C17.8902 18.7855 10.3022 13.638 5.53115 9.5593C6.1325 10.4985 6.82774 11.3767 7.60662 12.181C11.5537 16.9401 16.8504 22.768 23.0888 27.2504C18.7062 29.7914 12.4836 29.9798 6.257 27.2504C4.73944 26.619 3.30917 25.8028 2 24.8209C4.81703 28.9559 8.83711 32.1663 13.539 34.0355C19.5694 36.4535 25.5607 36.2113 29.9196 33.8549Z" fill="#25265E" fill-opacity="0.67"></path>
</svg>
          </a>
        </div>
        <div class="editor-workspace-wrapper tw:h-full tw:w-full tw:min-h-0 tw:min-w-0">
          <div class="split-panes-wrapper tw:flex-1 tw:w-full tw:h-full tw:min-h-0 tw:min-w-0 tw:flex">
            <div class="editor-wrapper tw:transition-all tw:duration-300 tw:ease-[ease] tw:h-full tw:w-full tw:min-h-0 tw:min-w-0 tw:relative tw:min-[800px]:w-[calc(50%_-_2px)] tw:min-[800px]:transition-[width] tw:min-[800px]:flex tw:min-[800px]:flex-col">
              <div class="editor-desktop-top-bar tw:bg-[#fbfbfb] tw:dark:bg-[#2d2f34] tw:dark:text-white tw:h-12 tw:hidden tw:min-[800px]:flex tw:min-[800px]:justify-between tw:min-[800px]:mb-1 tw:min-[800px]:shrink-0">
                <div class="file-name tw:text-text/70 tw:text-[14px] tw:font-normal tw:items-center tw:bg-surface tw:leading-[24px] tw:py-3 tw:px-[18px] tw:border-r tw:border-r-border tw:border-t tw:border-t-border tw:border-b tw:border-b-surface tw:max-w-full tw:overflow-hidden tw:whitespace-nowrap tw:text-ellipsis" id="executed-file-name" title="main.cpp">
                  main.cpp                </div>
                <div class="desktop-top-bar__btn-wrapper">
                                                                        <button class="desktop-visualize-button visualize tw:cursor-pointer tw:py-1.5 tw:px-4 tw:bg-transparent tw:text-sm tw:text-text/70 tw:border tw:border-border tw:outline-none tw:rounded-xs tw:box-border tw:z-[109] tw:flex tw:flex-row tw:shrink-0 tw:items-center tw:gap-1.5 tw:min-w-[67px] tw:h-8 tw:mt-0 tw:mr-0 tw:mb-0 tw:ml-4 tw:justify-center" style="display: none">
                                                            <span class="visualize-text tw:whitespace-nowrap">
                      &nbsp;Visualize&nbsp;
                    </span>
                  </button>
                                    <button class="desktop-run-button run tw:flex tw:items-center tw:shrink-0 tw:w-[80px] tw:h-8 tw:mt-0 tw:mr-3 tw:mb-0 tw:ml-4 tw:justify-center tw:cursor-pointer tw:py-1.5 tw:px-4 tw:bg-primary tw:text-sm tw:text-white tw:border-0 tw:outline-none tw:rounded-xs tw:z-[109] tw:hover:bg-primary-hover" style="cursor: pointer;">
                    <span class="run-text tw:inline-flex tw:items-center tw:gap-1">
                                Run
                             <svg width="13" height="13" viewBox="0 0 14 14" fill="none" xmlns="http://www.w3.org/2000/svg">
                              <path fill-rule="evenodd" clip-rule="evenodd" d="M2.91675 1.75L11.0834 7L2.91675 12.25V1.75Z" fill="#fff" stroke="#fff" stroke-width="1.4" stroke-linecap="round" stroke-linejoin="round"></path>
                            </svg>
                              </span>
























                  </button>
                </div>
              </div>
                            
              <div id="editor" class="tw:w-full tw:h-full"><div class="cm-editor ͼ1 ͼ3 ͼ4 ͼ2b ͼ2a"><div class="cm-announced" aria-live="polite">&nbsp;</div><div tabindex="-1" class="cm-scroller"><div class="cm-gutters cm-gutters-before" aria-hidden="true" style="min-height: 513.82px; position: sticky;"><div class="cm-gutter cm-lineNumbers"><div class="cm-gutterElement" style="height: 0px; visibility: hidden; pointer-events: none;">99</div><div class="cm-gutterElement" style="height: 21.9922px; margin-top: 4px;">1</div><div class="cm-gutterElement" style="height: 21.9922px;">2</div><div class="cm-gutterElement" style="height: 21.9922px;">3</div><div class="cm-gutterElement" style="height: 21.9922px;">4</div><div class="cm-gutterElement" style="height: 21.9922px;">5</div><div class="cm-gutterElement" style="height: 21.9922px;">6</div><div class="cm-gutterElement" style="height: 21.9922px;">7</div><div class="cm-gutterElement" style="height: 21.9922px;">8</div><div class="cm-gutterElement" style="height: 21.9922px;">9</div><div class="cm-gutterElement" style="height: 21.9922px;">10</div><div class="cm-gutterElement" style="height: 21.9922px;">11</div><div class="cm-gutterElement" style="height: 21.9922px;">12</div><div class="cm-gutterElement" style="height: 21.9922px;">13</div><div class="cm-gutterElement" style="height: 21.9922px;">14</div><div class="cm-gutterElement" style="height: 21.9922px;">15</div><div class="cm-gutterElement" style="height: 21.9922px;">16</div><div class="cm-gutterElement" style="height: 21.9922px;">17</div><div class="cm-gutterElement" style="height: 21.9922px;">18</div><div class="cm-gutterElement" style="height: 21.9922px;">19</div><div class="cm-gutterElement" style="height: 21.9922px;">20</div><div class="cm-gutterElement" style="height: 21.9922px;">21</div><div class="cm-gutterElement" style="height: 21.9922px;">22</div><div class="cm-gutterElement cm-activeLineGutter" style="height: 21.9922px;">23</div></div><div class="cm-gutter cm-foldGutter"><div class="cm-gutterElement" style="height: 0px; visibility: hidden; pointer-events: none;"><span title="Unfold line">›</span></div><div class="cm-gutterElement" style="height: 21.9922px; margin-top: 91.9688px;"><span title="Fold line">⌄</span></div><div class="cm-gutterElement" style="height: 21.9922px;"><span title="Fold line">⌄</span></div><div class="cm-gutterElement" style="height: 21.9922px; margin-top: 43.9844px;"><span title="Fold line">⌄</span></div><div class="cm-gutterElement" style="height: 21.9922px; margin-top: 109.961px;"><span title="Fold line">⌄</span></div><div class="cm-gutterElement cm-activeLineGutter" style="height: 21.9922px; margin-top: 153.945px;"></div></div></div><div spellcheck="false" autocorrect="off" autocapitalize="off" writingsuggestions="false" translate="no" contenteditable="true" style="tab-size: 4;" class="cm-content cm-lineWrapping" role="textbox" aria-multiline="true" data-language="cpp"><div class="cm-line"><span class="ͼ1p">#include</span><span class="ͼ1q">&lt;iostream&gt;</span></div><div class="cm-line"><span class="ͼ1m">using</span> <span class="ͼ1m">namespace</span> <span class="ͼ1r">std</span>;</div><div class="cm-line"><span class="ͼ1p">#include</span><span class="ͼ1q">&lt;cstring&gt;</span></div><div class="cm-line"><br></div><div class="cm-line"><span class="ͼ1w">void</span> <span class="ͼ22">f</span><span class="ͼ26">(</span><span class="ͼ1w">int</span> <span class="ͼ1r">i</span><span class="ͼ25">,</span><span class="ͼ1w">char</span> <span class="ͼ1r">str</span><span class="ͼ26">[</span><span class="ͼ26">]</span><span class="ͼ25">,</span><span class="ͼ1w">int</span> <span class="ͼ1r">n</span><span class="ͼ26">)</span><span class="ͼ26">{</span></div><div class="cm-line">    <span class="ͼ1m">if</span><span class="ͼ26">(</span><span class="ͼ1r">i</span><span class="ͼ1o">&gt;=</span><span class="ͼ1r">n</span><span class="ͼ1o">/</span><span class="ͼ1l">2</span><span class="ͼ26">)</span><span class="ͼ26">{</span></div><div class="cm-line">        <span class="ͼ1r">cout</span><span class="ͼ1o">&lt;&lt;</span><span class="ͼ1k">"True"</span>;</div><div class="cm-line">        <span class="ͼ1m">return</span>;</div><div class="cm-line">    <span class="ͼ26">}</span><span class="ͼ1m">if</span><span class="ͼ26">(</span><span class="ͼ1r">str</span><span class="ͼ26">[</span><span class="ͼ1r">i</span><span class="ͼ26">]</span><span class="ͼ1o">!=</span><span class="ͼ1r">str</span><span class="ͼ26">[</span><span class="ͼ1r">n</span><span class="ͼ1o">-</span><span class="ͼ1r">i</span><span class="ͼ1o">-</span><span class="ͼ1l">1</span><span class="ͼ26">]</span><span class="ͼ26">)</span><span class="ͼ26">{</span></div><div class="cm-line">        <span class="ͼ1r">cout</span><span class="ͼ1o">&lt;&lt;</span><span class="ͼ1k">"False"</span>;</div><div class="cm-line">        <span class="ͼ1m">return</span>;</div><div class="cm-line">    <span class="ͼ26">}</span></div><div class="cm-line">    <span class="ͼ1m">return</span> <span class="ͼ21">f</span><span class="ͼ26">(</span><span class="ͼ1r">i</span><span class="ͼ1o">+</span><span class="ͼ1l">1</span><span class="ͼ25">,</span><span class="ͼ1r">str</span><span class="ͼ25">,</span><span class="ͼ1r">n</span><span class="ͼ26">)</span>;</div><div class="cm-line"><span class="ͼ26">}</span></div><div class="cm-line"><span class="ͼ1w">int</span> <span class="ͼ22">main</span><span class="ͼ26">(</span><span class="ͼ26">)</span><span class="cm-matchingBracket"><span class="ͼ26">{</span></span></div><div class="cm-line">    </div><div class="cm-line">    <span class="ͼ1w">char</span> <span class="ͼ1r">str</span><span class="ͼ26">[</span><span class="ͼ1l">100</span><span class="ͼ26">]</span>;</div><div class="cm-line">    <span class="ͼ1r">cin</span>.<span class="ͼ23">getline</span><span class="ͼ26">(</span><span class="ͼ1r">str</span><span class="ͼ25">,</span><span class="ͼ1l">100</span><span class="ͼ26">)</span>;</div><div class="cm-line">    <span class="ͼ1w">int</span> <span class="ͼ1r">n</span> = std::<span class="ͼ21">strlen</span><span class="ͼ26">(</span><span class="ͼ1r">str</span><span class="ͼ26">)</span>;</div><div class="cm-line">    <span class="ͼ21">f</span><span class="ͼ26">(</span><span class="ͼ1l">0</span><span class="ͼ25">,</span><span class="ͼ1r">str</span><span class="ͼ25">,</span><span class="ͼ1r">n</span><span class="ͼ26">)</span>;</div><div class="cm-line"><br></div><div class="cm-line">    <span class="ͼ1m">return</span> <span class="ͼ1l">0</span>;</div><div class="cm-line cm-activeLine"><span class="cm-matchingBracket"><span class="ͼ26">}</span></span></div></div><div class="cm-layer cm-layer-above cm-cursorLayer" aria-hidden="true" style="z-index: 150; animation-duration: 1200ms; animation-name: cm-blink2;"><div class="cm-cursor cm-cursor-primary" style="left: 49.6094px; top: 490.312px; height: 16.25px;"></div></div><div class="cm-layer cm-selectionLayer" aria-hidden="true" style="z-index: -2; display: none;"></div></div></div></div>
                            <div class="visualize-decoration-overlay tw:absolute tw:inset-0 tw:pointer-events-none tw:overflow-hidden tw:hidden">
              </div>
            </div>

                                    <div class="mobile-visualize-controls-root"></div>

                        <div class="mobile-float-actions">
                            <button class="mobile-visualize-button visualize tw:cursor-pointer tw:py-1.5 tw:px-4 tw:bg-transparent tw:text-sm tw:text-text/70 tw:border tw:border-border tw:outline-none tw:rounded-xs tw:box-border tw:z-[109] tw:flex tw:items-center tw:gap-1" style="display: none">
                <svg class="visualize-stop-icon tw:hidden tw:shrink-0 tw:w-3 tw:h-3 tw:text-inherit" width="12" height="12" viewBox="0 0 14 14" fill="none" xmlns="http://www.w3.org/2000/svg">
                  <rect x="1" y="1" width="12" height="12" rx="2" fill="currentColor"></rect>
                </svg>
                <span class="visualize-text tw:whitespace-nowrap">Visualize</span>
              </button>
              <button class="mobile-run-button run tw:flex tw:items-center tw:cursor-pointer tw:py-1.5 tw:px-4 tw:bg-primary tw:text-sm tw:text-white tw:border-0 tw:outline-none tw:rounded-xs tw:z-[109] tw:hover:bg-primary-hover">
                Run
              </button>
            </div>

                        <div class="panes-divider tw:hidden" id="panes-divider" role="separator" aria-orientation="vertical">
              <span class="panes-divider__handle" aria-hidden="true">
                <svg width="16" height="56" viewBox="0 0 16 56" fill="none" xmlns="http://www.w3.org/2000/svg">
                                    <rect class="panes-divider__handle-bg panes-divider__handle-border" x="0.5" y="0.5" width="15" height="55" rx="7.5" fill="white" stroke="#D3DCE6"></rect>
                  <circle class="panes-divider__handle-dot" cx="6" cy="24" r="1" fill="#E3E3E3"></circle>
                  <circle class="panes-divider__handle-dot" cx="10" cy="24" r="1" fill="#E3E3E3"></circle>
                  <circle class="panes-divider__handle-dot" cx="6" cy="28" r="1" fill="#E3E3E3"></circle>
                  <circle class="panes-divider__handle-dot" cx="10" cy="28" r="1" fill="#E3E3E3"></circle>
                  <circle class="panes-divider__handle-dot" cx="6" cy="32" r="1" fill="#E3E3E3"></circle>
                  <circle class="panes-divider__handle-dot" cx="10" cy="32" r="1" fill="#E3E3E3"></circle>
                </svg>
              </span>
            </div>

            <div class="terminal-wrapper tw:hidden tw:relative tw:transition-all tw:duration-300 tw:ease-[ease] tw:h-full tw:w-full tw:min-h-0 tw:min-w-0 tw:min-[800px]:w-[calc(50%_-_2px)] tw:min-[800px]:transition-[width] tw:min-[800px]:flex tw:min-[800px]:flex-col">
              <div class="terminal-desktop-top-bar tw:bg-[#fbfbfb] tw:dark:bg-[#2d2f34] tw:dark:text-white tw:h-12 tw:hidden tw:min-[800px]:flex tw:min-[800px]:justify-between tw:min-[800px]:shrink-0">
                <div class="shell-name tw:text-text/70 tw:dark:text-white tw:text-[14px] tw:font-normal tw:leading-[24px] tw:py-[11px] tw:px-[18px] tw:border-t tw:border-t-border tw:dark:border-t-white/20 tw:border-b tw:border-b-border tw:dark:border-b-white/20">
                  Output                </div>
                <div class="terminal-desktop-top-bar__btn-wrapper">
                  <button class="share-button tw:flex tw:shrink-0 tw:items-center tw:justify-center tw:font-medium tw:text-sm tw:ml-4 tw:h-8 tw:rounded-xs tw:border-0 tw:bg-transparent tw:text-text/67 tw:dark:text-white tw:cursor-pointer tw:p-1.5" title="Share code">
                    <svg xmlns="http://www.w3.org/2000/svg" width="18" height="18" viewBox="0 0 18 18" fill="none" class="toggle-expanded-mode-mobile-icon svg share-icon tw:w-5 tw:h-5 replaced-svg">
<path fill-rule="evenodd" clip-rule="evenodd" d="M13.5 6C14.7426 6 15.75 4.99264 15.75 3.75C15.75 2.50736 14.7426 1.5 13.5 1.5C12.2574 1.5 11.25 2.50736 11.25 3.75C11.25 4.99264 12.2574 6 13.5 6Z" stroke="white" stroke-width="1.77778" stroke-linecap="round" stroke-linejoin="round"></path>
<path fill-rule="evenodd" clip-rule="evenodd" d="M4.5 11.25C5.74264 11.25 6.75 10.2426 6.75 9C6.75 7.75736 5.74264 6.75 4.5 6.75C3.25736 6.75 2.25 7.75736 2.25 9C2.25 10.2426 3.25736 11.25 4.5 11.25Z" stroke="white" stroke-width="1.77778" stroke-linecap="round" stroke-linejoin="round"></path>
<path fill-rule="evenodd" clip-rule="evenodd" d="M13.5 16.5C14.7426 16.5 15.75 15.4926 15.75 14.25C15.75 13.0074 14.7426 12 13.5 12C12.2574 12 11.25 13.0074 11.25 14.25C11.25 15.4926 12.2574 16.5 13.5 16.5Z" stroke="white" stroke-width="1.77778" stroke-linecap="round" stroke-linejoin="round"></path>
<path d="M6.44336 10.1328L11.5659 13.1178" stroke="white" stroke-width="1.77778" stroke-linecap="round" stroke-linejoin="round"></path>
<path d="M11.5584 4.88281L6.44336 7.86781" stroke="white" stroke-width="1.77778" stroke-linecap="round" stroke-linejoin="round"></path>
</svg>
                  </button>
                                    <div class="terminal-overflow-menu-wrapper tw:relative tw:flex tw:items-center tw:shrink-0 tw:ml-2">
                    <button type="button" class="terminal-overflow-menu-btn new-feature-dot-host tw:flex tw:items-center tw:justify-center tw:p-1.5 tw:bg-transparent tw:border-0 tw:rounded-xs tw:cursor-pointer" data-new-feature="download" id="toggle-overflow-menu-desktop" title="More options" data-base-title="More options">
                      <svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" viewBox="0 0 20 20" fill="none" class="svg replaced-svg">
<path fill-rule="evenodd" clip-rule="evenodd" d="M9.99967 11.6673C10.9201 11.6673 11.6663 10.9211 11.6663 10.0007C11.6663 9.08018 10.9201 8.33398 9.99967 8.33398C9.0792 8.33398 8.33301 9.08018 8.33301 10.0007C8.33301 10.9211 9.0792 11.6673 9.99967 11.6673Z" stroke="#25265E" stroke-opacity="0.4" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
<path fill-rule="evenodd" clip-rule="evenodd" d="M9.99967 4.99935C10.9201 4.99935 11.6663 4.25316 11.6663 3.33268C11.6663 2.41221 10.9201 1.66602 9.99967 1.66602C9.0792 1.66602 8.33301 2.41221 8.33301 3.33268C8.33301 4.25316 9.0792 4.99935 9.99967 4.99935Z" stroke="#25265E" stroke-opacity="0.4" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
<path fill-rule="evenodd" clip-rule="evenodd" d="M9.99967 18.3333C10.9201 18.3333 11.6663 17.5871 11.6663 16.6667C11.6663 15.7462 10.9201 15 9.99967 15C9.0792 15 8.33301 15.7462 8.33301 16.6667C8.33301 17.5871 9.0792 18.3333 9.99967 18.3333Z" stroke="#25265E" stroke-opacity="0.4" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path>
</svg>
                    </button>
                    <div class="terminal-overflow-menu tw:hidden tw:absolute tw:top-[calc(100%+8px)] tw:right-0 tw:flex-col tw:min-w-[168px] tw:bg-white tw:dark:bg-[#2d2f34] tw:border tw:border-border tw:dark:border-white/20 tw:rounded-sm tw:shadow-[0px_4px_12px_0px_#000a010f] tw:p-1 tw:z-[110]" id="terminal-overflow-menu">
                      <button type="button" id="toggle-expanded-mode-desktop" class="terminal-overflow-menu-item tw:flex tw:items-center tw:gap-4 tw:w-full tw:py-2 tw:px-3 tw:bg-transparent tw:border-0 tw:rounded-xs tw:text-sm tw:font-medium tw:text-text/70 tw:dark:text-white tw:text-left tw:cursor-pointer">
                                                <svg class="fullscreen-menu-icon enter tw:w-[18px] tw:h-[18px] tw:block" width="18" height="18" viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg">
                          <path d="M5.038 2.22a.889.889 0 000-1.778v1.777zM.445 5.033a.889.889 0 101.778 0H.445zm13.334 0a.889.889 0 001.777 0H13.78zM10.964.44a.889.889 0 000 1.778V.441zm0 13.334a.889.889 0 000 1.778v-1.778zm4.592-2.815a.889.889 0 00-1.777 0h1.777zm-13.333 0a.889.889 0 00-1.778 0h1.778zm2.815 4.593a.889.889 0 000-1.778v1.778zm0-15.111H2.815v1.777h2.223V.442zm-2.223 0a2.37 2.37 0 00-2.37 2.37h1.778c0-.327.265-.593.592-.593V.442zm-2.37 2.37v2.222h1.778V2.812H.445zm15.111 2.222V2.812H13.78v2.222h1.777zm0-2.222a2.37 2.37 0 00-2.37-2.37v1.777c.327 0 .593.265.593.593h1.777zm-2.37-2.37h-2.222v1.777h2.222V.441zm-2.222 15.11h2.222v-1.777h-2.222v1.778zm2.222 0a2.37 2.37 0 002.37-2.37H13.78a.593.593 0 01-.593.593v1.778zm2.37-2.37V10.96H13.78v2.222h1.777zM.446 10.96v2.222h1.777V10.96H.445zm0 2.222a2.37 2.37 0 002.37 2.37v-1.777a.593.593 0 01-.593-.593H.445zm2.37 2.37h2.222v-1.777H2.816v1.778z" fill="currentColor"></path>
                        </svg>
                        <svg class="fullscreen-menu-icon exit tw:w-[18px] tw:h-[18px] tw:hidden" width="18" height="18" viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg">
                          <path d="M5.926 1.334a.889.889 0 10-1.778 0h1.778zM1.333 4.15a.889.889 0 100 1.778V4.149zm13.334 1.778a.889.889 0 000-1.778v1.778zm-2.815-4.593a.889.889 0 00-1.778 0h1.778zm-1.778 13.334a.889.889 0 001.778 0h-1.778zm4.593-2.815a.889.889 0 000-1.778v1.778zM1.334 10.075a.889.889 0 000 1.778v-1.778zm2.814 4.593a.889.889 0 001.778 0H4.148zm0-13.334v2.223h1.778V1.334H4.148zm0 2.223a.593.593 0 01-.592.592v1.778a2.37 2.37 0 002.37-2.37H4.148zm-.592.592H1.333v1.778h2.223V4.149zm11.11 0h-2.221v1.778h2.222V4.149zm-2.221 0a.593.593 0 01-.593-.593h-1.778a2.37 2.37 0 002.37 2.37V4.15zm-.593-.593V1.334h-1.778v2.222h1.778zm0 11.112v-2.222h-1.778v2.222h1.778zm0-2.222c0-.328.265-.593.593-.593v-1.778a2.37 2.37 0 00-2.37 2.37h1.777zm.593-.593h2.222v-1.778h-2.222v1.778zm-11.111 0h2.222v-1.778H1.334v1.778zm2.222 0c.327 0 .592.265.592.593h1.778a2.37 2.37 0 00-2.37-2.37v1.777zm.592.593v2.222h1.778v-2.222H4.148z" fill="currentColor"></path>
                        </svg>
                        <span class="fullscreen-menu-label enter">Full screen</span>
                        <span class="fullscreen-menu-label exit tw:hidden">Exit full screen</span>
                      </button>
                      <button type="button" id="download-project-desktop" class="download-project-trigger terminal-overflow-menu-item tw:flex tw:items-center tw:gap-4 tw:w-full tw:py-2 tw:px-3 tw:bg-transparent tw:border-0 tw:rounded-xs tw:text-sm tw:font-medium tw:text-text/70 tw:dark:text-white tw:text-left tw:cursor-pointer" title="Download the current code as a runnable project (.zip)">
                        <svg class="tw:w-[18px] tw:h-[18px]" width="18" height="18" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" xmlns="http://www.w3.org/2000/svg" aria-hidden="true"><path d="M12 3v12"></path><path d="M7 10l5 5 5-5"></path><path d="M4 20h16"></path></svg>
                        <span class="tw:inline-flex tw:items-center tw:gap-2">
                          <span>Download</span>
                          <span class="new-feature-tag tw:inline-flex tw:items-center tw:justify-center tw:h-4 tw:pt-[1.5px] tw:pl-[7.6px] tw:pr-[8.4px] tw:rounded-full tw:bg-[#ff8a00] tw:text-white tw:text-[10px] tw:font-bold tw:leading-none tw:uppercase" data-new-feature="download">New</span>
                        </span>
                      </button>
                      <button type="button" id="open-contact-modal-desktop" class="terminal-overflow-menu-item tw:flex tw:items-center tw:gap-4 tw:w-full tw:py-2 tw:px-3 tw:bg-transparent tw:border-0 tw:rounded-xs tw:text-sm tw:font-medium tw:text-text/70 tw:dark:text-white tw:text-left tw:cursor-pointer">
                        <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg tw:w-[18px] tw:h-[18px] replaced-svg">
  <path d="M21 15a2 2 0 0 1-2 2H7l-4 4V5a2 2 0 0 1 2-2h14a2 2 0 0 1 2 2z"></path>
</svg>
                        <span>Contact us</span>
                      </button>
                                            <button type="button" id="toggle-dark-mode-desktop" title="Toggle light mode" class="terminal-overflow-menu-item tw:flex tw:items-center tw:gap-4 tw:w-full tw:py-2 tw:px-3 tw:bg-transparent tw:border-0 tw:rounded-xs tw:text-sm tw:font-medium tw:text-text/70 tw:dark:text-white tw:text-left tw:cursor-pointer">
                        <svg class="toggle-dark-mode-desktop-icon moon tw:w-[18px] tw:h-[18px] tw:block" width="18" height="18" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" xmlns="http://www.w3.org/2000/svg">
                          <path d="M21 12.79A9 9 0 1 1 11.21 3 7 7 0 0 0 21 12.79z"></path>
                        </svg>
                        <svg class="toggle-dark-mode-desktop-icon sun tw:w-[18px] tw:h-[18px] tw:hidden" width="18" height="18" viewBox="0 0 24 24" fill="none" stroke="#ffffff" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" xmlns="http://www.w3.org/2000/svg">
                          <circle cx="12" cy="12" r="5"></circle>
                          <line x1="12" y1="1" x2="12" y2="3"></line>
                          <line x1="12" y1="21" x2="12" y2="23"></line>
                          <line x1="4.22" y1="4.22" x2="5.64" y2="5.64"></line>
                          <line x1="18.36" y1="18.36" x2="19.78" y2="19.78"></line>
                          <line x1="1" y1="12" x2="3" y2="12"></line>
                          <line x1="21" y1="12" x2="23" y2="12"></line>
                          <line x1="4.22" y1="19.78" x2="5.64" y2="18.36"></line>
                          <line x1="18.36" y1="5.64" x2="19.78" y2="4.22"></line>
                        </svg>
                        <span class="theme-menu-label to-dark">Dark mode</span>
                        <span class="theme-menu-label to-light tw:hidden">Light mode</span>
                      </button>
                    </div>
                  </div>
                                    <div class="visualize-controls-root tw:hidden tw:items-center tw:justify-center tw:flex-[0_0_100%] tw:mt-1">
                  </div>
                </div>
              </div>
                            <div id="terminal" class="tw:w-full tw:h-full stdin-idle"><div class="cm-editor ͼ1 ͼ3 ͼ4 ͼ2d ͼ2c"><div class="cm-announced" aria-live="polite"></div><div tabindex="-1" class="cm-scroller"><div spellcheck="false" autocorrect="off" autocapitalize="off" writingsuggestions="false" translate="no" contenteditable="true" style="tab-size: 4;" class="cm-content cm-lineWrapping" role="textbox" aria-multiline="true" aria-readonly="true"><div class="cm-line">madam</div><div class="cm-line">True</div></div><div class="cm-layer cm-layer-above cm-cursorLayer" aria-hidden="true" style="z-index: 150; animation-duration: 1200ms; animation-name: cm-blink;"><div class="cm-cursor cm-cursor-primary" style="left: 39.5898px; top: 28.4766px; height: 16.25px;"></div></div><div class="cm-layer cm-selectionLayer" aria-hidden="true" style="z-index: -2;"></div></div></div></div>
                            <div class="visualize-canvas-root tw:hidden tw:w-full tw:h-full tw:box-border tw:bg-white tw:dark:bg-[#1f2023] tw:overflow-hidden">
              </div>
            </div>
            <div class="desktop-right-ad tw:hidden">
                                <div id="programizcom50429">
                </div>

                                <div class="desktop-right-ad-bottom">
                  <div id="programizcom50459">
                  </div>
                </div>
              </div>
          </div>

                  </div>
      </div>
    </div>
  </div>

  <script defer="" type="text/javascript">
    const lang = "cpp";

    var playStoreUrl =
      "https://play.google.com/store/apps/details?id=com.programiz.learnpython",
      appStoreUrl =
      "https://apps.apple.com/app/apple-store/id1472188189?pt=120228772",
      desktopUrl = "https://www.programiz.com/learn-python";

    const desktopAdsButton = document.getElementById("ad-link");
    const mobileAdsButton = document.getElementById("mobile-ad-link");

    const challengeLinkProbability = 0 / 100; // in percentage
    const hasChallengeLinkAsAds = Math.random() <= challengeLinkProbability;

    if (hasChallengeLinkAsAds) {
      const baseURL = "https://app.programiz.pro/community-challenges/home"
      desktopAdsButton.innerHTML = `Python Challenges ❯`;
      mobileAdsButton.innerHTML = `Python Challenges`;
      desktopAdsButton.href = baseURL;
      mobileAdsButton.href = baseURL;
    } else {
      const utm = "utm_source=programiz_compiler&utm_medium=referral&utm_audience=ORGANIC-FREEMIUM&utm_campaign=offer-pro&utm_content=interests_pro&utm_term=nav_floating_button"
      const baseURL = `https://programiz.pro?${utm}`

      desktopAdsButton.innerHTML = `Programiz PRO ❯`;
      mobileAdsButton.innerHTML = `Programiz PRO`;
      desktopAdsButton.href = baseURL;
      mobileAdsButton.href = baseURL;
    }

    desktopAdsButton.target = "_blank"
    mobileAdsButton.target = "_blank"
  </script>
    <script defer="" src="./pallidrome_recursion_files/socket.io.min.js.download"></script>
  <script defer="" src="./pallidrome_recursion_files/jquery.min.js.download"></script>

  <script defer="" src="./pallidrome_recursion_files/mousetrap.min.js.download"></script>
  <script>
    // Read by src/setPublicPath.js so webpack's runtime chunk loader (used
    // by dynamic import(), e.g. the Visualize module) requests the same
    // origin this entry bundle itself was served from, instead of always
    // defaulting to same-origin /build/.
    window.__ASSET_PATH__ = "https://cdn.playground-v2.programiz.com/";

    // The share id as the server resolved it. Share links are /online-compiler/<id> (the proxy maps that to
    // ?share_id=<id> for PHP only), so window.location.search has no share_id in the browser; src/client.js
    // reads this to scope autosave per shared program.
    window.__SHARE_ID__ = null;

    // Read by src/client.js on page load to auto-enter Visualize mode for links that carry
    // ?visualize=true - see the matching comment in config.php for how this is read from $_GET.
    window.__VISUALIZE_ON_LOAD__ = false;
  </script>
  <script defer="" src="./pallidrome_recursion_files/final.75ac85407ac55e9237f0.js.download"></script>

    <noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-TKXT7MH" height="0" width="0"
      style="display:none;visibility:hidden"></iframe></noscript>
  
      <div id="fluid-privacy-opt-out-link" onmouseover="this.style.color='rgb(25, 103, 210)'; this.style.cursor='pointer'" onmouseout="this.style.color='#CCCCCC'; this.style.cursor='auto'"></div>
  <script type="text/javascript">
    const privacyOptOutLink = document.getElementById("fluid-privacy-opt-out-link");
    window.googlefc = window.googlefc || {
      callbackQueue: []
    };
    window.googlefc.ccpa = window.googlefc.ccpa || {}
    window.googlefc.callbackQueue.push({
      "CONSENT_API_READY": () => {
        if (!privacyOptOutLink) {
          return;
        }
        privacyOptOutLink.addEventListener("click", () => googlefc.showRevocationMessage());
        !!window.__tcfapi && window.__tcfapi("addEventListener", 2, (tcData, success) => {
          if (success && tcData.gdprApplies) {
            privacyOptOutLink.innerText = "Change GDPR Consent";
            return;
          }
          if (googlefc.ccpa.InitialCcpaStatusEnum() === googlefc.ccpa.InitialCcpaStatusEnum.NOT_OPTED_OUT) {
            window.googlefc.ccpa.overrideDnsLink = true;
            privacyOptOutLink.innerText = "Don't sell or share my personal info";
            privacyOptOutLink.addEventListener("click", () => googlefc.ccpa.openConfirmationDialog((optedOut) => {
              if (optedOut) {
                privacyOptOutLink.style.display = "none";
              }
            }));
            return
          }
        });
      }
    });
  </script>
    <script>(function(){function c(){var b=a.contentDocument||(a.contentWindow&&a.contentWindow.document);if(b){var d=b.createElement('script');d.innerHTML="window.__CF$cv$params={r:'a4f2cdb29be65109',t:'MTc5Mjc4MDEyNw=='};var a=document.createElement('script');a.src='/cdn-cgi/challenge-platform/scripts/jsd/main.js';document.getElementsByTagName('head')[0].appendChild(a);";b.getElementsByTagName('head')[0].appendChild(d)}}if(document.body){var a=document.createElement('iframe');a.height=1;a.width=1;a.style.position='absolute';a.style.top=0;a.style.left=0;a.style.border='none';a.style.visibility='hidden';document.body.appendChild(a);if('loading'!==document.readyState)c();else if(window.addEventListener)document.addEventListener('DOMContentLoaded',c);else{var e=document.onreadystatechange||function(){};document.onreadystatechange=function(b){e(b);'loading'!==document.readyState&&(document.onreadystatechange=e,c())}}}})();</script><iframe height="1" width="1" style="position: absolute; top: 0px; left: 0px; border-width: medium; border-style: none; border-color: currentcolor; border-image: none; visibility: hidden;" src="./pallidrome_recursion_files/saved_resource.html"></iframe><script type="module" src="./pallidrome_recursion_files/vce701823e78c4301a35b7e07294d87301792088814092" integrity="sha512-UKNk8GbxkABxKcXYuLkO16EleLGUkcvJWtpSNmExE0Too3ZaFAxTscNWEc1OdAv5/BikHawapSCaiD2XCmp+Bw==" data-cf-beacon="{&quot;version&quot;:&quot;2024.11.0&quot;,&quot;token&quot;:&quot;0a465ad039704d1f9760ad556f6f3cdd&quot;,&quot;r&quot;:1,&quot;spa&quot;:2}" crossorigin="anonymous"></script>



<script src="./pallidrome_recursion_files/banner.js.download" data-utm_source="compiler"></script><script type="text/javascript" id="" charset="">(function(a,e,b,f,g,c,d){a[b]=a[b]||function(){(a[b].q=a[b].q||[]).push(arguments)};c=e.createElement(f);c.async=1;c.src="https://www.clarity.ms/tag/"+g;d=e.getElementsByTagName(f)[0];d.parentNode.insertBefore(c,d)})(window,document,"clarity","script","yp7zjdgnh3");</script><script type="text/javascript" id="" charset="">window.fbq||(!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js"),fbq("init","123000288571689"),fbq("track","PageView"));</script></body></html>