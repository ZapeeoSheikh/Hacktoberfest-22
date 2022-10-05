#include<iostream> 
#include<math.h> 
using namespace std; 
int main () 
{ 
float a,b,PI; 
int c; 
cout<<endl; 
cout<<"-.-.-.-.-.-.-.-. Calculator By Manan -.-.-.-.-.-.-.\n"; 
cout<<"1: Div"<<endl;
cout<<"2: Mul"<<endl;
cout<<"3: Sub"<< endl;
cout<<"4: Add"<<endl; 
cout<<"5: Exp"<<endl; 
cout<<"6: Sq.root"<<endl; 
cout<<"7: Sine Function"<<endl; 
cout<<"8: Cos Function"<<endl;
cout<<"9: Tan Function"<<endl; 
cout<<"10: Sine Inv Function"<<endl;
cout<<"11: Cos Inv Function"<<endl;
cout<<"12: Tan Inv Function"<<endl;
cout<<"13: Logarithm"<<endl;
cout<<"Which Operation would you like to perform? : "; 
cin>>c; 
PI=3.14; 
switch(c) 
{ 
case 1: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Division = "<<a/b<<endl; 
break; 
case 2: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Multiplication = "<<a*b<<endl; 
break; 
case 3: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Subtraction = "<<a-b<<endl; 
break; 
case 4: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Addition = "<<a+b<<endl; 
break; 
case 5: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Enter the exponent : "; 
cin>>b; 
cout<<"Exponent = "<<pow(a,b)<<endl; 
break; 
case 6: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Square Root = "<<sqrt(a)<<endl; 
break; 
case 7: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Sin = "<<sin(a)<<endl; 
break; 
case 8: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Cos = "<<cos(a)<<endl; 
break; 
case 9: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Tan = "<<tan(a)<<endl; 
break; 
case 10: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Inverse of Sin = "<<asin(a)*180.0/PI<<endl; 
break; 
case 11: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Inverse of Cos = "<<acos(a)*180.0/PI<<endl; 

break; 
case 12: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Inverse of tan = "<<atan(a)*180.0/PI<<endl; 
break; 
case 13: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Log = "<<log(a)<<endl; 
break; 
default: 
cout<<"Wrong Input"<<endl; 
} 
}