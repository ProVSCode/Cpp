
#if !defined(h_readData)
#define h_readData

#include "../FileStream/readFile.h"
#include "../DSA/basic/linkedlist.h"
#include "../UsersHandle/AccountHandle.h"
#include "../UsersHandle/AccRefHandle.h"
#include "../UsersHandle/UserHandle.h"
#include "../UsersHandle/AccountTypeHandle.h"

void readData()
{
    LinkedList<string> *accountList = new LinkedList<string>();
    readFile("./Doc/account.txt", accountList);
    processAccount(accountList, accounts);

    LinkedList<string> *accRefList = new LinkedList<string>();
    readFile("./Doc/accRef.txt", accRefList);
    processAccountRef(accRefList, accRefs);

    LinkedList<string> *userList = new LinkedList<string>();
    readFile("./Doc/user.txt", userList);
    processUser(userList, users);

    LinkedList<string> *accountTypeList = new LinkedList<string>();
    readFile("./Doc/accountType.txt", accountTypeList);
    processAccType(accountTypeList, accountTypes);
}

#endif // h_readData
