import { createContext } from "react";

// export const TodoItemsContext = createContext([]);
export const TodoItemsContext = createContext({
  todoItems: [],
  addNewItems: () => {},
  delNewItems: () => {},
});
