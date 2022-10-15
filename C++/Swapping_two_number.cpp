// Swapping two  number without using third variable
#include<iostream>
using namespace std;
int main()
{
 int num1, num2;
 cout<<"First Number: ";
 cin>>num1;
 cout<<"Second Number: ";
 cin>>num2;
  
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  
  cout<<"After swapping: num1= "<<num1<<" , num2= "<<num2;
  return 0;
}
