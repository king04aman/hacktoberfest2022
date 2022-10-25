package SamplePgms;
import java.util.Scanner;
import java.lang.Math;
public class CheckPrime {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num,c=0;
		Scanner obj=new Scanner(System.in);
		System.out.println("Enter a number:\n");
		num=obj.nextInt();
		for(int i=2;i<=Math.sqrt(num);i++)
		{
		    if(num%i==0)
		    ++c;
		}
		if (num==1)
			System.out.println(num+" is not prime");
		if(c>=1)
			System.out.println(num+" is not prime");
		else 
			System.out.println(num+" is Prime");
	 

	}

}
