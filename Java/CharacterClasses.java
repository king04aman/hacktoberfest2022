import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
public class CharacterClasses
{
   public static void main(String[] args) {
	   Scanner sc=new Scanner(System.in);
	   System.out.println("Enter a string ");
	   String x=sc.nextLine();
	Pattern p=Pattern.compile(x);
	Matcher m=p.matcher("a7b@z#9");
	while(m.find())
	{
		System.out.print(m.group());
	}	
}
}
