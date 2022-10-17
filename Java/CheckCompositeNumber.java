package BasicNumericPrograms;
public class CheckCompositeNumberOrNot {
	public static void main(String[] args) {
	  int n=11;
	  compositeNumber(n);
	}
	public static void compositeNumber(int n)
	{
		int c=0; 
		for(int i=2;i<=n;i++)
		{
		if(n%i==0)
		{
			c++;
		}
		}
		if(c>1)
		{
			System.out.println("It is a composite number");
		}else
		{
			System.out.println("It is not a composite number");
		}
	}
}
