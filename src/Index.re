open Css;

Css.global(
  "body",
  [
    margin(px(0)),
    padding(px(0)),
    boxSizing(borderBox),
  ],
);
Css.global("button", [cursor(pointer)]);
Css.global("input", [borderWidth(px(0))]);

ReactDOMRe.renderToElementWithId(<App />, "root");
