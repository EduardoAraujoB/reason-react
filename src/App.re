module Styles = {
  open Css;

  let wrapper =
    style([
      display(flexBox),
      justifyContent(center),
      alignItems(center),
      height(vh(95.0)),
      padding(px(50)),
    ]);
};

[@react.component]
let make = () => {
  let (state, dispatch) = React.useReducer(TodoListReducer.reducer, []);
  <TodoListProvider value=(state, dispatch)>
    <div className=Styles.wrapper> <TodoList todoList=state /> </div>
  </TodoListProvider>;
};
