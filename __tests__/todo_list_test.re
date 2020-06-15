open Jest;
open ReactTestingLibrary;

describe("Todo List", () => {
  open Expect

  test("should add a todo", () => {
    let component = render(<App />);
    let input = component |> getByPlaceholderText(~matcher=`Str("Add Todo"), _);
    FireEvent.change(input, ~eventInit={ "target": { "value": "todo" } });
    let button = component |> getByRole(~matcher=`Str("submit"), _);
    FireEvent.click(button);
    let item = component |> getByText(~matcher=`Str("todo"), _);
    toMatchSnapshot(expect(item));
  });

  test("should remove a todo", () => {
    let component = render(<App />);
    let input = component |> getByPlaceholderText(~matcher=`Str("Add Todo"), _);
    let button = component |> getByRole(~matcher=`Str("submit"), _);
    FireEvent.change(input, ~eventInit={ "target": { "value": "todo" } });
    FireEvent.click(button);
    FireEvent.change(input, ~eventInit={ "target": { "value": "todo2" } });
    FireEvent.click(button);
    let remove = component |> getByRole(~matcher=`Str("delete-todo"), _);
    FireEvent.click(remove);
    let todo_list = getByRole(~matcher=`Str("todo-list"));
    Js.log(todo_list);
    toMatchSnapshot(expect(todo_list));
  });
});
