#include "calcDays.h"
#include "Date.h"

// calcDays:

// create function calcDays that takes in two Date class parameters and returns an int
int calcDays(Date dateOne, Date dateTwo)
{
    // declare two objects for date1 and date2
    Date date1, date2;
    // set parameters to date1 and date2
    date1 = dateOne;
    date2 = dateTwo;
    // declare two integer variables for days between the two dates ; daysDiff1 and daysDiff2
    int daysDiff1, daysDiff2;
    // declare one integer variable for difference between dates ; theDifference
    int theDifference;
    
    // calculate the days between 1/01/2023 and date1, and store in daysDiff1
    
    
    // calculate the days between 1/01/2023 and date2, and store in daysDiff2

    // assign theDifference with the difference between daysDiff1 and daysDiff2
    theDifference = daysDiff1 - daysDiff2;
    
    // return the absolute value of theDifference variable
    //return fabs(theDifference);
    return 0;
}

