function sum(a,b){
    return a + b;
}

// arrow function
// let sumA = (a,b) =>{
//     return a + b;
// }

// console.log(sum(2,3));
// console.log(sumA(2,3));

// let sumA = (a,b) => a + b;  //jab ek line ho or wo return kr rha ho

// jab argument bhi ek ho
// function double(a)
// {
//     return 2*a;
// }
// let doubleA = a => 2*a;
// console.log(double(3));
// console.log(doubleA(3));


// jab argumnet na ho
// function random()
// {
//     return Math.random();
// }
// let randomA = () => Math.random();
// console.log(randomA());


// arrown function in anonymous fucntion
document.addEventListener('click', function()
{
    console.log("clicked..");
});

// arrow
document.addEventListener('click',() =>
{
    console.log("clicked..");
});




