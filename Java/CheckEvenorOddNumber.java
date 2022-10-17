import java.util.Scanner;
public class CheckEvenOrOdd {
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter any Number");
		int n=scan.nextInt();
		int i=2;
			if(n%i==0)
			{
				System.out.println("It is an Even Number");
			}else
			{
				System.out.println("It is an Odd Number");
			}	
	}
}
