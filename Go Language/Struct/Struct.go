package main

import "fmt"

type Person struct {
	FirstName string
	lastName  string
	age       int
}

type Address struct {
	street  string
	city    string
	country string
}

type Contact struct {
	Email string
	Phone string
}

type Employee struct {
	Person
	Contact
	Address
}

func main() {
	fmt.Println("Started")
	employee := Employee{
		Person: Person{
			FirstName: "Frank",
			lastName:  "Miller",
			age:       45,
		},
		Address: Address{
			street:  "123 Main St",
			city:    "Anytown",
			country: "India",
		},
		Contact: Contact{
			Email: "frank@example.com",
			Phone: "555-1234",
		},
	}

	fmt.Println(employee.Person)

	// var utsav Person
	// utsav.FirstName = "Utsav"
	// utsav.lastName = "Jha"
	// utsav.age = 21

	// fmt.Println(utsav.FirstName)
	// fmt.Println(utsav.lastName)
	// fmt.Println(utsav.age)

	// person3 :=
	// 	Person{
	// 		FirstName: "abc",
	// 		lastName:  "xyz",
	// 		age:       21,
	// 	}

}
