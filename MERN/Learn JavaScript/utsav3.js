function btnClick(){
    alert("alert has been invoked");
}

let n=document.getElementById("btn");
// n.addEventListener('click',btnClick);
n.addEventListener('click',function(){
    n.style.color='red';
    alert("i am an anonymous function created by master UD");
    
})


n.removeEventListener('click',btnClick);