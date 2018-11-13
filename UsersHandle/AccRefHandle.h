
#if !defined(h_AccRefHandle)
#define h_AccRefHandle
#include <string>
#include <sstream>
#include "../DSA/basic/LinkedList.h"
#include "../Users/AccRef.h"
#include <iostream>
using namespace std;

LinkedList<AccRef> *accRefs = new LinkedList<AccRef>();

void processAccountRef(LinkedList<string> *list, LinkedList<AccRef> *accRefList)
{
    LinkedList<string> *temp = list;
    for (int i = 0; i < list->getSize(); i++)
    {
        string str = list->getElement(i);
        stringstream ss;
        ss << str;
        string aid, uid, tid;
        ss >> aid >> uid >> tid;
        // code-here
        AccRef *temp = new AccRef();
        temp->setAccountId(aid);
        temp->setUserId(uid);
        temp->setAccountTypeId(tid);
        accRefList->add(*temp);
    }
}
#endif // h_AccRefHandle
