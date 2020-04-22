type dispatch = Types.todoAction => unit;
type todoList = list(string);
type contextValue = (todoList, dispatch);

let initValue: contextValue = ([], _ => ignore());

let context = React.createContext(initValue);

let useTodoList = () => React.useContext(context);
