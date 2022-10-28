// C++ program to multiply two matrices

import java.io.*;
import java.util.*;

class GFG {

	static int R1 = 2; // number of rows in Matrix-1
	static int C1 = 2; // number of columns in Matrix-1
	static int R2 = 2; // number of rows in Matrix-2
	static int C2 = 2; // number of columns in Matrix-2

	// This function multiplies mat1[][]
	// and mat2[][], and stores the result
	// in res[][]
	static void mulMat(int[][] mat1, int[][] mat2)
	{
		// To store result
		int[][] rslt = new int[R1][C2];
		System.out.println(
			"Multiplication of given two matrices is:");
		int i, j, k;
		for (i = 0; i < R1; i++) {
			for (j = 0; j < C2; j++) {
				rslt[i][j] = 0;
				for (k = 0; k < R2; k++)
					rslt[i][j] += mat1[i][k] * mat2[k][j];
				System.out.print(rslt[i][j] + " ");
			}
			System.out.println("");
		}
	}

	// Driver code
	public static void main(String[] args)
	{
		int[][] mat1 = { { 1, 1 },
						{ 2, 2 } };

		int[][] mat2 = { { 1, 1 },
						{ 2, 2 } };


		if (C1 != R2) {
			System.out.println(
				"The number of columns in Matrix-1 must be equal to the number of rows in Matrix-2");
			System.out.println(
				"Please update the global variables according to your array dimension");
		}
		else {
		
			// Function call
			mulMat(mat1, mat2);
		}
	}
}
// This code is contributed by shruti456rawal
