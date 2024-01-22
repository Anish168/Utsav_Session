// var innerDiv = document.getElementById('inner');
// innerDiv.addEventListener('click', function () {
//     console.log('Click Inner Div');
// });

var outerDiv = document.getElementById('outer');
outerDiv.addEventListener('click', function () {
    console.log('Click outer Div');
});

document.addEventListener('click', function () {
    console.log('Click Document');
});

var innerDiv = document.getElementById('inner');
innerDiv.addEventListener('click', function (event) {
    console.log('Click Inner Div');
    event.stopPropagation()
;});