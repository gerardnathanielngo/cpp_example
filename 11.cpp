#include <fstream>
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

void create_new(string content)
{
  ofstream kahitano;
  kahitano.open("example.txt");
  //myfile << "Writing this to a file.\n";
  kahitano<<content;
  kahitano.close();
  cout<<endl<<"Done writing"<<endl;
}

void read_file()
{
  string line;
  ifstream myfile("example.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout<<line<<endl;
    }
    myfile.close();
    cout<<endl<<"End of file."<<endl;
  }
  else
  {
  	cout << "Invalid file name"; 
  }
}

void append_to_file(string contents)
{
  ofstream outfile;
  outfile.open("example.txt", ios_base::app); // append instead of overwrite
  outfile<<endl<<contents; 
  outfile.close();
  cout<<endl<<"Done modifiying the file."<<endl;
}

void get_filesize()
{
  streampos begin,end;
  ifstream myfile ("example.txt", ios::binary);
  begin = myfile.tellg(); //lagay sa first position
  myfile.seekg (0, ios::end); //lagay sa end
  end = myfile.tellg(); //nasa end
  myfile.close();
  cout << "File Size is: " << (end-begin) << " bytes.\n";
}

void prt(string a)
{
	cout<<a;
}

void prtln(string a)
{
	cout<<a<<endl;
}

int main()
{
	int choice = 0;
	string file_contents; //laman
	while(choice != 5)
	{
		prtln("Sample Program");
		prtln("1. Create File");
		prtln("2. View File Contents");
		prtln("3. Append to File");
		prtln("4. Get File Size");
		prtln("5. Exit Program");
		prt("Select: ");
		cin>>choice;
		switch(choice)
		{
			case 1: //new file
			{
				cout<<"Enter file contents: ";
				cin>>file_contents;
				create_new(file_contents);
				break;
			}
			case 2: //print contents of file
			{
				cout<<"Display contents: ";
				read_file();
				break;
			}
			case 3: //append to file
			{
				cout<<"Enter file contents: ";
				cin>>file_contents;
				append_to_file(file_contents);
				break;
			}
			case 4: //get file size
			{
				cout<<"Display file size: ";
				get_filesize();
				break;
			}
			case 5: //exit program
			{
				prtln("Exit program");
				break;
			}
			default:
			{
				prtln("Invalid choice. Re-enter");
				break;
			}
		}
	}
	return 0;
}
