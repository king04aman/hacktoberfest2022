// Github username: ShubhamGoyal7125
#include <iostream>
using namespace std;

int main()
{
    int n, num;
    cin>>n;
    if(n==0){
        cout<<"Not found"<<endl;
        return 0;
    }
    int a[100];
    cout<<"Write the numbers: "<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter the number to find"<<endl;
    cin>>num;

    bool find = false;
    for(int i=0; i<n; i++){
        if(num == a[i]){
            cout<<"Found at index: "<<i<<endl;
            find = true;
            break;
        }
        
    }
    if(find == false){
        cout<<"Not found"<<endl;
    }
    return 0;
}
