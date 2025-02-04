#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int day, month, year;
public:
    Date();
    Date(int d, int m, int y);
    bool setDay(int d);
    bool setMonth(int m);
    bool setYear(int y);
    int getDay();
    int getMonth();
    int getYear();
    string showDate();
    void addDays(int d);
};
    
#endif
