//github username - Debangshu97
/*Java Program to add two matrix*/
import java.util.Scanner;
public class AddTwoNxM_Matrix
{
    public static void main(String[] args) 
    {
        int p, q, m, n;    //Declare matrix size
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows in the first matrix:");
        p = sc.nextInt();    //Initialize first matrix size
        System.out.print("Enter the number of columns in the first matrix:");
        q = sc.nextInt();   //Initialize first matrix size
        System.out.print("Enter the number of rows in the second matrix:");
        m = sc.nextInt();   //Initialize second matrix size
        System.out.print("Enter the number of columns in the second matrix:");
        n = sc.nextInt();   //Initialize second matrix size
        if (p == m && q == n) 
        {
            int a[][] = new int[p][q];    //Declare first matrix
            int b[][] = new int[m][n];    //Declare second matrix
            int c[][] = new int[m][n];    //Declare third matrix
            //Initialize the first matrix
            System.out.println("Enter all the elements of first matrix:");
            for (int i = 0; i < p; i++) 
            {
                for (int j = 0; j < q; j++) 
                {
                    a[i][j] = sc.nextInt();
                }
            }
            System.out.println("");
            //Initialize the second matrix
            System.out.println("Enter all the elements of second matrix:");
            for (int i = 0; i < m; i++) 
            {
                for (int j = 0; j < n; j++) 
                {
                    b[i][j] = sc.nextInt();
                }
            }
            System.out.println("");
            //Print the first matrix
            System.out.println("First Matrix:");
            for (int i = 0; i < p; i++) 
            {
                for (int j = 0; j < q; j++) 
                {
                    System.out.print(a[i][j]+" ");
                }
                System.out.println("");
            }
            //Print the second matrix
            System.out.println("Second Matrix:");
            for (int i = 0; i < m; i++) 
            {
                for (int j = 0; j < n; j++) 
                {
                    System.out.print(b[i][j]+" ");
                }
                System.out.println("");
            }
            //Loop to add matrix elements
            for (int i = 0; i < p; i++) 
            {
                for (int j = 0; j < n; j++) 
                {
                    for (int k = 0; k < q; k++) 
                    {
                        c[i][j] = a[i][j] + b[i][j];
                    }
                }
            }
            //Print the resultant matrix
            System.out.println("Matrix after addition:");
            for (int i = 0; i < p; i++) 
            {
                for (int j = 0; j < n; j++) 
                {
                    System.out.print(c[i][j]+" ");
                }
                System.out.println("");
            }
        }
        else
        {
            System.out.println("Addition not possible");
            System.out.println("Try Again");
        }
    }
}
