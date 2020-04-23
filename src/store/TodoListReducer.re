type state = list(string);

let reducer = (state, action: Types.todoAction) => {
  switch (action) {
  | AddTodo(newTodo) => [newTodo, ...state]
  | RemoveTodo(toRemove) => List.filter(item => item !== toRemove, state)
  };
};
