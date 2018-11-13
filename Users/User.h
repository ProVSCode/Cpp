
#if !defined(h_User)
#define h_User
#include <string>
using namespace std;

class User
{
  private:
    string userName;
    string userId;

  public:
    User();
    // User(/* args */);
    // ~User();
    void setUserName(string acc);
    void setUserId(string id);
    string getUserName();
    string getUserId();
    bool isUser(string uid);
};

User::User()
{
    //do-nothing
}
// User::User(/* args */)
// {
// }

// User::~User()
// {
// }
void User::setUserName(string acc)
{
    this->userName = acc;
}

void User::setUserId(string id)
{
    this->userId = id;
}

string User::getUserName()
{
    return this->userName;
}

string User::getUserId()
{
    return this->userId;
}

bool User::isUser(string uid)
{
    if (this->userId == uid)
    {
        return 1;
    }
    return 0;
}

#endif // h_User
