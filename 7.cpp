//demo strings
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string a="";
	cout<<"Enter your name: ";
	//cin>>a;
	getline(cin, a);
	cout<<"Name is "<<a<<"\n";
	cout<<"End of program.";
	return 0;
}
