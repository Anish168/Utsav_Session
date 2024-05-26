package main

import "fmt"

func main() {
	fmt.Println("Started")
	// for i := 0; i < 5; i++ {
	// 	println(i)
	// }

	number := []int{1, 2, 3, 4, 5}
	// for index, value := range number {
	// 	fmt.Println(index, value)
	// }
	for i := 0; i < 5; i++ {
		fmt.Println(number[i])
	}

	msg := "Hello Golang"
	for index, value := range msg {
		fmt.Printf("Index: %d, character: %c\n", index, value)
	}

}
