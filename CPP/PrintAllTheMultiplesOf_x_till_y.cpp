#include <iostream>
using namespace std;

int main(){
    int i,x,y,n=1;
    cin>>x;
    cin>>y;
    
    for(i=1;n<=y;i++){
        n=(x*i);
        if(n<=y)
        cout<<n<<endl;
    }


    return 0;
}
