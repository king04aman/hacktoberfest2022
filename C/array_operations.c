#include<stdio.h>
static int n;

void search(int arr[n],int s);
void reverse(int arr[n]);
void max_min(int arr[n]);
void sort(int arr[n]);
void find(int arr[n], int a ,int b);

void search(int arr[n], int s)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]==s)
        {
            printf("%d is present in %dth position",s,i+1);
            flag++;
            break;
        }
     }
     if(flag==0)
        printf("Input number is not present");
}

void reverse(int arr[n])
{
    int b[n];

    for (int i = 0; i < n; i++)
    {
        b[n-i-1]=arr[i];
    }

     for (int i = 0; i < n; i++)
    {
      printf("%d, ",b[i]);
    }

}

void max_min(int arr[n])
{
    int max,min;
    max=min=arr[0];

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }    
        if(arr[i]<min)
        {
            min=arr[i];
        }
     }

     printf("\nThe largest number is : %d",max);
     printf("\nThe smallest number is : %d",min);
}

void sort(int a[n])
{
    int temp=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }           
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d, ",a[i]);
    }
    
}


int main()
{
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[n],i,s;

    printf("Enter array elements\n");
         for ( i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
    
    printf("\nEnter a number to search :");
        scanf("%d",&s);
        search(arr,s);

    printf("\nReversed Array :");
        reverse(arr);

    printf("\nSorted Array :");
        sort(arr);

        max_min(arr);

  return 0;
}