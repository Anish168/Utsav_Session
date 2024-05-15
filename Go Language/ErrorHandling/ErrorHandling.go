package main

import "fmt"

func divide(a, b int) (int, error) {
	if b == 0 {
		return 0, fmt.Errorf("denominator 0 h bhai")

	}
	return a / b, nil
}

func main() {
	fmt.Println("Started")
	// fmt.Println("ans is:-", divide(2, 4))
	// fmt.Println("ans is:-", divide(2, 0))
	// data, _ := divide(2, 0)
	data, error := divide(2, 0)
	fmt.Println("ans is:-", data)
	fmt.Println("ans is:-", error)
}
