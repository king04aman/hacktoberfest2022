#include<iostream>
using namespace std;
int bsearch(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>key)
        e=mid-1;
        else
        s=mid+1;
        
    }
    return -1;
}
int main()
{
    cout<<"enter the number of elements in an array ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in sorted order ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"enter the number to be searched ";
    int key;
    cin>>key;
    cout<<"the number "<<key<<" is at index "<<bsearch(arr,n,key);

}
