package main

import "fmt"

func main() {
	fmt.Println("Switch")

	num := 7
	switch num {
	case 1:
		fmt.Println("One")
	case 2:
		fmt.Println("Two")
	case 3:
		fmt.Println("Three")
	case 4:
		fmt.Println("Four")
	default:
		fmt.Println("Number doesnot exit")
	}

}
