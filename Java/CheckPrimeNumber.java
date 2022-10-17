import java.util.Scanner;
public class CheckNumberPrimeOrNot
{
	public static void main(String[] args) 
	{
		Scanner s=new Scanner(System.in);
		System.out.println("Enter any number");
		int x=s.nextInt();
		boolean prime=true;
		for(int i=2;i<x;i++)
		{
			if(x%i==0)
			{
				prime=false;
				break;
			}
		}
		if(prime==true)
		{
		System.out.println("Given number is prime");
		}
		else
		{
			System.out.println("Given number is not prime");
		}
	}
}