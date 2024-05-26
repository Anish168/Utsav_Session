package main

import "fmt"

// func divide(a, b int) int {
// 	return b / a
// }
// func divide(a, b float64) float64 {
// 	return b / a
// }
func divide(a, b float64) (float64, error) {
	if b == 0 {
		return 0, fmt.Errorf("denominator is zero")
	}
	return b / a, nil
}
func main() {
	fmt.Println("started")
	// ans := divide(4, 2)
	// ans, _ := divide(4, 0)
	ans, err := divide(4, 0)

	fmt.Println(ans)
	fmt.Println(err)
}
