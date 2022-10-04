
/* Java program to insert and delete an element in an array */

import java.util.Scanner;

public class ArrayInsertionDeletion {
    public static void main(String[] args) {
        // insert an element in an array
        int n, pos, x;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter no. of elements you want in array:");
        n = s.nextInt();

        int[] a = new int[n + 1];
        System.out.println("Enter all the elements:");
        for (int i = 0; i < n; i++) {
            a[i] = s.nextInt();
        }

        System.out.print("Enter the position where you want to insert element:");
        pos = s.nextInt();

        System.out.print("Enter the element you want to insert:");
        x = s.nextInt();
        for (int i = n - 1; i >= pos - 1; i--) {
            a[i + 1] = a[i];
        }
        a[pos - 1] = x;

        System.out.print("After inserting:");
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + ",");
        }
        System.out.print(a[n]);

        // delete an element in an array
        int delete;
        System.out.print("\n Press 1 if you want to delete an element from an array:");
        delete = s.nextInt();

        if (delete == 1) {
            int y, flag = 1, loc = 0;
            System.out.print("Enter the element you want to delete:");
            y = s.nextInt();

            for (int i = 0; i < n; i++) {
                if (a[i] == y) {
                    flag = 1;
                    loc = i;
                    break;
                } else {
                    flag = 0;
                }
            }
            if (flag == 1) {
                for (int i = loc + 1; i < n; i++) {
                    a[i - 1] = a[i];
                }
                System.out.print("After Deleting:");
                for (int i = 0; i < n - 2; i++) {
                    System.out.print(a[i] + ",");
                }
                System.out.print(a[n - 2]);
            } else {
                System.out.println("Element not found");
            }
        }
    }

}
