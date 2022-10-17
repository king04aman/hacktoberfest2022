package com.codewithme;
import java.util.Scanner;

public class factorial {
    public static void main(String[] args){
        Scanner Sc= new Scanner(System.in);
        int a;
        System.out.print("Enter the number :");
        a=Sc.nextInt();
        int fact=1;
        for( int i=a; i>1; i--){
            fact*=i;
        }
        System.out.println("Factorial is :"+fact);
    }
}
