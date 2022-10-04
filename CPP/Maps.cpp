#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string> m;
    m[4] = "Pranjal";
    m[9] = "Laptop";// O(log(n)) -> Time Complexity
    m[1] = " Door"; 
    m[3] = "Lock";
    m.insert({6,"TV"});

    m[4] = "TubeLight"; // new value to a key will change its association in memory and no extra element is inserted

    // if string is our key then ( TimeComplexity : s.size()*log(n) )

    // map<int,string>:: iterator it;
    // for(it = m.begin();it!=m.end();it++)
    // {
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
     auto x = m.find(1);
     m.erase(x);

     // ********** IMPORTANT FUNCTION ---> m.clear();

    for(auto value : m)   // To access each value we have time complexity O(log(n))
    {
        cout<<value.first<<" "<<value.second<<endl;
    }

    auto it = m.find(4); //again TimeComplexity -> O(log(n))
    cout<<(*it).second<<endl;



    return 0;
}