import { useContext, useState } from "react";
import { TodoItemsContext } from "../store/to-do-store";

// function AddToDo({ onNewItem }) {

//   const [todoName, setTodoName] = useState();
//   const [dueDate, setDueDate] = useState();

//   const handleNameChange = (event) => {
//     setTodoName(event.target.value);
//   };

//   const handleDateChange = (event) => {
//     setDueDate(event.target.value);
//   };

//   const handleAddButtonClicked = () => {
//     onNewItem(todoName, dueDate);
//     setDueDate("");
//     setTodoName("");
//   };

//   return (
//     <div className="container text-center">
//       <div className="row kg-row">
//         <div className="col-6">
//           <input
//             type="text"
//             placeholder="Enter Todo Here"
//             value={todoName}
//             onChange={handleNameChange}
//           />
//         </div>
//         <div className="col-4">
//           <input type="date" value={dueDate} onChange={handleDateChange} />
//         </div>
//         <div className="col-2">
//           <button
//             type="button"
//             className="btn btn-success kg-button"
//             onClick={handleAddButtonClicked}
//           >
//             Add
//           </button>
//         </div>
//       </div>
//     </div>
//   );
// }

// export default AddToDo;
function AddToDo({ onNewItem }) {
  const { addNewItems } = useContext(TodoItemsContext);
  const [todoName, setTodoName] = useState();
  const [dueDate, setDueDate] = useState();

  const handleNameChange = (event) => {
    setTodoName(event.target.value);
  };

  const handleDateChange = (event) => {
    setDueDate(event.target.value);
  };

  const handleAddButtonClicked = () => {
    addNewItems(todoName, dueDate);
    setDueDate("");
    setTodoName("");
  };

  return (
    <div className="container text-center">
      <div className="row kg-row">
        <div className="col-6">
          <input
            type="text"
            placeholder="Enter Todo Here"
            value={todoName}
            onChange={handleNameChange}
          />
        </div>
        <div className="col-4">
          <input type="date" value={dueDate} onChange={handleDateChange} />
        </div>
        <div className="col-2">
          <button
            type="button"
            className="btn btn-success kg-button"
            onClick={handleAddButtonClicked}
          >
            Add
          </button>
        </div>
      </div>
    </div>
  );
}

export default AddToDo;
