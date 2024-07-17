
// window.addEventListener("keydown",fun);

// function fun(event){
//     console.log(event.key);
// }
// window.addEventListener("wheel",fun);

// function fun(event){
//     if(event.deltaY<0) console.log("scrollin up")
//     else console.log("scrollin down");
// }
// window.addEventListener('wheel',function(event)
// {
//     if(event.deltaY < 0) console.log("scrolling up..");
//     else if(event.deltaY > 0) console.log("scrolling down..");
// });
// window.addEventListener("scroll",fun);
// function fun(event)
// {
//     if(window.pageYOffset>250)
//     {
//         document.body.style.background="cyan";
//     }
// }

let n=document.getElementById("btn");
let m=document.getElementById("myDiv");


n.addEventListener('click',btnClicked,true);
m.addEventListener('click',divClicked,true);
document.body.addEventListener('click',docClicked,true);

function btnClicked(){
    console.log("button was clicked");
}
function divClicked()
{
    console.log("div was clicked");
}
function docClicked()
{
    console.log("doc was clicked");
}
for(let i = 1; i <= 100; i++)
{
    let newElement = document.createElement('p');
    newElement.textContent = "This is para "+ i;
    document.body.appendChild(newElement);
}