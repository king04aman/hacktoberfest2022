#include<bits/stdc++.h>
using namespace std;
template<class T>
int search(T arr[],int n,T key){
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i]==key){
            return i;

        }
    }
    return n;

}
int main(){
    int a[]={34,5,65,66,66,55,6546,445};
    float b[]={44.5,56.56,676.67,77.787,87.88};
    char d[]={'f','g','j'};
    int n=sizeof(d)/sizeof(char);
    char key='g';
    cout<<search(d,n,key)<<endl;
    return 0;
}