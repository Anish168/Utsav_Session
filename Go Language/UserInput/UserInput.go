package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	fmt.Println("Started")
	// var name string
	// fmt.Println("Enter Your name:")
	// fmt.Scan(&name)
	// fmt.Println("Your name is:", name)

	reader := bufio.NewReader(os.Stdin)
	name, _ := reader.ReadString('\n')
	fmt.Println("Your name is:", name)

}
