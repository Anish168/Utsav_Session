import { useContext } from "react";
import { TodoItemsContext } from "../store/to-do-store";

// function TodoItemm({ todoName, todoDate, onDeleteClick }) {
function TodoItemm({ todoName, todoDate }) {
  const { delNewItems } = useContext(TodoItemsContext);
  return (
    <div className="container">
      <div className="row kg-row">
        <div className="col-6">{todoName}</div>
        <div className="col-4">{todoDate}</div>
        <div className="col-2">
          <button
            type="button"
            className="btn btn-danger kg-button"
            onClick={() => delNewItems(todoName)}
          >
            Delete
          </button>
        </div>
      </div>
    </div>
  );
}

export default TodoItemm;
