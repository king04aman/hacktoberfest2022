import java.util.Scanner;
public class Main
{
    public static String palindrome(int n)
    {
        int n1=n;
        int rev=0;
        int rem=0;
        while(n1>0)
        {
            rem=n1%10;
            rev=rev*10+rem;
            n1/=10;
        }
        if(rev==n)
            return "It is a palindrome number";
        else
            return "It is not a palindrome number";
    }
	public static void main(String[] args) 
	{
	    Scanner sc=new Scanner(System.in);
		System.out.println("Enter the number to be checked for palindrome");
		int num=sc.nextInt();
		String p= palindrome(num);
		System.out.println(p);
	}
}
