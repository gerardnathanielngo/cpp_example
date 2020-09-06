//custom functions
#include <iostream>
using namespace std;

float compute(int a, int b, char c)
{
	switch (c)
	{
		case '+':
			return a+b;
		case '-':
			return a-b;
		case '*':
			return a*b;
		case '/':
			return (b > 0)?a/b:0.0;
		default:
			return 0.0;
	}
	return 0.0;
}

int main()
{
	char rep;
	do
	{
		int a, b;
		char c;
		cout<<"Enter 1st number: ";
		cin>>a;
		cout<<"Enter 2nd number: ";
		cin>>b;
		cout<<"Enter Operation(+,-,*,/): ";
		cin>>c;
		cout<<"Result: "<<compute(a,b,c);
		cout<<"\nRepeat(Y/N): ";
		cin>>rep;
	}while(rep == 'Y' || rep == 'y');
	
	return 0;
}
