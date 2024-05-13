import React from "react";

export const Filter = ({ filterData, category, setCategory }) => {
  function filterHandler(title) {
    console.log("Clicked");
    setCategory(title);
  }
  return (
    <div className="w-11/12 flex flex-wrap max-w-max space-x-4 gap-y-4 mx-auto py-4 justify-center">
      {filterData.map((data) => (
        <button
          onClick={() => filterHandler(data.title)}
          className={`text-lg px-2 py-1 rounded-md font-medium text-white bg-black hover:bg-opacity-50 border-2 transition-all duration-300`}
        >
          {data.title}
        </button>
      ))}
    </div>
  );
};
