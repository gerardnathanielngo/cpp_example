//classes - inheritance
#include <iostream>
#include <stdio.h>
#include <string>

#include <cmath> //sqrt()

using namespace std;

class Shape 
{
   public:
      void setWidth(int w) 
	  {
         width = w;
         cout<<"Width has been set to "<<w<<endl;
      }
      void setHeight(int h)
	  {
         height = h;
         cout<<"Height has been set to "<<h<<endl;
      }
      
   protected:
      int width;
      int height;
};

class Rectangle: public Shape 
{
   public:
      int getArea() 
	  { 
         return (width * height); 
      }
};

class printData {
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }
      void print(double  f) {
        cout << "Printing float: " << f << endl;
      }
      void print(char* c) {
        cout << "Printing character: " << c << endl;
      }
};

float compute(int a, int b, char c)
{
	cout<<"SQRT A: "<<sqrt(a)<< " B: "<<sqrt(b)<<"\n";
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
	/*
	string x;
	cout<<"Enter your name: ";
	getline(cin, x);
	//cin.getline (name,256);
	cout<<"Hello "<<x<<"\n";
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
	*/
	Rectangle Rect;
	Rect.setWidth(50);
	Rect.setHeight(70);
	
	// Print the area of the object.
	cout << "Total area: " << Rect.getArea() << endl;
	
	printData pd;
	// Call print to print integer
	pd.print(5);
	// Call print to print float
	pd.print(500.263);
	// Call print to print character
	//pd.print("Hello C++");
	
	cout<<"End of program";
	return 0;
}
