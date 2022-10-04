// Header file
#include<iostream>
using namespace std;
// Main function
int main ()
{

    int num, temp; 
    int  rem, sum = 0; // intialize sum variable to zero
    cout << "Enter number to be checked : ";
    cin >> num;
    // copying num into temp to prevent loss of num value i.e input varible
    temp = num;
    
    while (temp != 0)
    {
        rem = temp % 10;         // Extracting  single value for cube root from temp
        sum = sum + rem*rem*rem;   // cube root of single and added to sum
        temp = temp / 10;          // updating temp variable
    }
    
    // Check if sum is equal to num 
    if (sum == num)     // if equal then number is armstrong number
        cout << "\n" << num << " is an Armstrong number.";
    else
        cout << "\n" << num << " is not an Armstrong number.";
    return 0;
}
