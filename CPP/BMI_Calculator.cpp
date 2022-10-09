#include<iostream>
using namespace std;

int main()
{
  float bmi,weight,height;
  cout<<"Please Enter your weight in Pounds : ";
  cin>>weight;
  cout<<"Please Enter your Height in Inches : ";
  cin>>height;
  bmi=(weight*703)/(height*height);
  cout<<"Your BMI is : "<<bmi<<endl;
  if(bmi>25)
    cout<<"Your BMI value shows that you are overweight.";
  else if(bmi<25 && bmi>18.5)
    cout<<"Your weight is normal.";
  else
    cout<<"Your BMI value shows that you are underweight.";
  return 0;
}
