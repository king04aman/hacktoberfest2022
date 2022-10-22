package main
import (
   "fmt"
   "strconv"
)
func NumOfSetBits(n int) int{
   count := 0
   for n !=0{
      count += n &1
      n >>= 1
   }
   return count
}
func main(){
   n := 20
   fmt.Printf("Binary representation of %d is: %s.
", n,
   strconv.FormatInt(int64(n), 2))
   fmt.Printf("The total number of set bits in %d is %d.
", n, NumOfSetBits(n))
}
