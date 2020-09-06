//append to file
#include <fstream>

using namespace std;

int main() 
{  
  ofstream outfile;
  outfile.open("example.txt", ios_base::app); // append instead of overwrite
  outfile<<endl<<"dagdag ito"; 
  return 0;
}
