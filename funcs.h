#include<iostream>
#include<fstream>

using namespace std;

void writeFile(string fileName)
{
    ofstream myfile;
    string text;
    cout << "Write text below: \n";
    cin.ignore();
    getline(cin, text);//adds spaces
    myfile.open(fileName);
    myfile << text;
    myfile.close();
}

void readFile(string fileName)
{
    ifstream file(fileName);
    string line;

        if (file.is_open())
        {
	        while (getline(file, line))
            {
        	cout << line << endl;//loops over every line
            }
        }
}
