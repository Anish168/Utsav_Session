// var outerdiv = document.getElementById("outer");
// outerdiv.addEventListener('mouseover', function () {
//     console.log("Mouse Over");
// });
// outerdiv.addEventListener('mouseout', function () {
//     console.log("Mouse Out");
// });
// outerdiv.addEventListener('mouseenter', function () {
//     console.log("Mouse Enter");
// });
// outerdiv.addEventListener('oncontextmenu', function () {
//     console.log("Mouse right click Enter");
// });
// outerdiv.addEventListener('ondbclick', function () {
//     console.log("Mouse right click Enter");
// });
// window.addEventListener('scroll', function () {
//     console.log("Scrolling");
// });
window.addEventListener('wheel', function (event) {
    if (event.deltaY < 0) {
        console.log("scrolling up")
    }
    else if (event.deltaY > 0) {
        console.log("scrolling down")
    }
});
window.addEventListener('scroll', function () {
    if(window.pageYOffset > 200)
    {
        this.document.body.style.background="red";
    }
});

// var button = document.getElementById('search');
// button.onmouseenter = function (event) {
//  console.log("Mouse entered element - ");
// }

// var searchInput=document.getElementById('search');
// searchInput.addEventListener('keypress',function(){
//     console.log("Key is pressed");
// })

// document.addEventListener('keypress',function(){
//     console.log("Key is pressed");
// });
// document.addEventListener('keydown',function(){
//     console.log("Keydown is pressed");
// })
// document.addEventListener('keyup',function(){
//     console.log("Keyup is pressed");
// })
document.addEventListener('keydown', function (event) {
    console.log("Keydown is pressed", event.keyCode);
})
