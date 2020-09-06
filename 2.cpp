//write to file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int writeFile(string a) 
{
  ofstream kahitano;
  kahitano.open("example.txt");
  //myfile << "Writing this to a file.\n";
  kahitano<<a;
  kahitano.close();
  return 0;
}

int main()
{
	string a;
	cout<<"Enter text to write to file: ";
	getline(cin, a);
    writeFile(a);
}
