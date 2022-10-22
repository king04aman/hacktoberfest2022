// This program aims to find the different between the sum and the product of two number.

#include<iostream>
using namespace std; 

void getProduct(double number1, double number2, double& product){
    product = number1*number2;
}

void getSum(double number1, double number2, double& sum){
    sum = number1 + number2;
}

void printData(double sum, double product, double difference) {
    cout << "The sum of the two numbers is " << sum << endl; 
    cout << "The product of the two numbers is " << product << endl; 
    cout << "The difference between the sum and the product is " << difference << endl; 
}

int main () {
    double number1, number2, product, sum, difference; 
    
    cout << "Enter the first number: "; 
    cin >> number1;
    
    cout << "Enter the second number: "; 
    cin >> number2; 
    
    getProduct(number1, number2, product);
    getSum(number1, number2, sum);
    difference = sum - product;
    
    printData(sum, product, difference); 
}