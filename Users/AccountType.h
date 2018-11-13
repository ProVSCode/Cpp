
#if !defined(h_AccountType)
#define h_AccountType

#include <string>
using namespace std;

class AccountType
{
  private:
    string accountTypeId;
    string accountTypeName;

  public:
    AccountType(/* args */);
    ~AccountType();
    void setAccountTypeId(string tid);
    void setAccountTypeName(string tName);
    string getAccountTypeId();
    string getAccountTypeName();
    bool isAccountType(string tid);
};

AccountType::AccountType(/* args */)
{
}

AccountType::~AccountType()
{
}

void AccountType::setAccountTypeId(string tid)
{
    this->accountTypeId = tid;
}
void AccountType::setAccountTypeName(string tName)
{
    this->accountTypeName = tName;
}

string AccountType::getAccountTypeId()
{
    return this->accountTypeId;
}
string AccountType::getAccountTypeName()
{
    return this->accountTypeName;
}
bool AccountType::isAccountType(string tid)
{
    if (this->accountTypeId == tid)
    {
        return 1;
    }
    return 0;
}

#endif // h_AccountType
