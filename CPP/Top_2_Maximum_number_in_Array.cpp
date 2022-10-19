#include<iostream>
using namespace std;
void maxAndSecondMax(int *arr, int size){
   int max= INT_MIN;
   int s_max= INT_MIN;
   for(int i=0;i<size; ++i){
      if(arr[i] >max){
         s_max= max;
         max= arr[i];
      }
      else if(arr[i]> s_max && arr[i]!= max){
         s_max= arr[i];
      }
   }
   if(s_max==INT_MIN){
      s_max= -1;
   }
   cout<<"1st max is "<<max<<" "<<"2nd Max is "<<s_max;
}
int main(){
   int n;
   cout<<"enter size of array "<<endl;
   cin>>n;
   int *arr=new int[n];
   cout<<"enter numbers "<<endl;
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   maxAndSecondMax(arr,n);
   delete [] arr;
   arr=0;
   return 0;
}