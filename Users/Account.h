
#if !defined(h_Account)
#define h_Account
#include <string>
using namespace std;

class Account
{
  private:
    string accountName;
    string accountPassword;
    string accountId;

  public:
    Account();
    // Account(/* args */);
    // ~Account();
    string getAccountName();
    string getAccountPassword();
    string getAccountId();
    void setAccountName(string acc);
    void setAccountPassword(string pass);
    void setAccountId(string id);
    bool compare(string acc, string pass);
};

Account::Account()
{
    //do-nothing
}
// Account::Account(/* args */)
// {
// }

// Account::~Account()
// {
// }

string Account::getAccountName()
{
    return this->accountName;
}
string Account::getAccountPassword()
{
    return this->accountPassword;
}
string Account::getAccountId()
{
    return this->accountId;
}

bool Account::compare(string acc, string pass)
{
    if (this->accountName == acc && this->accountPassword == pass)
        return 1;
    else
        return 0;
}

void Account::setAccountName(string acc)
{
    this->accountName = acc;
}

void Account::setAccountPassword(string pass)
{
    this->accountPassword = pass;
}
void Account::setAccountId(string id)
{
    this->accountId = id;
}

#endif // h_Account
