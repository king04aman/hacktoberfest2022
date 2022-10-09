







import java.util.*;

import java.lang.*;

import java.io.*;

import java.math.*;





class NewClass

{

    public static long [][]b;

  

    

    public static long [][] MatMul(long [][]a,long [][]b)

    {

        long[][] c =new long[4][4];

        for(int i=0;i<4;i++)

        {

           for(int j=0;j<4;j++)

           {

               for(int k=0;k<4;k++)

               {

                   c[i][j]=(c[i][j]+(a[i][k]*b[k][j]))%1000000007;

               }

           }

        }

        return c;

    }

    public static void MatExp(long [][]a,long n)

    {

        long [][]id={{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};

        

        if(n==0)  {

            b=id.clone(); 

            return ;

        }

        if(n==1) {

            b=a.clone();

            return ;

        }



        long [][]c=new long[4][4];

        long d[][]=new long[4][4];

        MatExp(a,n/2);

        c=b.clone();

        d=MatMul(c,c);

        

        if(n%2 !=0)

        {

            b=MatMul(d,a);

        }

        else

        b=d.clone();

        return ;

    }

   

	public static void main (String[] args) throws Exception

	{		

            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

            

            int t=Integer.parseInt(br.readLine());

            for(int tc=0;tc<t;tc++)

            {

                String s=br.readLine();



                long n=Long.parseLong(s);



                long [][]arr={{1,1,1,1},{1,0,0,0},{0,0,0,1},{0,0,1,1}};

                b=new long[4][4];

                if(n==1)

                System.out.println(0);

                else if(n==2)

                System.out.println(5);

                else

                {

                    MatExp(arr,n-2);

                            

                    

                    System.out.println(((((b[0][0]*5))+((b[0][2]*5)))+((b[0][3]*8)))%1000000007);

                    

                }

            }

	}

}
