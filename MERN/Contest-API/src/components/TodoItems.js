import { useContext } from "react";
import { TodoItemsContext } from "../store/to-do-store";
import TodoItem from "./TodoItemm";
import styles from "./TodoItems.module.css";

// const TodoItems = ({ onDeleteClick }) => {
const TodoItems = () => {
  // const todoItemsfromContext = useContext(TodoItemsContext);
  // // console.log(`items form context: ${todoItemsfromContext}`);
  // console.log(todoItemsfromContext);

  // const todoItems = useContext(TodoItemsContext);

  const { todoItems } = useContext(TodoItemsContext);

  return (
    <div className={styles.itemsContainer}>
      {todoItems.map((item) => (
        <TodoItem todoDate={item.dueDate} todoName={item.name}></TodoItem>
      ))}
    </div>
  );
};

export default TodoItems;
