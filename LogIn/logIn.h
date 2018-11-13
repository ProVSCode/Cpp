
#if !defined(h_logIn)
#define h_logIn
#include <iostream>
#include <string>
#include "../UsersHandle/AccountHandle.h"
#include "../UsersHandle/AccRefHandle.h"
#include "../UsersHandle/UserHandle.h"
#include "../UsersHandle/AccountTypeHandle.h"
using namespace std;

bool isLogIn = false;

class CurrentAccount
{
  private:
    string accountName;
    string accountId;
    string userId;
    string userName;
    string accountTypeId;
    string accountTypeName;

  public:
    CurrentAccount(/* args */);
    ~CurrentAccount();
    void setAccountName(string account);
    void setAccountId(string aid);
    void setUserId(string uid);
    void setUserName(string uName);
    void setAccountTypeId(string tid);
    void setAccountTypeName(string tName);
    string getAccountName();
    string getAccountId();
    string getUserId();
    string getUserName();
    string getAccountTypeId();
    string getAccountTypeName();
};

CurrentAccount::CurrentAccount(/* args */)
{
}

CurrentAccount::~CurrentAccount()
{
}

void CurrentAccount::setAccountName(string account)
{
    this->accountName = account;
}
void CurrentAccount::setAccountId(string aid)
{
    this->accountId = aid;
}
void CurrentAccount::setUserId(string uid)
{
    this->userId = uid;
}
void CurrentAccount::setUserName(string uName)
{
    this->userName = uName;
}
void CurrentAccount::setAccountTypeId(string tid)
{
    this->accountTypeId = tid;
}
void CurrentAccount::setAccountTypeName(string tName)
{
    this->accountTypeName = tName;
}

string CurrentAccount::getAccountName()
{
    return this->accountName;
}
string CurrentAccount::getAccountId()
{
    return this->accountId;
}
string CurrentAccount::getUserId()
{
    return this->userId;
}
string CurrentAccount::getUserName()
{
    return this->userName;
}
string CurrentAccount::getAccountTypeId()
{
    return this->accountTypeId;
}
string CurrentAccount::getAccountTypeName()
{
    return this->accountTypeName;
}

CurrentAccount currentAccount;

void accountName2aid(string account, string &aid)
{
    for (int i = 0; i < accounts->getSize(); i++)
    {
        Account accTemp = accounts->getElement(i);
        if (accTemp.getAccountName() == account)
        {
            aid = accTemp.getAccountId();
        }
    }
}

void aid2uid(string aid, string &uid)
{
    for (int i = 0; i < accRefs->getSize(); i++)
    {
        AccRef accRefTemp = accRefs->getElement(i);
        if (accRefTemp.isAccRef(aid))
        {
            uid = accRefTemp.getUserId();
            return;
        }
    }
}

void uid2uName(string uid, string &uName)
{
    for (int i = 0; i < users->getSize(); i++)
    {
        User userTemp = users->getElement(i);
        if (userTemp.getUserId() == uid)
        {
            uName = userTemp.getUserName();
            return;
        }
    }
}
void aid2tid(string aid, string &tid)
{
    for (int i = 0; i < accRefs->getSize(); i++)
    {
        AccRef accRefTemp = accRefs->getElement(i);
        if (accRefTemp.getAccountId() == aid)
        {
            tid = accRefTemp.getAccountTypeId();
            return;
        }
    }
}
void tid2tName(string tid, string &tName)
{
    for (int i = 0; i < accountTypes->getSize(); i++)
    {
        AccountType accTypeTemp = accountTypes->getElement(i);
        if (accTypeTemp.isAccountType(tid))
        {
            tName = accTypeTemp.getAccountTypeName();
            return;
        }
    }
}

bool logInMenu()
{
    string inputAcc, inputPass;
    cout << "Dang nhap!\n";
    cout << "Ten dang nhap: ";
    cin >> inputAcc;
    cout << "Mat khau: ";
    cin >> inputPass;
    for (int i = 0; i < accounts->getSize(); i++)
    {
        Account accTemp = accounts->getElement(i);
        if (accTemp.compare(inputAcc, inputPass))
        {
            cout << "Dang nhap thanh cong!\n";
            isLogIn = true;
            currentAccount.setAccountName(inputAcc);
            string currAccId;
            string currUserId;
            string currUserName;
            string currAccountTypeId;
            string currAccountTypeName;

            accountName2aid(inputAcc, currAccId);
            aid2uid(currAccId, currUserId);
            uid2uName(currUserId, currUserName);
            aid2tid(currAccId, currAccountTypeId);
            tid2tName(currAccountTypeId, currAccountTypeName);

            currentAccount.setAccountId(currAccId);
            currentAccount.setUserId(currUserId);
            currentAccount.setUserName(currUserName);
            currentAccount.setAccountTypeId(currAccountTypeId);
            currentAccount.setAccountTypeName(currAccountTypeName);
            return 1;
        }
    }
    cout << "Sai ten dang nhap hoac mat khau!\n";
    return 0;
}

void logOut()
{
    cout << "Dang xuat thanh cong!\n";
    isLogIn = false;
}

#endif // h_logIn
