// import "./App.css";
// import NewProduct from "./components/NewProduct";
// import Products from "./components/Products";
// const App = () => {
//   const products = [
//     {
//       id: "p1",
//       title: "Nirma",
//       amount: 100,
//       date: new Date(2021, 8, 10),
//     },
//     {
//       id: "p2",
//       title: "Surf Excel",
//       amount: 200,
//       date: new Date(2021, 2, 2),
//     },
//     {
//       id: "p3",
//       title: "Tide",
//       amount: 130,
//       date: new Date(2021, 12, 20),
//     },
//     {
//       id: "p4",
//       title: "Maggi",
//       amount: 10,
//       date: new Date(2021, 8, 1),
//     },
//   ];

//   return (
//     <div>
//       <Products items={products} />
//     </div>
//   );
// };
// export default App;
import "./App.css";
import NewProduct from "./components/NewProduct";
import Products from "./components/Products";
const App = () => {
  const products = [
    {
      id: "p1",
      title: "Nirma",
      amount: 100,
      date: new Date(2021, 8, 10),
    },
    {
      id: "p2",
      title: "Surf Excel",
      amount: 200,
      date: new Date(2021, 2, 2),
    },
    {
      id: "p3",
      title: "Tide",
      amount: 130,
      date: new Date(2021, 12, 20),
    },
    {
      id: "p4",
      title: "Maggi",
      amount: 10,
      date: new Date(2021, 8, 1),
    },
  ];

  return (
    <div>
      <NewProduct></NewProduct>

      <Products items={products} />
    </div>
  );
};
export default App;