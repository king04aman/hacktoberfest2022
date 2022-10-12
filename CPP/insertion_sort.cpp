//ankitranjan1028

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int *arr,int n){
    int j;
    for (int i = 1; i < n; i++)
    {
        int x=arr[i];
        j=i-1;
        while (j>0 && arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}
void display(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int n;
    cout<<("Enter the size of array\n");
    cin>>n;
    int arr[n];
    printf("The elements in the array are\n");
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<("Before sorting, array is:\n");
    display(&arr[0],n);
    cout<<("\nAfter sorting, array is:\n");
    insertion_sort(arr,n);
    display(&arr[0],n);
    return 0;
}