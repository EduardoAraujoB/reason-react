module Styles = {
  open Css;

  let wrapper =
    style([
      display(flexBox),
      position(relative),
      flexDirection(row),
      justifyContent(center),
      alignItems(center),
      width(pct(100.0)),
    ]);
  let todoInput =
    style([
      width(pct(100.0)),
      height(px(40)),
      paddingLeft(px(10)),
      background(hex("eee")),
      placeholder([color(hex("635D5C"))]),
      color(hex("635D5C")),
    ]);
  let addButton =
    style([
      position(absolute),
      height(pct(100.0)),
      top(px(0)),
      right(px(0)),
      borderWidth(px(0)),
    ]);
};

[@react.component]
let make = () => {
  let (newTodo, setNewTodo) = React.useState(() => "");
  let (_, dispatch) = TodoListContext.useTodoList();

  let onChange = (e: ReactEvent.Form.t) => {
    let value = e->ReactEvent.Form.target##value;
    setNewTodo(value);
  };

  let handleClick = () => {
    dispatch(AddTodo(newTodo));
  };

  <div className=Styles.wrapper>
    <input
      className=Styles.todoInput
      placeholder="Add Todo"
      value=newTodo
      onChange
    />
    <button className=Styles.addButton onClick={_ => handleClick()}>
      <MscharleyBsMaterialUiIcons.Add.Filled />
    </button>
  </div>;
};
