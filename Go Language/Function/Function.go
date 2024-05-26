package main

import "fmt"

func greeting() {
	fmt.Println("Good Morning")
}

// func add(a, b int) int {
// 	return a + b
// }
func add(a, b int) (result int) {
	result = a + b
	return
}

func main() {
	fmt.Println("started")
	greeting()
	ans := add(2, 3)
	fmt.Println(ans)
}
