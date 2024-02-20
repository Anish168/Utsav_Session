// import React from "react";
import ProductDate from "./ProductDate";
import Card from "./Card";
import "./ProductItem.css";

// const ProductItem = (props) => {
//   function clickHandler() {
//     console.log("button clicked");
//   }

//   return (
//     <Card className="product-item">
//       <ProductDate date={props.date} />
//       <div className="product-item_description">
//         <h2>{props.title}</h2>
//       </div>

//       <button onClick={clickHandler}>Add to Cart</button>
//     </Card>
//   );
// };

// export default ProductItem;

import React, { useState } from "react";
const ProductItem = (props) => {
  // let title = props.title;

  const [title, setTitle] = useState(props.title);

  function clickHandler() {
    // title = "popcorn";
    setTitle("popcorn");
    console.log("button clicked");
  }

  return (
    <Card className="product-item">
      <ProductDate date={props.date} />
      <div className="product-item_description">
        <h2>{title}</h2>
      </div>

      <button onClick={clickHandler}>Add to Cart</button>
    </Card>
  );
};

export default ProductItem;
