// username : nitishwaa
#include <iostream>
using namespace std;
int main()
{
    int n,m,flag=0,n1,count=0;
    std::cout << "Enter the size of 2D array" << std::endl;
    cin>>n;
    std::cout << "Enter the size of 1D array to be searched" << std::endl;
    cin>>m;
    int arr[n][n],arr1[m];
    
   cout << "enter the elements of 2D array" <<endl;
   for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
     std::cout << "enter the elements of 1D array to be searched" << std::endl;
    for (int i = 0; i < m; i++)
    {  
        cin>>arr1[i];
    }
   for(int j=0;j<n;j++)
   {
   for (int i = 0; i < n-(m-1); i++)
   {
       if(arr1[0]==arr[j][i])
       {
       flag=1;
       n1=i;
       count=1;
       }
       if(flag==1)
       {
           for(int k=n1+1;k<=n1+(m-1);k++)
           {
               if(arr[j][k]==arr1[count])
               {count++;
               flag++;
              }

           }
       }
   }

   }
  
   if(flag==m)
   cout<<"array found. congratulation!!!"<<endl;
   else 
   cout<<"array not found"<<endl;
    std::cout << "column checked." << std::endl;
   flag=0;n1;count=0;
     

     for(int j=0;j<n;j++)
   {
   for (int i = 0; i < n-(m-1); i++)
   {
       if(arr1[0]==arr[i][j])
       {
       flag=1;
       n1=i;
       count=1;
       }
       if(flag==1)
       {
           for(int k=n1+1;k<=n1+(m-1);k++)
           {
               if(arr[k][j]==arr1[count])
               {count++;
               flag++;
              }

           }
       }
   }

   }
   //cout<<flag<<n1<<count<<endl;
   if(flag==m)
   cout<<"array found. congratulation!!!"<<endl;
   else 
   cout<<"array not found"<<endl;
   return 0;
}