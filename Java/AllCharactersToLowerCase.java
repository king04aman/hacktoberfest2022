import java.util.Scanner;
public class AllCharactersToLowerCasr
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		System.out.println("Enter String");
		String x=input.nextLine();
		int size=x.length();
		char [] x1=x.toCharArray();
		int i=0;
		while(i!=size)
		{
			if(x1[i]!=' ')
			{
				x1[i]=(char) (x1[i]+32);
			}
			i++;
		}
		System.out.println(x);
		System.out.println(x1);
	}
}
