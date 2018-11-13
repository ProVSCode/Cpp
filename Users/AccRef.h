
#if !defined(h_AccRef)
#define h_AccRef
#include <string>
using namespace std;

class AccRef
{
  private:
    string accountId;
    string userId;
    string accountTypeId;

  public:
    AccRef();
    // AccRef(/* args */);
    // ~AccRef();
    bool isAccRef(string aid);
    string getUserId();
    string getAccountId();
    string getAccountTypeId();
    void setUserId(string uid);
    void setAccountId(string aid);
    void setAccountTypeId(string tid);
};

AccRef::AccRef()
{
    //do-nothing
}
// AccRef::AccRef(/* args */)
// {
// }

// AccRef::~AccRef()
// {
// }

bool AccRef::isAccRef(string aid)
{
    if (this->accountId == aid)
        return 1;
    else
        return 0;
}

string AccRef::getAccountId()
{
    return this->accountId;
}

string AccRef::getUserId()
{
    return this->userId;
}
string AccRef::getAccountTypeId()
{
    return this->accountTypeId;
}

void AccRef::setUserId(string uid)
{
    this->userId = uid;
}
void AccRef::setAccountId(string aid)
{
    this->accountId = aid;
}
void AccRef::setAccountTypeId(string tid)
{
    this->accountTypeId = tid;
}
#endif // h_AccRef
