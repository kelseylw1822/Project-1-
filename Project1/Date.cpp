#include "Date.h"

// Date class:

// default constructor if date is invalid
Date::Date() : day(1), month(1), year(2023) {}

// create the parameterized constructor containing day, month, and year
Date::Date(int d, int m, int y)
{
    // check if date is valid
    if (setMonth(m) && setYear(y) && setDay(d) )
    {
        day = d;
        month = m;
        year = y;
    }
    else
    {
        *this = Date(); // call defualt constructor if the date is invalid
    }
}

// create the SetDay(int day) method
bool Date::setDay(int d)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (d > 0 && d < 32)
        {
            return true;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (d > 0 && d < 31)
        {
            return true;
        }
    }
    else if (month == 2)
    {
        if (year == 2023)
        {
            if (d > 0 && d < 29)
            {
                return true;
            }
        }
        else if (year == 2024)
        {
            if (d > 0 && d < 30)
            {
                return true;
            }
        }
    }
    return false;
}

// create the SetMonth(int month) method
bool Date::setMonth(int m)
{
    if (m > 0 && m  < 13)
    {
        month = m;
        return true;
    }
    else
    {
        return false;
    }
}
// create the SetYear(int year) method
bool Date::setYear(int y)
{
    if (y == 2023 || y == 2024)
    {
        year = y;
        return true;
    }
    return false;
}
// create the GetDay() method
int Date::getDay()
{
    return day;
}
// create the GetMonth() method
int Date::getMonth()
{
    return month;
}
// create the GetYear() method
int Date::getYear()
{
    return year;
}
// create the ShowDate() method
string Date::showDate()
{
    // prints the date and includes a 0 before the month or day if it is less than 10.
    return (month < 10 ? "0" : "") + to_string(month) + "/" + (day < 10 ? "0" : "") + to_string(day) + "/" + to_string(year);
}
// create the AddDays(int days) method
void Date::addDays(int d)
{
    
}

