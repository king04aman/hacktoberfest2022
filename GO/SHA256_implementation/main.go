package main

import (
	"fmt"
	"os"

	"sha/shaimpl"
)

func main() {
	// init
	sha := shaimpl.Sha256{}

	// input string
	var str string

	// when no command line argument is provided
	if len(os.Args) < 2 {
		str = ""
	} else {
		str = os.Args[1]
	}

	// calc the hash
	hash := sha.Hash(str)

	// print the byte array and hexstring
	fmt.Println("\nInput provided:", str)
	fmt.Println("\nSHA256 Hashed Byte Array:\n✅", hash)
	fmt.Println("\nSHA256 Hashed Hex string:\n✅", shaimpl.ToHexString(hash))
}
