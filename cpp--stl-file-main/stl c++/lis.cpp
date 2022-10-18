#include<bits/stdc++.h>
using namespace std;
int main(){
    list<string> lst{"ayush","ranjan","rohit","ronit"};
    lst.push_back("ramesh");
    lst.erase(find(lst.begin(),lst.end(),"ayush"));
    for(auto s:lst){
        cout<<s<<"-->";
    }
    return 0;
}