// Kelsey Wessel
// 1/30/25
// Problem : Provide students with a self-assessment tool they can use to determine if and for how long they must isolate

#include <iostream>
#include <string>
#include "calcDays.h"
#include "Date.h"
using namespace std;


// main:
int main()
{
    // declare variable for Covid test result
    string result;

    cout << "Test result: " ;
    // read in input for users tests results
    cin >> result;

    // if result is positive, then prompt user they must isolate for 7 days from date of test REGARDLESS
    if (result == "positive")
    {
        Date testPositive;
        cout << "Date tested positive: ";
  //      cin >> testPositive;
        cout << "Length of isolation: 7 days";
        testPositive.addDays(7);
        cout << "Return to classes: " + testPositive.showDate();
    }
    
    // if result is negative
    if (result == "negative")
    {
        string exposed;
        cout << "Exposed to positive case: ";
        cin >> exposed;
        // if they were not exposed, then prompt user they do not have to isolate
        if(exposed == "no")
        {
            cout << "Length of isolation: 0 days";
        }
        else // if result is negative and they were exposed
        {
            // declare variables for days between exposure and when recived their second dose
            int daysBetween;
            string vacination;
            // declare two Date class objects for the date they were exposed and when they recieved their second dose
            Date dateExposed, secondDose;
            cout << "Date exposed to positive case: " ;
    //        cin >> dateExposed;
            cout << "Second vaccination dose recieved: " ;
            cin >> vacination;
            if (vacination == "no")
            {
                cout << "Vaccination status at time of exposure: not fully vaccinated";
                cout << "Lenght of isolation: 12 days";
                dateExposed.addDays(12);
                cout << "Return to classes: " + dateExposed.showDate();
            }
            else
            {
                cout << "Date second vaccination dose received: ";
  //              cin >> secondDose;
                daysBetween = calcDays(dateExposed, secondDose);
                // if they were not fully vacinated by time of exposure, then prompt user they need to isolate for 12 days from day of exposure
                if (daysBetween < 14)
                {
                    cout << "Vaccination status at time of exposure: not fully vaccinated";
                    cout << "Length of isolation: 12 days";
                    dateExposed.addDays(12);
                    cout << "Return to classes: " + dateExposed.showDate();
                }
                // if they were fully vacinated by time of exposure, prompt user that they need to isolate for 3 days from the day of exposure
                else
                {
                    cout << "Vaccination status at time of exposure: fully vaccinated";
                    cout << "Length of isolation: 3 days";
                    dateExposed.addDays(3);
                    cout << "Return to classes: " + dateExposed.showDate();
                }
            }
        }
    }
        
    return 0;
}


