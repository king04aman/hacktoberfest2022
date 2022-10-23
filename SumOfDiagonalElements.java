import java.util.*;
public class SumOfDiagonalElements
{
public static void main(String args[])
{
    Scanner sc = new Scanner (System.in);
    System.out.println("Enter order of aquare matrix");
    int m = sc.nextInt();
    int mat[][] = new int[m][m];
    System.out.println("Enter elements of matrix");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        mat[i][j]=sc.nextInt();
    }
    //Displaying original matrix
    System.out.println("Original matrix:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        System.out.print(mat[i][j]+" ");
        System.out.println();
    }
    //Calculating sum of diagonal elements of matrix
    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((i==j) || (i+j==m-1))
            sum+=mat[i][j];
        }
    }
System.out.println("Sum of diagonal elements of matrix is "+sum);
}
}