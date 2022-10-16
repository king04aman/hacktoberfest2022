#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,j,k;
    string p,q;
    int key;
    cout<<"Enter key<<endl;
    cin>>key;
    cout<<"Enter message<<endl;
    cin>>p;
    for(i=0;i<p.size();i++){
        q+=(p[i]-'A'+key)%26+'A';
    }
    cout<<"\n\nEncrypted message : "<<q<<endl;
    return 0;
}
