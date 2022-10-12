#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num,rem;
    cout << "Enter a number: ";
    cin >> num;
    int ans=0,val=num;
    while(val){
        rem=val%10;
        ans+=(rem*rem*rem);
        val/=10;
    }
    if(ans==num) cout << "The given number is an armstrong!";
    else cout << "The given number is not an armstrong!";

    return 0;
}

Solution Approach:
Check if the sum of the cubes of the digits of a number is equal to the number itself, then it is an armstrong number otherwise not.
  
Time Complexity : O(n)
Space Complexity : O(1)
