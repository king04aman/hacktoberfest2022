#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age:";
	cin>>age;
	if(age>=18)
	goto vote;
	 else
	 goto notVote;
	 vote:
	   cout<<"Eligible for vote....";
	   return 0;
	 notVote:
	   cout<<"Not eligible for vot...."; 
	return 0;
}
