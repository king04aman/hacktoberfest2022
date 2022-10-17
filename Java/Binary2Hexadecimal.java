import java.util.Scanner;
public class BinaryToHexadecimal {
	public static void main(String[] args) {
	    char hex[]= {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	    binaryToHexadecimal(hex);
	}
	public static void binaryToHexadecimal(char []hex)
	{
		int bnum,rem;
		String hexanum="";
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Binary Number");
		bnum=sc.nextInt();
		while(bnum>0)
		{
			rem=bnum%16;
			bnum/=16;
			hexanum+=hex[rem];
		}
		System.out.println("Hexa Decimal number is "+hexanum);
	}
}
