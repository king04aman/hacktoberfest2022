#include<iostream>
#include<bits/stdc++.h>
#include<vector>
int dynamic(string s,int i,vector<int> &dp)
    {
        if(i==s.length())
        {
            return 1;
        }
        if(i>s.length()||s[i]=='0')
        {
            cout<<"n"<<endl;
            return 0;
        }
        if(s[0]=='0')
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        if(i+1<s.length()&&(s[i]=='1')||(s[i]=='2'&&s[i+1]<='6'))
        {
            cout<<s[i]<<"l"<<endl;
            return dp[i]=dynamic(s,i+1,dp)+dynamic(s,i+2,dp);
        }
        else
        {
            cout<<s[i]<<"k"<<endl;
            return dp[i]=dynamic(s,i+1,dp);
        }
    }
    int numDecodings(string s) {
        int n=s.length();
        vector<int> dp(102,-1);
        if(n==1&&s[0]!='0')
        {
            return 1;
        }
        if(n==1&&s[0]=='0')
        {
            return 0;
        }
        return dynamic(s,0,dp);
    }
int main()
{
	string s="00001111";
}
