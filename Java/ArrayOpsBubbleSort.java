import java.util.Scanner;
public class ArrayOperationsUsingBubbleSort {
	public static void bubSort(int a[], int n) {
		for (int i = 0; i < n - 2; i++) {
			for (int j = 0; j <= n-2-i; j++) {
				if (a[j] > a[j + 1]) {
					int temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		System.out.println("After Sorting Elements ");
		for (int b : a) {
			System.out.println(b);
		}
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter SIZE of Array");
		int len = sc.nextInt();
		int arry[] = new int[len];
		System.out.println("Enter Array Elements ");
		for (int i = 0; i < len; i++) {
			arry[i] = sc.nextInt();
		}
		bubSort(arry, len);
		System.out.println("smallest element is :"+arry[0]);
		System.out.println("largest element is :"+arry[len-1]);
		System.out.println("Enter which element you want");
		int k=sc.nextInt();
		for(int i=0;i<len;i++)
		{
			if(k==arry[i])
			{
				System.out.println("element is found in "+k+ "th position");
			}
			else 
			{
				System.out.println("element is not found");
			}
		}
	}
}
