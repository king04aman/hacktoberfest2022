#include<bits/stdc++.h>
using namespace std;

    void solve(int open, int close, string op, vector<string> &res) {
        if(open == 0 && close == 0) {
            res.push_back(op);
            return;
        }
        
        if(open == close && open >= 0) {
            op.push_back('(');
            solve(open - 1, close, op, res);
        }
        else if(open == 0) {
            op.push_back(')');
            solve(open, close -1, op, res);
        }
        else {
            string op1 = op;
            string op2 = op;
            op1.push_back('(');
            op2.push_back(')');
            solve(open -1, close, op1, res);
            solve(open, close -1, op2, res);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string op = "";
        int open = n;
        int close = n;
        solve(open, close, op, res);
        return res;
    }

    int main() {
        int n;
        cout<<"Enter the number of pair of parenthesis ";
        cin>>n;
        vector<string> str = generateParenthesis(n);
        for(int i = 0; i<str.size(); i++) {
            cout<<str[i]<<endl;
        }
        return 0;
    }