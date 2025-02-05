#include "calcDays.h"
#include "Date.h"

// calcDays:

// create function calcDays that takes in two Date class parameters and returns an int
int calcDays(Date dateOne, Date dateTwo)
{
    const int monthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    const int leapYear[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    // declare two objects for date1 and date2
    Date date1, date2;
    // set parameters to date1 and date2
    date1 = dateOne;
    date2 = dateTwo;
    // declare two integer variables for days between the two dates ; daysDiff1 and daysDiff2
    int daysDiff1 = 0;
    int daysDiff2 = 0;
    // declare one integer variable for difference between dates ; theDifference
    int theDifference;
    
    // calculate the days between 1/01/2023 and date1, and store in daysDiff1
    for (int i = 1 ; i < date1.getMonth(); i++)
    {
        if (date1.getYear() == 2023)
        {
            daysDiff1 += monthDays[i] ;
        }
        else
        {
            daysDiff1 += leapYear[i] ;
        }
    }
    daysDiff1 += date1.getDay() - 1;
    
    // calculate the days between 1/01/2023 and date2, and store in daysDiff2
    for (int i = 1 ; i < date2.getMonth(); i++)
    {
        if (date2.getYear() == 2023)
        {
            daysDiff2 += monthDays[i] ;
        }
        else
        {
            daysDiff2 += leapYear[i] ;
        }
    }
    daysDiff2 += date2.getDay() - 1;

    // assign theDifference with the difference between daysDiff1 and daysDiff2
    theDifference = fabs(daysDiff1 - daysDiff2);
    
    // return the absolute value of theDifference variable
    return theDifference;
}

