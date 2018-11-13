
#if !defined(h_UserHandle)
#define h_UserHandle

#include <string>
#include <sstream>
#include "../DSA/basic/LinkedList.h"
#include "../Users/User.h"
#include <iostream>
using namespace std;
LinkedList<User> *users = new LinkedList<User>();
void processUser(LinkedList<string> *list, LinkedList<User> *userList)
{
    LinkedList<string> *temp = list;
    for (int i = 0; i < list->getSize(); i++)
    {
        string str = list->getElement(i);
        stringstream ss;
        ss << str;
        string uid, uName;
        ss >> uid >> uName;
        // code-here
        User *temp = new User();
        temp->setUserId(uid);
        temp->setUserName(uName);
        userList->add(*temp);
    }
}
#endif // h_UserHandle
