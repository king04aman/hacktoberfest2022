#include<iostream>
#include<math.h>
using namespace std;

bool isPerfectNumber(int num){
    int sum=1;
    for(int i=2;i<sqrt(num);i++){
        if(num%i==0){
            if(i==num/i){
                sum+=i;
            }
            else{
            sum+=i+num/i;
            }
        }
    }
    if(sum==num && num!=1)
    return true;
    return false;
}
int PerfectNumber(int arr[],int n,int k){
    if(n<k){
        return -1;
    }
    for(int i=0;i<n;i++){
        if(isPerfectNumber(arr[i]))
        arr[i]=1;
        else
        arr[i]=0;
    }
    int ans=0;
    for(int i=0;i<k;i++){
        ans+=arr[i];
    }
    int sum=ans;
    for(int i=k;i<n;i++){
        sum=sum-arr[i-k]+arr[i];
        ans=max(ans,sum);
    }
    return ans;
}

int main(){
    int arr[]={28,2,3,6,496,99,8128,24};
    int n=8;
    int k=4;
    cout<<PerfectNumber(arr,n,k);
    return 0;
}