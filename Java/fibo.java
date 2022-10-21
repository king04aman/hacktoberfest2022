// Program to print the Fibonacci series up to a given number in java 
// GitHub Username: ManishGhimire127
// Name: Ekraj Ghimire


import java.util.Scanner;

public class fibo {
    public static void main(String[] args) {
        int a = 0 ;
        int b = 1 ; 
        int n=0;

        System.out.println("Enter the term for fibonaci series");
        Scanner in = new Scanner(System.in);
        int term = in.nextInt();

    while( n<term-3){
        System.out.println(a);
        System.out.println(b);
        a=a+b;
        b=b+a;
        n++;


    }


       in.close();    
    }

}
