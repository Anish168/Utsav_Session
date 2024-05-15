package main

import "fmt"

func greeting() {
	fmt.Println("Good evening..!!")
}

func working(name string) {
	fmt.Println("Sleeping", name)
}

func sum(a, b int) int {
	return a + b
}

func multiply(a, b int) int {
	result := a * b
	return result
}

func main() {
	fmt.Println("Started")
	greeting()
	working("Utsav")
	fmt.Println(sum(2, 3))
	fmt.Println(multiply(2, 3))
}
