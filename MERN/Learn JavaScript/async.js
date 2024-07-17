// setTimeout(function(){
//     console.log("Anish");
// },2000);

// const changeText = function(){
//     document.querySelector('h1').innerHTML = "Anish weds Cuties";
// }
// // setTimeout(changeText, 2000);

// const changeMe = setTimeout(changeText, 2000);

// // clearTimeout(changeMe);

// document.querySelector("#stop").addEventListener('click',function(){
//     clearTimeout(changeMe);
//     console.log("STOPPED");
// })

// setInterval(function(){
//     console.log("Anish",Date.now());
// },1000);

// const sayDate = function(){
//     console.log("Anish", Date.now());
// }
const sayDate = function(str){
    console.log(str, Date.now());
}
setInterval(sayDate, 1000, "utsav");

// const intervalid = setInterval(sayDate, 1000, "hi")
// clearInterval(intervalid);


