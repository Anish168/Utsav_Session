package main

import "fmt"

func main() {
	fmt.Println("Started")
	var fruits [5]string
	// fruits[0] = "Mango"
	// fruits[1] = "Apple"
	// fruits[2] = "Kiwi"
	// fruits[3] = "Banana"
	// fruits[4] = "Guava"
	// fmt.Println(fruits)
	// fmt.Println(fruits[2])
	fmt.Println(fruits)
	fmt.Printf("%q", fruits)

	marks := [5]int{1, 2, 3, 4, 5}
	fmt.Println(marks)
	fmt.Println(len(marks))

}
