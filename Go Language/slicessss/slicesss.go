package main

import (
	"fmt"
)

func main() {
	fmt.Println("Started")
	// number := []int{1, 2, 3, 4, 5, 6}
	// fmt.Println("Number: ", number)
	// fmt.Println("Length: ", len(number))
	// fmt.Println("capacity: ", cap(number))

	number := make([]int, 3, 5)
	fmt.Println("Number: ", number)
	fmt.Println("Length: ", len(number))
	fmt.Println("capacity: ", cap(number))

}
