open Jest;

describe("TodoList Reducer", () => {
  open Expect;

  test("should add a new todo", () => {
    let reducer = TodoListReducer.reducer;
    let result = reducer([], AddTodo("todo"));

    expect(result) |> toEqual(["todo"]);
  });

  test("should remove a todo", () => {
    let reducer = TodoListReducer.reducer;
    let result = reducer(["todo"], RemoveTodo("todo"));

    expect(result) |> toEqual([]);
  })
});
