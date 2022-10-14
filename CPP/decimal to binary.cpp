using namespace std;
#include <iostream>
#include<math.h>
 
#define umm unsigned long long int
 

int decimalToBinary(int N)
{
   
    umm BNumber = 0;
    int count = 0;
    while (N != 0) {
        int rem = N % 2;
        umm c = pow(10, count);
        BNumber += rem * c;
        N /= 2;
        
        count++;
    }
    return BNumber;
}
 

int main()
{
    int N ;
    printf("enter the number to be converted");
    cin>>N;
    cout << decimalToBinary(N);
    return 0;
}
 