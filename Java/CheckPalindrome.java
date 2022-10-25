package SamplePgms;

import java.util.Scanner;

public class CheckPalindrome {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner obj=new Scanner(System.in);
	    String ch;
	   int i,j,l,flag=0;
	    System.out.println("Enter a string:");
	    ch=obj.next();ch=ch.toLowerCase();
	    l=ch.length();
	    for(i=0,j=l-1;i<=l&&j>=0;i++,j--)
	    {
	    	if(ch.charAt(i)==ch.charAt(j))
	    		flag=0;
	    	else
	    		flag=1;
	    }
	    if(flag==1)
	    	System.out.println("It's not a palindrome!");
	    else
	    	System.out.println("It is a palindrome");
	}

}
