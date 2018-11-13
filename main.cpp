#include <iostream>
#include "Menu/readData.h"
#include "LogIn/logIn.h"
#include "Menu/menu.h"
#include "Menu/runApp.h"
#include "FileStream/writeFile.h"
#include "AdditionFunction/time.h"
using namespace std;
int main(int argc, char const *argv[])
{
    cout << strCurrentDay() << endl;
    readData();
    menuStart();
    if (isLogIn)
    {
        system("cls");
        runApp(currentAccount.getAccountTypeId());
    }

    // writeEnd("Doc/test.txt", "Im writing 2");

    system("pause");
    return 0;
}
