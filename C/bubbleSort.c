#include<stdio.h>

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
  int i,j,n;
	int arr[10];
	printf("Enter the number of elements\n");
	scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Unsorted Array : \n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n/2;i++)
        {
            if(arr[j] < arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }

        for(j=n-1;j<n/2;j--)
        {
            if(arr[j] < arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }


	printf("Sorted array : \n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}

