
#if !defined(h_AccountTypeHandle)
#define h_AccountTypeHandle

#include <iostream>
#include <string>
#include <sstream>
#include "../Users/AccountType.h"
#include "../DSA/basic/LinkedList.h"
using namespace std;
LinkedList<AccountType> *accountTypes = new LinkedList<AccountType>();

// rename processAccType later, now I'm not think a better name
void processAccType(LinkedList<string> *list, LinkedList<AccountType> *accountList)
{
    LinkedList<string> *temp = list;
    for (int i = 0; i < list->getSize(); i++)
    {
        string str = list->getElement(i);
        stringstream ss;
        ss << str;
        string tid, tName;
        ss >> tid >> tName;
        // code-here
        // cout << tid << ": " << tName << endl;
        AccountType *temp = new AccountType();
        temp->setAccountTypeId(tid);
        temp->setAccountTypeName(tName);
        accountList->add(*temp);
    }
}
#endif // h_AccountTypeHandle
