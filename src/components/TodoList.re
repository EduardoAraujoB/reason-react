module Styles = {
  open Css;

  let wrapper =
    style([
      display(flexBox),
      flexDirection(column),
      justifyContent(center),
      alignItems(center),
      width(px(500)),
      height(auto),
      padding(px(15)),
      background(hex("F96E46")),
      borderRadius(px(5)),
    ]);

  let title = style([color(hex("fff"))]);
};

[@react.component]
let make = (~todoList) => {
  <div role="todo-list" className=Styles.wrapper>
    <h2 className=Styles.title> {React.string("Todo List")} </h2>
    <AddTodo />
    {List.mapi(
       (key, todo) => <TodoItem key={key->string_of_int} todo />,
       todoList,
     )
     ->Array.of_list
     ->ReasonReact.array}
  </div>;
};
