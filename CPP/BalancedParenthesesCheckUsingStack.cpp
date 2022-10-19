// github - MadhulikaSingh2304

#include <bits/stdc++.h>

using namespace std;

bool isValid(string s) {
        stack<char> st;
        char top;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else if(st.size()>0)
            {
                top=st.top();
                if((s[i]==')' && top=='(') || (s[i]==']' && top=='[') || (s[i]=='}' && top=='{'))
                    st.pop();
                else 
                    return false;
            }
            else
                return false;
        }
    if(st.size() > 0)
        return false;
        else 
            return true;
 }

int main()
{
    string s;
    cin>>s;
    bool ans;
    ans = isValid(s);
    cout<<ans<<endl;

    return 0;
}
