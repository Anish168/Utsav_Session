package main

import (
	"fmt"
)

func main() {
	fmt.Println("started")
	fmt.Println("Enter your brother''s name: ")
	var name string
	fmt.Scan(&name)
	fmt.Println(name)
	// reader := bufio.NewReader(os.Stdin)
	// userInput, _ := reader.ReadString('\n') // read until \n
	// fmt.Println(userInput)

}
