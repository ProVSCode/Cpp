
#if !defined(h_runAppAsAdmin)
#define h_runAppAsAdmin
#include <iostream>
#include "writeData.h"
#include "../AdditionFunction/additionStream.h"
using namespace std;

void addUser();
void addUserName(string userName);

void addAccount();
void addAccountName(string accountName, string accountPassword, string userName);
void runAppAsAdmin()
{
    cout << "You're admin. Code more to see more!\n";
    //code-here
    cout << "1. Add User\n";
    cout << "2. Add Account\n";

    int choice = 0;
    cin >> choice;
    switch (choice)
    {
    case 1:
        addUser();
        break;
    case 2:
        addAccount();
        break;
    default:
        break;
    }
}

void addUser()
{
    system("cls");
    cout << "Add user\n";
    cout << "Type user name: ";
    string inputUserName;
    cin >> inputUserName;
    cout << "Xac nhan them user \" " << inputUserName << "\"";
    cout << " y/n?\n";
    char choice;
    cin >> choice;
    switch (choice)
    {
    case 'y':
        cout << "Xac nhan thanh cong\n";
        addUserName(inputUserName);
        break;
    case 'n':
        cout << "Da huy them user!\n";
        break;

    default:
        break;
    }
}

void addUserName(string userName)
{
    User userTemp;
    string userId;
    string idIndex = int2string(users->getSize() + 1);
    // if (idIndex.length() == 1)
    // {
    //     idIndex = "0" + idIndex;
    // }
    for (int i = idIndex.length(); i < 2; i++)
    {
        idIndex = "0" + idIndex;
    }
    userId = "uid" + idIndex;
    userTemp.setUserId(userId);
    userTemp.setUserName(userName);
    users->add(userTemp);
    string doc = userId + "\t" + userName;
    writeData("user", doc);
}

void addAccount()
{
    system("cls");
    cout << "Add account\n";
    cout << "Type user name: ";
    string inputUserName;
    cin >> inputUserName;
    cout << "Type account name: ";
    string inputAccountName;
    cin >> inputAccountName;
    cout << "Type account password: ";
    string inputAccountPassword;
    cin >> inputAccountPassword;
    cout << "Xac nhan them account \" " << inputAccountName << "\"";
    cout << " y/n?\n";
    char choice;
    cin >> choice;
    switch (choice)
    {
    case 'y':
        cout << "Xac nhan thanh cong\n";
        addAccountName(inputUserName, inputAccountPassword, inputUserName);
        break;
    case 'n':
        cout << "Da huy them tai khoan!\n";
        break;

    default:
        break;
    }
}
void addAccountName(string accountName, string accountPassword, string userName)
{
    //code-here
}
#endif // h_runAppAsAdmin
