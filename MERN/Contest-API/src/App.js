import AppName from "./components/AppName";
import AddToDo from "./components/AddToDo";
import TodoItems from "./components/TodoItems";
import WelcomeMessage from "./components/WelcomeMessage";
import "bootstrap/dist/css/bootstrap.min.css";
import "./styles.css";
import { useState } from "react";
import { TodoItemsContext } from "./store/to-do-store";

function App() {
  const [todoItems, setTodoItems] = useState([]);

  // const handleNewItem = (itemName, itemDueDate) => {
  //   console.log(`New Item Added: ${itemName} Date:${itemDueDate}`);
  //   const newTodoItems = [
  //     ...todoItems,
  //     { name: itemName, dueDate: itemDueDate },
  //   ];
  //   setTodoItems(newTodoItems);
  // };

  // const handleDeleteItem = (todoItemName) => {
  //   const newTodoItems = todoItems.filter((item) => item.name !== todoItemName);
  //   setTodoItems(newTodoItems);
  // };
  const addNewItems = (itemName, itemDueDate) => {
    console.log(`New Item Added: ${itemName} Date:${itemDueDate}`);
    const newTodoItems = [
      ...todoItems,
      { name: itemName, dueDate: itemDueDate },
    ];
    setTodoItems(newTodoItems);
  };

  const delNewItems = (todoItemName) => {
    const newTodoItems = todoItems.filter((item) => item.name !== todoItemName);
    setTodoItems(newTodoItems);
  };

  // const defaultTodoItems = [{ name: "Buy ghee", dueDate: "today" }];
  return (
    // <TodoItemsContext.Provider value={defaultTodoItems}>
    // <TodoItemsContext.Provider value={todoItems}>
    // <TodoItemsContext.Provider value={{ todoItems, addNewItems, delNewItems }}>
    //   <center className="todo-container">
    //     <AppName />
    //     <AddToDo onNewItem={handleNewItem} />
    //     <WelcomeMessage></WelcomeMessage>
    //     <TodoItems onDeleteClick={handleDeleteItem}></TodoItems>
    //   </center>
    // </TodoItemsContext.Provider>

    // <TodoItemsContext.Provider value={{ todoItems, addNewItems, delNewItems }}>
    <TodoItemsContext.Provider value={{ todoItems, addNewItems, delNewItems }}>
      <center className="todo-container">
        <AppName />
        <AddToDo />
        <WelcomeMessage></WelcomeMessage>
        <TodoItems></TodoItems>
      </center>
    </TodoItemsContext.Provider>
  );
}

export default App;
