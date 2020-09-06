//example overloading methods
#include <iostream>
#include <string>
using namespace std;

void cus1(int a)
{
	cout<<"This is integer."<<"\n";
}

void cus1(int a, int b)
{
	cout<<"This is two integers."<<"\n";
}

void cus1(double a)
{
	cout<<"This is double."<<"\n";
}

void cus1(string a)
{
	cout<<"This is string."<<"\n";
}

void cus1(char a)
{
	cout<<"This is a character."<<"\n";
}

int main()
{
	cus1(10);
	cus1(10.0);
	cus1(1,2);
	cus1("hello world");
	cus1("a");
	return 0;
}
