// CPP program to print count of
// vowels using pointers

#include <iostream>

using namespace std;

int vowelCount(char *sptr)
{
	// Create a counter
	int count = 0;

	// Iterate the loop until null character encounter
	while ((*sptr) != '\0') {

		// Check whether character pointer finds any vowels
		if (*sptr == 'a' || *sptr == 'e' || *sptr == 'i'
			|| *sptr == 'o' || *sptr == 'u') {

			// If vowel found increment the count
			count++;
		}

		// Increment the pointer to next location
		// of address
		sptr++;
	}

	return count;
}

// Driver Code
int main()
{
	// Initialize the string
	char str[] = "geeksforgeeks";

	// Display the count
	cout << "Vowels in above string: " << vowelCount(str);

	return 0;
}
