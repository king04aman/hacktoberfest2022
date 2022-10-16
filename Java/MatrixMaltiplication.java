// Write a program for multiplication of nxm matrices.
// My Github Username : saurav1207

import java.util.Scanner;
class Matrix{

    void matrixMul(int m, int n, int p, int q){

        int[][] a,b,c,t;
        a = new int[m][n];
        b = new int[p][q];
        c = new int[m][q];
        t = new int[q][m];

        Scanner s = new Scanner(System.in);
        System.out.println("Enter the elements of matrix A: ");
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
            a[i][j] = s.nextInt();
            }
        }
        System.out.println("Enter the elements of matrix B: ");
        for(int i = 0; i < p; i++){
            for(int j = 0; j < q; j++){
            b[i][j] = s.nextInt();
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < q; j++){
                for(int k = 0; k < n; k++){
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        System.out.println("Elements of result matrix C are: ");
        for(int i = 0; i < m; i++){
            for(int j = 0; j < q; j++){
            System.out.print(c[i][j]+"\t");
            }
            System.out.print("\n");
        }
        for(int i = 0; i < q; i++){
            for(int j = 0; j < m; j++){
            t[i][j] = c[j][i];
            }
        }
        System.out.println("Elements of transpose matrix T are: ");
        for(int i = 0; i < q; i++){
            for(int j = 0; j < m; j++){
            System.out.print(t[i][j]+"\t");
            }
            System.out.print("\n");
        }
    }
}
class Driver{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        System.out.println("Enter no of rows in first matrix: ");
        int m = s.nextInt();
        System.out.println("Enter no of columns in first matrix: ");
        int n = s.nextInt();
        System.out.println("Enter no of rows in second matrix: ");
        int p = s.nextInt();
        System.out.println("Enter no of columns in second matrix: ");
        int q = s.nextInt();
        if(n == p){
            Matrix obj = new Matrix();
            obj.matrixMul(m,n,p,q);
        }
        else{
            System.out.println("Matrix multiplication cannot be performed...");
        }
    }
}



/*
OUTPUT-
Enter no of rows in first matrix:
3
Enter no of columns in first matrix:
3
Enter no of rows in second matrix:
3
Enter no of columns in second matrix:
3
Enter the elements of matrix A:
1 1 1
2 2 2
3 3 3
Enter the elements of matrix B:
1 2 3
1 2 3
1 1 1
Elements of result matrix C are:
3  5  7
6 10 14
9 15  21
Elements of transpose matrix T are:
3  6  9
5 10 15
7 14  21
*/