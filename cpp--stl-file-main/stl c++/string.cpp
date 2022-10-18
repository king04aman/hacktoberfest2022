#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="hello coder";
    string s0;
    string s1("ayush");
    string s3(s1);
    string s4=s;
    cout<<s<<","<<s1<<","<<s3<<","<<s4<<endl;
    char c[]={'R','a','n','j','a','n','\0'}; 
    string s6(c);
    cout<<s6<<endl;
    if(s0.empty()){
        cout<<"this is empty set\n";
    }
    s0.append("ayush ranjan");
    cout<<s0<<endl;
    cout<<s0.length();
   string s7="apple";
   string s8="mango";
   if(s7>s8){
       cout<<"string lenght"<<s7<<"is greater"<<endl;
   }
   else{
       cout<<"string less than"<<endl;
   }
   string s9="ayush ranjan is a good boy";
   int indx=s9.find("is");
   cout<<indx<<endl;
   string word="boy";
   int len=word.length();
   cout<<s9<<endl;
   s9.erase(indx,len);
   cout<<s9;
   for(auto c:s7){
       cout<<s7<<":";
   }
      return 0;
}