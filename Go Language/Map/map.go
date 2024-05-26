package main

import "fmt"

func main() {
	fmt.Println("Started")

	student := make(map[string]int)
	student["Utsav"] = 79
	student["Anish"] = 70

	// fmt.Println("Marks is:", student["Anish"])
	// student["Anish"] = 90
	// fmt.Println("Marks is:", student["Anish"])
	// fmt.Println("Marks is:", student["bob"])
	// // delete(student, "Anish")
	// fmt.Println("Marks is:", student["Anish"])

	// grade, exists := student["Utsav"]
	// fmt.Println(grade)
	// fmt.Println(exists)

	for name, grade := range student {
		println(name, grade)
	}
}
