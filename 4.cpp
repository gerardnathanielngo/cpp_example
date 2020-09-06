//check file size
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  streampos begin,end;
  ifstream myfile ("example.txt", ios::binary);
  begin = myfile.tellg(); //lagay sa first position
  myfile.seekg (0, ios::end); //lagay sa end
  end = myfile.tellg(); //nasa end
  myfile.close();
  cout << "size is: " << (end-begin) << " bytes.\n";
  return 0;
}
