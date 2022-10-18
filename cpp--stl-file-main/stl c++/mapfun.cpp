#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>m;
    //inserting element of map
    m.insert(make_pair("mango",90));

    pair<string,int>p;
    p.first="Apple";
    p.second=67;
    
    m.insert(p);

    m["banana"]=90;

    //searching an element in map

    string fruit;
    cin>>fruit;
    
    auto it =m.find(fruit);
    if(it!=m.end()){
        cout<<"price of "<<fruit<<" is\n"<<m[fruit]<<endl;
    }
    else{
        cout<<"fruit is not find!!!!"<<endl;
    }

    for (  it= m.begin(); it!=m.end(); it++)
    {
        /* code */
        cout<<it->first<<"and its price is"<<it->second<<endl;
    }
    
    return 0;
}