#include <bits/stdc++.h>               // This is the code for Kadane Algorithm 
using namespace std;                   // The algorithm states that the negative subarray sum contributions 
int main()                             // in the array are not taken into the consideration in the maximum sum
{                                      // as negative sum minimises the sum
  int NumberOfElements; 
  cin>>NumberOfElements; 
  int ArrayOfNumbers[NumberOfElements]; 
  int SubArraySum = 0; 
  int RequiredAnswer = INT_MIN;
  for(int Pointer = 0;Pointer<NumberOfElements;Pointer++){ 
	cin>>ArrayOfNumbers[Pointer];
  }
  for(int Pointer = 0;Pointer<NumberOfElements;Pointer++){ 
	SubArraySum+=ArrayOfNumbers[Pointer]; // Contribute the sum of the element in the subarray sum
	RequiredAnswer = max(SubArraySum,RequiredAnswer); // Update the answer with maximum
	if(SubArraySum<0){
		SubArraySum = 0; // Negative contributions are avoided making subarray sum zero when our subarray sum is negative
	}
  }
  cout<<"Maximum subarray sum is"<<RequiredAnswer<<"\n"; 
  return 0;
}                                        
									    
