// import { createStore } from "redux";

// const counterReducer = (store, action) => {
//   return store;
// };

// const counterStore = createStore(counterReducer);

// export default counterStore;

// import { createStore } from "redux";
// const INITIAL_VALUE = {
//   counter: 0,
// };
// const counterReducer = (store = INITIAL_VALUE, action) => {
//   return store;
// };

// const counterStore = createStore(counterReducer);

// export default counterStore;

// import { createStore } from "redux";
// const INITIAL_VALUE = {
//   counter: 0,
// };
// const counterReducer = (store = INITIAL_VALUE, action) => {
//   //   console.log("Action recieved", action);
//   if (action.type === "INCREMENT") {
//     return { counter: store.counter + 1 };
//   } else if (action.type === "DECREMENT") {
//     return { counter: store.counter - 1 };
//   } else if (action.type === "ADD") {
//     return { counter: store.counter + Number(action.payload.num) };
//   } else if (action.type === "SUBTRACT") {
//     return { counter: store.counter - Number(action.payload.num) };
//   }
//   return store;
// };

// const counterStore = createStore(counterReducer);

// export default counterStore;

import { createStore } from "redux";
const INITIAL_VALUE = {
  counter: 0,
  privacy: false,
};
const counterReducer = (store = INITIAL_VALUE, action) => {
  //   console.log("Action recieved", action);
  if (action.type === "INCREMENT") {
    return { counter: store.counter + 1, privacy: store.privacy };
  } else if (action.type === "DECREMENT") {
    return { counter: store.counter - 1, privacy: store.privacy };
  } else if (action.type === "ADD") {
    return {
      counter: store.counter + Number(action.payload.num),
      privacy: store.privacy,
    };
  } else if (action.type === "SUBTRACT") {
    return {
      counter: store.counter - Number(action.payload.num),
      privacy: store.privacy,
    };
  } else if (action.type === "PRIVACY_TOGGLE") {
    return { counter: store.counter, privacy: !store.privacy };
  }
  return store;
};

const counterStore = createStore(counterReducer);

export default counterStore;
