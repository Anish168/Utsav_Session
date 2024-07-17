// Change Inline Style in JavaScript
// let btn = document.getElementById("btn");
// btn.style.cssText = "background-color: red; color:white;";   //replace kr deta h agar  alredy styling ki hui h toh inline m by using inline style property
// btn.setAttribute('style', 'color:white; background-color:red;');
// btn.style.background = "red";
// btn.style.cssText += "background: red; border : 1px solid green;";


// Get Computed CSS in JavaScript
// let btn = document.getElementById("btn");
// let css = getComputedStyle(btn);
// // console.log(css);
// console.log(css.color);



// Get Width and Height of Element in JavaScript
let box = document.getElementById("box");
let Width = box.clientHeight;
let Height = box.clientWidth;

console.log(Width);
console.log(Height);
