#if !defined(h_AccountHandle)
#define h_AccountHandle
#include <string>
#include <sstream>
#include "../DSA/basic/LinkedList.h"
#include "../Users/Account.h"
#include <iostream>
using namespace std;

LinkedList<Account> *accounts = new LinkedList<Account>();

// rename processAccount later, now I'm not think a better name
void processAccount(LinkedList<string> *list, LinkedList<Account> *accountList)
{
    LinkedList<string> *temp = list;
    for (int i = 0; i < list->getSize(); i++)
    {
        string str = list->getElement(i);
        stringstream ss;
        ss << str;
        string acc, pass, accId;
        ss >> acc >> pass >> accId;
        // code-here
        Account *temp = new Account();
        temp->setAccountName(acc);
        temp->setAccountPassword(pass);
        temp->setAccountId(accId);
        accountList->add(*temp);
    }
}

#endif // h_AccountHandle
