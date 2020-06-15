module Styles = {
  open Css;

  let wrapper =
    style([
      display(flexBox),
      flexDirection(row),
      justifyContent(spaceBetween),
      width(pct(100.0)),
      background(hex("FFE3E3")),
      marginTop(px(10)),
      paddingLeft(px(5)),
      borderRadius(px(2)),
    ]);

  let removeButton = style([borderWidth(px(0))]);
};

[@react.component]
let make = (~todo: string) => {
  let (_, dispatch) = TodoListContext.useTodoList();

  let handleClick = () => {
    dispatch(RemoveTodo(todo));
  };

  <div className=Styles.wrapper>
    <p> {React.string(todo)} </p>
    <button
      role={j|delete-$todo|j}
      className=Styles.removeButton
      onClick={_ => handleClick()}>
      <MscharleyBsMaterialUiIcons.Remove.Filled />
    </button>
  </div>;
};
