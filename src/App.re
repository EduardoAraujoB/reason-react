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

let myList: list(string) = ["Item1", "Item2", "Item3"];

[@react.component]
let make = () => {
  <div className=Styles.wrapper> <TodoList list_todo=myList /> </div>;
};
