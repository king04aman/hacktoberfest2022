import java.util.Arrays;
import java.util.Scanner;
public class CheckAnagramOrNot
{
	public static void main(String[] args)
	{
	   Scanner s=new Scanner(System.in);
	    System.out.println("Enter any String");
	    String x=s.nextLine();	
	    System.out.println("Enter any String");
	     String y=s.nextLine();	
	     char [] x1=x.toCharArray();
	     char [] y1=y.toCharArray();
	     Arrays.sort(x1);
	     Arrays.sort(y1);
	     Boolean result=Arrays.equals(x1,y1);
	     if(result==true)	
	     System.out.println("It is an Anagram");
		}
                        else
		{
			System.out.println("It is not an Anagram");
		}	
	}
}
