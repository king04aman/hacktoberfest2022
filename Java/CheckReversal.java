import java.util.Scanner;
public class CheckReversalEqual {
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter any Number");
		int n=scan.nextInt();
		int Orginal=n;
		int rem,rev=0;
		while(n>0)
		{
			rem=n%10;
			rev=rev*10+rem;
			n/=10;
		}
		System.out.println("Reverse Number is "+rev);
		if(Orginal==rev)
		{
			System.out.println("It is Reverse is Equal");
		}
		else
		{
			System.out.println("It is Reverse is Not eqaul");
		}
	}
}
