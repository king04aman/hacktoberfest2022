package main

import "fmt"

func main() {
	var num int = 0
	var rem int = 0
	var res int = 0
	var temp int = 0

	fmt.Print("Enter Number: ")
	fmt.Scanf("%d", &num)

	temp = num
MyLbl:

	rem = num % 10
	res = res + (rem * rem * rem)
	num = num / 10

	if num > 0 {
		goto MyLbl
	}

	if temp == res {
		fmt.Printf("Number is armstrong")
	} else {
		fmt.Printf("Number is not armstrong")
	}
}
