//UserName: ArpitSahu01

// Plaindrome number means when a Number is reversed
// It looks same as it was before reversing.
// Examaple:
// 35653 when reversed gives same.
// Ana when reversed gives same(ignoring Lower and UPPER case)

import java.util.Scanner;

public class PalindromeNumber{
    public static void main(String[] arg){
        int rem,sum=0,temp;
        System.out.println("Enter the number");
        Scanner num = new Scanner(System.in);
        int n = num.nextInt();

        temp=n;
        while(n>0){
            rem=n%10;  //getting remainder
            sum=(sum*10)+rem;
            n=n/10;
        }
        if(temp==sum)
            System.out.println("It's a Palindrome number ");
        else
            System.out.println("It is not palindrome");
    }
}
