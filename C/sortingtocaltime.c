#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void addval(int * arr , int n);
void bsrch(int * arr ,int l, int h , int element);

void swap(int* a, int* b)
{
    int t = *a;
    a =b;
    b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i
        = (low- 1); // Index of smaller element and indicates
                 // the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 

void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
   clock_t ti,tf;
   int n;
   printf("enter the no. og inputs : ");
   scanf("%d",&n);
   int arr[n];

   // initializing the array

   addval(arr,n);

   quickSort(arr,0,n-1);


   ti = clock();

   bsrch(arr,0,n-1,10000);

   tf = clock();

   double t = (double)(tf-ti)/CLOCKS_PER_SEC;

   printf("\n %lf",t);

}
void addval(int * arr , int n)
{
     srand(time(0));

    for (int i = 0; i < n ; i++) {
        arr[i] = (rand() % (n)) + 1;
}
}

void bsrch(int * arr ,int l, int h , int element)
{
    int mid = (l+h)/2 ;
    arr[mid] = 10000;

    if(l>h)
    {
        printf("not found");
        return;
    }

    if(arr[mid] == element)
    {
        printf("element found at index %d",mid);
        return;
    }

    if(element > arr[mid])
    {
        l = mid + 1;
        bsrch(arr,l,h,element);
    }

    if(element < arr[mid])
    {
        h = mid - 1;
        bsrch(arr,l,h,element);
    }

}