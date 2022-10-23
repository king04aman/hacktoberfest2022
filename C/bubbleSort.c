#include <stdio.h>


void bubble_sort(int *a, int n)
{

    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (a[j] > a[j + 1])
            {

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{

    int n;
    
    printf("Enter the number of Elements = ");
    scanf("%d",&n);
    
    int a[n];
   
    printf("Enter the elemets of array = \n\n");
    for (int i = 0; i < n; i++)
    { printf("Enter %d Element = ",i+1);
      scanf("%d",&a[i]);
    }

    bubble_sort(a, n);

   
    printf("\nThe sorted array = \n\n");
    for (int i = 0; i < n; i++)
    {
       
        printf("%d ",a[i]);
    }
    return 0;
}
