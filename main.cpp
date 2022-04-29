#include<iostream>
#include"funcs.h"

using namespace std;

int main()
{
    string fileName;
    int choice;
    cout << "Enter txt file name:\n";
    cin >> fileName;
    cout << "Enter number of command:\n";
    cout << "1. Write file\n";
    cout << "2. Read file\n";
    cin >> choice;

    if (choice == 1)
    {
        writeFile(fileName);
    }else if (choice == 2)
    {
        readFile(fileName);
    }

    return 0;
}
