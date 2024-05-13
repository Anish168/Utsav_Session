// import React, { useState } from "react";
// import { Card } from "./Card";

// export const Cards = ({ courses, category }) => {
//   let coursesToDisplay;
//   if (category === "All") {
//     function getCourses() {
//       let allCourses = [];
//       Object.values(courses).forEach((array) => {
//         array.forEach((courseData) => {
//           allCourses.push(courseData);
//         });
//       });
//       return allCourses; // Make sure to return allCourses from the function
//     }
//     coursesToDisplay = getCourses();
//   } else {
//     coursesToDisplay = courses[category];
//   }

//   return (
//     <div className="flex flex-wrap justify-center gap-4 mb-4">
//       {coursesToDisplay().map((course) => (
//         <Card course={course} />
//       ))}
//     </div>
//   );
// };
import React, { useState } from "react";
import { Card } from "./Card";

export const Cards = ({ courses, category }) => {
  const [likedCourses, setLikedCourses] = useState([]);

  let coursesToDisplay;

  if (category === "All") {
    function getCourses() {
      let allCourses = [];
      Object.values(courses).forEach((array) => {
        array.forEach((courseData) => {
          allCourses.push(courseData);
        });
      });
      return allCourses; // Make sure to return allCourses from the function
    }
    coursesToDisplay = getCourses();
  } else {
    coursesToDisplay = courses[category];
  }

  return (
    <div className="flex flex-wrap justify-center gap-4 mb-4">
      {coursesToDisplay.map((course) => (
        <Card
          course={course}
          key={course.id}
          likedCourses={likedCourses}
          setLikedCourses={setLikedCourses}
        /> // Make sure to include key prop
      ))}
    </div>
  );
};
