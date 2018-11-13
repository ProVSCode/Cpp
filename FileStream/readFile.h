#if !defined(h_readFile)
#define h_readFile
#include <iostream>
#include <fstream>
#include <string>
#include "../DSA/basic/linkedlist.h"
using namespace std;
void readFile(string filePath, LinkedList<string> *list)
{
    fstream file;
    file.open(filePath, ios::in);

    string str;
    while (!file.eof())
    {
        getline(file, str);
        // cout << str << endl;
        list->add(str);
    }
    file.close();
    // list->display();
}
#endif // h_readFile
