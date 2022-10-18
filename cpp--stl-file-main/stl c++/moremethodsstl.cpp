#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=12;
    int b=24;
    swap(a,b);
    cout<<a<<"and"<<b<<endl;
    int arr[]={23,44,55,44,5,556};
    reverse(arr,arr+4);
    int n=sizeof(arr)/sizeof(int);
    for (int i = 0; i <n; i++)
    {
        /* code */
        cout<<arr[i]<<",";
    }
    
    return 0;
}