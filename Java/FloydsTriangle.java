// Github Username = Tikshita-Singh
//JAVA program to print Floyds Triangle

import java.util.*;

public class FloydsTriangle {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of rows");
		int n = sc.nextInt();	
		int t = 1;
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= i;j++) {
				System.out.print(t + " ");
				t++;
			}
			System.out.println();
		}
	}
}
