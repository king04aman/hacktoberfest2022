package main

import (
	"fmt"
	"log"
)

func main() {
	var firstNum, secondNum int
	print("Enter the first number: ")
	_, err := fmt.Scan(&firstNum)
	if err != nil {
		log.Fatal(err)
	}
	print("Enter the second number: ")
	_, err2 := fmt.Scan(&secondNum)
	if err2 != nil {
		log.Fatal(err)
	}
	fmt.Printf("Sum: %d\n", firstNum+secondNum)
}
