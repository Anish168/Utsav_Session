// let elm = document.getElementById("intro");
// get the html element
// let content = elm.innerHTML;
// console.log(content);

// set the html element
// elm.innerHTML = "<h1>this is a heading</h1>"




// Create and Append Element in JavaScript
let h1 = document.createElement('h3');
// elm.appendChild(h1);

// let text = document.createTextNode("This is a h3 tag");
// h1.appendChild(text);
// elm.appendChild(h1);

// alternative of createTextNode
// h1.textContent = "Anish";
// elm.appendChild(h1);
// also we can read
// let par = document.getElementById("para");
// console.log(par.textContent) 

// class/id lagana ho try pr
// h1.className="try";
// h1.id="unique";

// let list1= document.getElementById("list");
// let item = document.createElement("li");
// item.textContent="Hey dude";
// list1.appendChild(item);



// Insert Before an Element in JavaScript
//starting
// let list1= document.getElementById("list");
// let item = document.createElement("li");
// item.textContent="Hey dude";
// let pos = list1.firstElementChild;
// list1.insertBefore(item,pos);

// 2nd pr
// let list1= document.getElementById("list");
// let item = document.createElement("li");
// item.textContent="Hey dude";
// let pos = list1.firstElementChild.nextElementSibling;
// list1.insertBefore(item,pos);

// kisi body m add krna
// let parent = document.body;
// let elm = document.createElement("h2");
// elm.textContent = "this is new element";
// let list = document.getElementById("list");
// parent.insertBefore(elm, list);




// Remove Child Element in JavaScript
// let parent = document.getElementById("menu");
// // let elm = parent.firstElementChild;
// let elm = parent.firstElementChild.nextElementSibling;
// parent.removeChild(elm);
// document.body.removeChild(parent);





// Clone or Copy Element in JavaScript
// let men = document.getElementById("menu");
// // let cloneElm = menu.cloneNode();    //sirf parent copy hoga by default false
// let cloneElm = men.cloneNode(true);
// // console.log(cloneElm);
// cloneElm.id = "mobile-menu";
// document.body.appendChild(cloneElm);





// Insert Adjacent HTML in JavaScript
// let elm = document.getElementById("intro");
// let html = "<h1>new heading</h1>";
// elm.insertAdjacentHTML("beforebegin",html);

