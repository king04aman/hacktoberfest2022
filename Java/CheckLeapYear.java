import java.util.Scanner;
public class CheckLeapYearOrNot {
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter any Number");
		int yr=scan.nextInt();
		if(yr%4==0 && yr%100!=0)
		{
			System.out.println("It is a leap year");
		}
		else
			if(yr%100==0 && yr%400==0)
			{
				System.out.println("It is leap year");
			}
			else
				if(yr%400==0)
				{
					System.out.println("It is a leap year");
				}
				else
				{
					System.out.println("It is not leap Year");
				}
	}
}
