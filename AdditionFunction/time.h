
#if !defined(h_time)
#define h_time

#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
using namespace std;

bool isLeapYear(int year);
int numsSecondOfAYear(int year);
void getDay(int &year, int &month, int &day, int &hour, int &minute, int &second);
string strCurrentDay();

bool isLeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400)
            {
                return 1;
            }
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
}
int numsSecondOfAYear(int year)
{
    if (isLeapYear(year) == 1)
    {
        return 31622400;
    }
    else
        return 31536000;
}
void getDay(int &year, int &month, int &day, int &hour, int &minute, int &second)
{
    int t = time(0);

    //Calculation Year
    int yearTemp = 1969;
    while (true)
    {
        yearTemp++;
        if (isLeapYear(yearTemp) == 1 && t < 31622400)
        {
            break;
        }
        else if (isLeapYear(yearTemp) == 0 && t < 31536000)
        {
            break;
        }
        t -= numsSecondOfAYear(yearTemp);
    }
    int dayOfYear = t / 86400;
    year = yearTemp;

    //Calculation Month

    int M[13];
    M[1] = 31;
    M[3] = 31;
    M[5] = 31;
    M[7] = 31;
    M[8] = 31;
    M[10] = 31;
    M[12] = 31;
    M[2] = 28;
    M[4] = 30;
    M[6] = 30;
    M[9] = 30;
    M[11] = 30;
    if (isLeapYear(yearTemp))
    {
        M[2] = 29;
    }
    int monthTemp = 1;
    int iMonth = 1;
    int dayTemp = dayOfYear;

    while (dayTemp > M[iMonth])
    {
        dayTemp -= M[iMonth];
        monthTemp++;
        iMonth++;
    }
    month = monthTemp;
    day = dayTemp;

    //Calculation hour, minute, second
    t -= 86400 * dayOfYear;
    int hourTemp = t / 3600 + 7; // GMT +7
    t = t % 3600;
    //t -= 3600 * hourTemp;
    int minuteTemp = t / 60;
    t = t % 60;
    //t -= 60 * minuteTemp;
    int secondTemp = t;
    hour = hourTemp;
    minute = minuteTemp;
    second = secondTemp;
}
string strCurrentDay()
{
    //int t = time(0);
    int year, month, day, hour, minute, second;
    getDay(year, month, day, hour, minute, second);
    string strTemp;
    string strYear, strMonth, strDay;
    stringstream ssYear, ssMonth, ssDay;
    ssYear << year;
    ssYear >> strYear;
    ssMonth << month;
    ssMonth >> strMonth;
    if (month < 10)
    {
        strMonth = "0" + strMonth;
    }
    ssDay << day;
    ssDay >> strDay;
    if (day < 10)
    {
        strDay = "0" + strDay;
    }
    //cout << strYear << " " << strMonth << " " << strDay << endl;
    strTemp = strYear + " " + strMonth + " " + strDay;
    return strTemp;
}

#endif // h_time
