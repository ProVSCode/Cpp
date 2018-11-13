
#if !defined(h_writeData)
#define h_writeData

#include "../FileStream/writeFile.h"
#include "../DSA/basic/linkedlist.h"
#include "../UsersHandle/AccountHandle.h"
#include "../UsersHandle/AccRefHandle.h"
#include "../UsersHandle/UserHandle.h"
#include "../UsersHandle/AccountTypeHandle.h"

void write2User(string doc)
{
    writeEnd("./Doc/user.txt", doc);
}
void write2Account(string doc)
{
}
void write2AccRef(string doc)
{
}
void write2AccountType(string doc)
{
}

void writeData(string docType, string doc)
{
    if (docType == "user")
    {
        write2User(doc);
    }
    else if (docType == "account")
    {
        write2Account(doc);
    }
    else if (docType == "accRef")
    {
        write2AccRef(doc);
    }
    else if (docType == "accountType")
    {
        write2AccountType(doc);
    }
    else
    {
        cout << "Wrong docType\n";
    }
}

#endif // h_writeData
