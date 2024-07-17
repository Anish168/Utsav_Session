// let b=document.getElementsByClassName("boba");
// let a=document.getElementById("1234");
// let c=a.innerHTML;
// // let e=document.getElementsByClassName("1234")
// a.innerHTML="<h1>loda</h1>";
// b.innerHTML="<h1>ANISH TATTA</h1>";
// console.log(c);
// console.log(a);
// console.log(b);



// let h1 = document.createElement('h3');
// a.append(h1);

// h1.textContent='I am an H1';
let m=document.getElementById("1234");

// let l=document.createElement('p');
// l.textContent="bobe ka juice";
// a.append(l);


// let n=document.createElement('h1');
// n.textContent="anish lulla";
// m.append(n);

let a = document.createElement('p');
// let chucchi = document.createTextNode(" choot ka paani");
a.textContent="bhosda";
let pussy=m.firstElementChild;
m.insertBefore(a,pussy);
// a.appendChild(chucchi);
// m.appendChild(a);
let b = document.createElement('p');
// let chucchi = document.createTextNode(" choot ka paani");
b.textContent="bhosda faad denge";
let pus=m.firstElementChild.nextElementSibling;
m.insertBefore(b,pus);