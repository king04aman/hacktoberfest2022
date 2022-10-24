import java.util.*;
public class multiplication {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number of rows in first matrix: ");
        int row1=sc.nextInt();
        System.out.println("Enter number of columns in first matrix: ");
        int column1=sc.nextInt();
        System.out.println("Enter number of rows in second matrix: ");
        int row2=sc.nextInt();
        System.out.println("Enter number of columns in second matrix: ");
        int column2=sc.nextInt();
        if(row1!=column2 && row2!=column1){
            System.out.println("Matrix multiplication is not possible");
            System.exit(0);
        }
        else{
            System.out.println("Enter the values for matrix A: ");
            int [][]mat1=new int[row1][column1];
            for(int i=0;i<row1;i++){
                for(int j=0;j<column1;j++){
                    mat1[i][j]=sc.nextInt();
                }
            }
            System.out.println("Enter the values for matrix B: ");
            int [][]mat2=new int[row2][column2];
            for(int i=0;i<row2;i++){
                for(int j=0;j<column2;j++){
                    mat2[i][j]=sc.nextInt();
                }
            }

            System.out.println("Matrix mutilplication is: ");
            int[][]mat_res=new int[row1][column2];
            for(int i=0; i<row1;i++){
                for(int j=0;j<column2;j++){
                    mat_res[i][j]=0;
                    for(int k=0;k<column1;k++){
                        mat_res[i][j]+=mat1[i][k]*mat2[k][j];
                    }
                }
            }
            // printing the final output:
            for(int i=0; i<row1;i++){
                for(int j=0; j<column2;j++){
                    System.out.print(mat_res[i][j]+" ");
                }
                System.out.println();
            }
        }
    }
}
