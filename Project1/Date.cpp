#include <iostream>
#include <string>
using namespace std;

// Date class:

class Date
{
// declare three private attributes that are day, month, and year
private:
    int day, month, year;
public:
    // create the defualt constructor containing day, month, and year
    Date()
    {
        day = 1;
        month = 1;
        year = 2023;
    }
    // create the parameterized constructor containing day, month, and year
    Date(int d, int m, int y)
    {
        // VALIDATE THE DATE
        day = d;
        month = m;
        year = y;
    }
    // create the SetDay(int day) method
    bool setDay(int d)
    {
        return true;
    }
    // create the SetMonth(int month) method
    bool setMonth(int m)
    {
        return true;
    }
    // create the SetYear(int year) method
    bool setYear(int y)
    {
        return true;
    }
    // create the GetDay() method
    int getDay()
    {
        return day;
    }
    // create the GetMonth() method
    int getMonth()
    {
        return month;
    }
    // create the GetYear() method
    int getYear()
    {
        return year;
    }
    // create the ShowDate() method
    string showDate()
    {
        return " ";
    }
    // create the AddDays(int days) method
    void addDays(int d)
    {
        
    }
    
};
    


        // if any of the parameters are invalid, default date to 1/01/2023
        
        // assign parameter to private attribute day

    // create the SetMonth(int month) method
    
        // assign parameter to private attribute month

    // create the SetYear(int year) method
    
        // assign parameter to private attribute year

    // create the GetDay() method

        // return the private attribute day

    // create the GetMonth() method
    
        // return the private attribute month

    // create the GetYear() method

        // return the private attribute year

    // create the ShowDate() method

        // return the attributes day, month, and year as a string

    // create the AddDays(int days) method
        // add parameter to the private attribute days (adjust month/year if needed)
