
#if !defined(h_writeFile)
#define h_writeFile

#include <iostream>
#include <fstream>
#include <string>
#include "../DSA/basic/linkedlist.h"
using namespace std;
void writeEnd(string filePath, string doc)
{
    fstream file;
    // Need both ios::in | ios::out to seekg()
    file.open(filePath, ios::in | ios::out);
    if (file.fail())
    {
        cout << "Fail to load file\n";
    }
    else
    {
        file.seekg(0, file.end);
        file << endl
             << doc;
    }
    file.close();
}

#endif // h_writeFile
