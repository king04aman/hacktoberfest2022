import java.util.Scanner;
public class CheckAlphabetOrNot
{
  public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    System.out.println("Enter any Number...");
	    char ch=sc.next().charAt(0);
		if(ch>'a' && ch<'z' || ch>'A' && ch<'Z')
		{
			System.out.println("It is an alphabet");
		}else
		{
			System.out.println("It is not an alphabet");
		}		
}
}
