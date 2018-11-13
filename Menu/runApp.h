
#if !defined(h_runApp)
#define h_runApp
#include <iostream>
#include <string>
#include "runAppAsAdmin.h"
#include "runAppAsUser.h"
#include "runAppAsGuest.h"
using namespace std;
void runApp(string accountTypeId)
{
    if (accountTypeId == "tid01")
    {
        runAppAsAdmin();
    }
    else if (accountTypeId == "tid02")
    {
        runAppAsUser();
    }
    else if (accountTypeId == "tid03")
    {
        runAppAsGuest();
    }
    else
    {
        cout << "Wrong accountTypeId\n";
    }
}

#endif // h_runApp
