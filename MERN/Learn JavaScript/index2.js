// function btnClick(){
//     alert("button was clicked!")
// }
function btnClick() {
    alert("button was clicked!")
}

let bt = document.getElementById("btn");
// bt.addEventListener('click',btnClick);

// can also use anonymous fucntion
// bt.addEventListener('click', function () {
//     alert("btn was clicked");
// });




// Remove Event Listener
function click1(){
    console.log("click1 activated");
}

function click2(){
    console.log("click2 activated");
}

bt.addEventListener('click',click1);
bt.addEventListener('click',click1);
bt.removeEventListener('click',click2);

