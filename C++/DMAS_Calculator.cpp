// Calculatior(plus-minus-multiply-divide).cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<iostream>
#include<stdio.h >
#include <stack>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	
string choice = "N";
	do
	{
	system ("cls");
//input Expression
cout<<"\t\t\t\tExpression Calculator";
cout<<"\n This Calculator will Calculate Expression on DMAS Rule (/,*,+,-)";
cout<<"\n Important !! Only Single Digit is supported right now ( For Example = 4+5*2-6)";
	stack<int> nums;
	stack<char> ops;
	string exp;
	// precedence
	int d = 1;
	int m = 2;
	int a = 3;
	int s = 4;
	cout << " Enter Expression : ";
	cin >> exp;
	

	int i = 0;
	int check = 0;
	int pcheck = 0;
	//Moving through Expression
	while (exp[i] != '\0') {

	
		if (isdigit(exp[i])) {
			nums.push(exp[i]-'0');
		}
		else {
			if (ops.empty()) {
				switch (exp[i]) {
				case('/'): {
					check = d;
					break;
				}
				case('*'): {
					check = m;
					break;
				}
				case('+'): {
					check = a;
					break;
				}
				case('-'): {
					check = s;
					break;
				}
				}
				ops.push(exp[i]);
			}
			else {
				switch (exp[i]) {
				case('/'): {
					pcheck = d;
					break;
				}
				case('*'): {
					pcheck = m;
					break;
				}
				case('+'): {
					pcheck = a;
					break;
				}
				case('-'): {
					pcheck = s;
					break;
				}
				}
				if (check<=pcheck) {
					
					while (!ops.empty()) {
						int a;
						int b;
						switch (ops.top()) {
							
						case('+'): {
							a = nums.top(); nums.pop();
							b = nums.top(); nums.pop();
							nums.push(a + b);
							break;
						}
						case('-'): {
							a = nums.top(); nums.pop();
							b = nums.top(); nums.pop();
							nums.push( b - a);
							break;
						}
						case('*'): {
							a = nums.top(); nums.pop();
							b = nums.top(); nums.pop();
							nums.push(a * b);
							
							break;
						}
						case('/'): {
							a = nums.top(); nums.pop();
							b = nums.top(); nums.pop();
							nums.push(b / a);
							break;
						}
						}
						ops.pop();
					}
					ops.push(exp[i]);
				}
				else {
					ops.push(exp[i]);
				}
			}

			
			
		}
		i++;
	}

	//empty array;
	while (!ops.empty()) {
		int a;
		int b;
		switch (ops.top()) {

		case('+'): {
			a = nums.top(); nums.pop();
			b = nums.top(); nums.pop();
			nums.push(a + b);
			break;
		}
		case('-'): {
			a = nums.top(); nums.pop();
			b = nums.top(); nums.pop();
			nums.push(b - a);
			break;
		}
		case('*'): {
			a = nums.top(); nums.pop();
			b = nums.top(); nums.pop();
			nums.push(a * b);
			break;
		}
		case('/'): {
			a = nums.top(); nums.pop();
			b = nums.top(); nums.pop();
			nums.push(b / a);
			break;
		}
		}
		ops.pop();
	}

	cout << "Answer :" << nums.top();
	
	cout<<"\n Enter Y to run again : ";
	cin>>choice;
}while(choice=="Y" || choice =="y");

		
		
	}
	
	
	
	
 


