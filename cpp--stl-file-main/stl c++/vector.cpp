#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> v(56,76);
    // vector<int>s(v.begin(),v.end());
    // for (int i = 0; i <s.size(); i++)
    // {
    //     /* code */
    //     cout<<s[i]<<" ,";
    // }
    // vector<int>d{23,44,554,55,55,65};
    // d.push_back(67);
    // d.erase(find(d.begin(),d.end(),55));
    // for (int i = 0; i <d.size(); i++)
    // {
        
    //     cout<<d[i]<<",";


    // }
    vector<int> v;
    v.reserve(60);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int no;
        cin>>no;
        v.push_back(no);
    }
    cout<<"capacity\n"<<v.capacity()<<endl;
    for(int x:v){
        cout<<x<<",";
    }

    return 0;
}