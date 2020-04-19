module Styles = {
  open Css;

  let wrapper =
    style([
      display(flexBox),
      justifyContent(center),
      alignItems(center),
      height(vh(95.0)),
    ]);

  let title = style([color(hex("#fff"))]);
};

[@react.component]
let make = () => {
  <div className=Styles.wrapper>
    <h1 className=Styles.title> {ReasonReact.string("Hello World")} </h1>
  </div>;
};
