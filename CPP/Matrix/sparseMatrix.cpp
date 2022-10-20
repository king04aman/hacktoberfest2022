#include<iostream.h>
#include<conio.h>

void main()
{
 int arr[10][10],m,n,i,j,count=0;
 clrscr();
 cout<<"\n enter the value of rows and columns";
 cin>>m>>n;
 cout<<"\n enter the matrix elements:";
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   cin>>arr[i][j];
  }
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   if(arr[i][j]==0)
   {
    count++;
   }
  }
 }
 if(count>((m+n)/2))
 {
  cout<<"\n the matrix is sparse matrix";
 }
 else
 {
  cout<<"\n the matrix is not a sparse matrix";
 }
}

// code contributed by Priyanshu
