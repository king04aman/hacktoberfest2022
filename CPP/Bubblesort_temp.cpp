#include <iostream>

using namespace std;

template<class T>
class bub
{
T *v;
int s;
public:
bub(int x)
{
s=x;
v=new T[s];
}
void read();
void sort();
void display();

};

template<class T>
void bub<T>::read()
{
for(int i=0;i<s;i++)
{
cin>>v[i];
}
}

template<class T>
void bub<T>::display()
{ cout<<"Yor sorted array: [ ";
for(int i=0;i<s;i++)
{
cout<<v[i]<<" ";
}
cout<<"]";
}

template<class T>
void bub<T>::sort()
{ int comp=0,swap=0;
int counter=1;
 while(counter<s){
   for(int i=0;i<s-counter;i++){
     comp++;
       if(v[i]>v[i+1]){
         swap++;
            int temp=v[i];
            v[i]=v[i+1];
            v[i+1]=temp;

       }
   }
    counter ++;

 }
cout<<"Camparision"<<comp;
 cout<<"Swaps"<<swap;

}

int main()
{

int r;
cout<<"\n\nEnter the size:";
cin>>r;

bub<int>I(r);
cout<<"\nEnter the Integer Elements only : ";
I.read();
I.sort();
I.display();
 
 return 0;
}


