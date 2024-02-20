import "./ProductForm.css";
import { useState } from "react";
function ProductForm() {
  const [title, setTitle] = useState("");
  const [date, setDate] = useState("");

  function titleChangeHandler(event) {
    // console.log(event.target.value);
    setTitle(event.target.value);
  }

  function dateChangeHandler(event) {
    setDate(event.target.value);
  }

  return (
    <form>
      <div className="new-product_controls">
        <div className="new-product_control">
          <label>Title</label>
          <input type="text" onChange={titleChangeHandler}></input>
        </div>

        <div className="new-product_control">
          <label>Date</label>
          <input
            type="date"
            min="2023- 01 -1"
            max="2023-12-12"
            onChange={dateChangeHandler}
          ></input>
        </div>

        <div className="new-product_button">
          <button type="submit">Add Product</button>
        </div>
      </div>
    </form>
  );
}

export default ProductForm;
