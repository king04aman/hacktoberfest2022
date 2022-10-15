#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(char arr[],int s,int e)
{
  if(s>=e)
    return 1;
  if(char[s]==char[e])
    return ispalindrome(arr,s+1,e-1);
  else
    return 0;
}
int main()
{
  char arr[50];
  cin>>arr;
  if(palindrome(arr,0,strlen(arr)-1))
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
  
