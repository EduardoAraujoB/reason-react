module Styles = {
  open Css;

  let wrapper =
    style([
      display(flexBox),
      justifyContent(center),
      alignItems(center),
      height(vh(95.0)),
    ]);
};

[@react.component]
let make = () => {
  <div className=Styles.wrapper> <TodoList /> </div>;
};
