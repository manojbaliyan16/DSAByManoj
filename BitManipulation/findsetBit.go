package main

import "fmt"

func FindSetBit(sum int) int {
	count := 0
	for sum > 0 {

		//fmt.Println(count)
		count += sum & 1
		sum >>= 1
	}
	return count
}

func main() {
	A := 10

	bit := FindSetBit(A)
	fmt.Println(bit)
}
