module Styles = {
  open Css;

  let wrapper =
    style([
      width(pct(100.0)),
      background(hex("fff")),
      margin(px(10)),
      paddingLeft(px(5)),
      borderRadius(px(2)),
    ]);
};

[@react.component]
let make = (~todo: string) => {
  <div className=Styles.wrapper> <p> {React.string(todo)} </p> </div>;
};
