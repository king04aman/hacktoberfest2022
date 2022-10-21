// Writing a program to print the Fibonacci series up to a given number.
// Git Profile: www.github.com/rajksd01
// Name: Raj Kasaudhan


import java.util.Scanner;

public class fibanocci {
    public static void main(String[] args) {
        int a = 0 ;
        int b = 1 ; 
        int n=0;
        int temp =0;
        System.out.println("Enter the term for fibonaci series");
        Scanner in = new Scanner(System.in);
    int term = in.nextInt();
    while( n<term){
        System.out.println(a);
        temp =a+b;
        a=b;
        b=temp;
        n++;


    }
    
    
       in.close();    
    }
    
}
