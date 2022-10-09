#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count=0;
	string s;
	cout<<"Enter the string"<<endl;
	cin>>s;
	for(int i=0;i<s.size();i++){
        if(s[i] == 'a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    cout<<count;
	
	return 0;
}
