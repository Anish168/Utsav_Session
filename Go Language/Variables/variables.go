package main

import "fmt"

func main() {
	// fmt.Println("cutie")
	var age int = 25
	var bro = "utsav"
	var height float64 = 5.9
	var name string = "John"
	var isAdult bool = true
	// bro = "abc"
	// Print the values of variables
	fmt.Println("Name:", name)
	fmt.Println("Age:", age)
	fmt.Println("Height:", height)
	fmt.Println("Is Adult:", isAdult)
	fmt.Println("Brother:", bro)

	const pi = 3.14
	fmt.Println("The value of Pi : ", pi)

	person := "utsav"
	fmt.Println("Brother:", person)

	var private = "utsav" //koi access nhi kr skta londe ko
	var Public = "Anish"  //bhr ghumne jaa skta hu
	fmt.Println("Brother:", private)
	fmt.Println("Brother:", Public)

}
