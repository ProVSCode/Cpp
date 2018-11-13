#pragma once
#ifndef h_functionTime
#define h_functionTime
#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
using namespace std;

bool isLeapYear(int year);
int numsSecondOfAYear(int year);
void getDay(int &year, int &month, int &day, int &hour, int &minute, int &second);
string strCurrentDay();
#endif // !h_functionTime
