#include <iostream>
using namespace std;

int main()
{
   int num, temp, rem, sum = 0;

   cout << "Enter a positive number: ";
   cin >> num;

   temp = num; 
   while (num != 0)
   {
      rem = num % 10;
      sum += rem * rem * rem;
      num = num / 10;
   }
   if (temp == sum)
      cout << temp << " is an Armstrong number" << endl;
   else
      cout << temp << " is not an Armstrong number" << endl;

   return 0;
}