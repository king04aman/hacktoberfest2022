// C++ Program to Sort an Array in Ascending Order
#include <iostream>
using namespace std;

int main(){
    int i, j, size, temp;
    int arr[25];
    
    // Asking for input
    cout << "Enter the total no. of elements: ";
    cin >> size;
    
    // Enter the elements
    cout << "Enter the elements of the array: " << endl;
    for (i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    // Sorting elements in ascending order
    for (i = 0; i < size; i++){
        for (j = i; j < size; j++){
            if (arr[i] > arr[j+1]){
                temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Displaying output
    cout << "Elements sorted in the ascending order are: " << endl;
    for (i = 1; i <= size; i++){
     cout << arr[i] << endl;   
    }
    return 0;
}
