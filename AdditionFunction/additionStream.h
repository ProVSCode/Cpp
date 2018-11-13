
#if !defined(h_additionStream)
#define h_additionStream
#include <string>
#include <sstream>
using namespace std;
string int2string(int number)
{
    string str;
    stringstream ss;
    ss << number;
    ss >> str;
    return str;
}

#endif // h_additionStream
