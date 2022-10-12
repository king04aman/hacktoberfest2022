//ankitranjan1028

#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void selection_sort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int k=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[k])
            {
                k=j;
            }
        }
        swap(&arr[i],&arr[k]);
    }
}
void display(int arr[],int n){
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
    cout<<("The elements in the array are\n");
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<("Before sorting, array is:\n");
    display(arr,n);
    cout<<("\nAfter sorting, array is:\n");
    selection_sort(arr,n);
    display(arr,n);
    return 0;
}
