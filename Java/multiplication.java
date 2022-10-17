
import java.util.*;
class multiplcation
{
    void main()
    {
    int m,n,p,q,sum=0,i,j,k;
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter rows and columns of 1st matrix");
     m=sc.nextInt();
    n=sc.nextInt();
    int first[][]=new int[m][n];
    System.out.println("enter elements of 1st matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            first[i][j]=sc.nextInt();
        }
    }
    System.out.println(" 1st matrix -");
         for(i=0;i<m;i++)
       {
        for(j=0;j<n;j++)
        {
            System.out.print(first[i][j]+" ");
        }
        System.out.println();
    }
    System.out.println("Enter rows and columns of 1st matrix");
     p=sc.nextInt();
    q=sc.nextInt();
    if(n!=p)
    {
       System.out.println("not comformable can't do multiplication");
    }
    else
    {
        int second[][]=new int[p][q];
        int multiply[][]=new int[m][q];
   System.out.println("enter elements of 2nd matrix");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            second[i][j]=sc.nextInt();
        }
    }
    System.out.println(" 2nd matrix -");
         for(i=0;i<p;i++)
       {
        for(j=0;j<q;j++)
        {
            System.out.print(second[i][j]+" ");
        }
        System.out.println();
    }
    //multiplication
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            for(k=0;k<p;k++)
            {
                sum=sum+first[i][k]*second[k][j];
            }
            multiply[i][j]=sum;
            sum=0;
        }
    }
    System.out.println("Product of entered matrix");
      for(i=0;i<m;i++)
       {
        for(j=0;j<q;j++)
        {
            System.out.print(multiply[i][j]+" ");
        }
        System.out.println();
    }
}
}
}
    