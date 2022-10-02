import java.util.*;

public class tuf {

  public static void main(String[] args) {
    int arr1[] = {1,4,7,8,10};
	int arr2[] = {2,3,9};
    System.out.println("Before merge:");
    for (int i = 0; i < arr1.length; i++) {
      System.out.print(arr1[i] + " ");
    }
    System.out.println();
    for (int i = 0; i < arr2.length; i++) {
      System.out.print(arr2[i] + " ");
    }
    System.out.println();
    merge(arr1, arr2, arr1.length, arr2.length);
    System.out.println("After merge:");
    for (int i = 0; i < arr1.length; i++) {
      System.out.print(arr1[i] + " ");
    }
    System.out.println();
    for (int i = 0; i < arr2.length; i++) {
      System.out.print(arr2[i] + " ");
    }

  }
  static void merge(int[] arr1, int arr2[], int n, int m) {
    int arr3[] = new int[n + m];
    int k = 0;
    for (int i = 0; i < n; i++) {
      arr3[k++] = arr1[i];
    }
    for (int i = 0; i < m; i++) {
      arr3[k++] = arr2[i];
    }
    Arrays.sort(arr3);
    k = 0;
    for (int i = 0; i < n; i++) {
      arr1[i] = arr3[k++];
    }
    for (int i = 0; i < m; i++) {
      arr2[i] = arr3[k++];
    }

  }
}