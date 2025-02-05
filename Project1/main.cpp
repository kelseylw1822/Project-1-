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
        string temp;
        cout << "Date tested positive: ";
        cin >> temp;
        int month = stoi(temp.substr(0,2));
        int day = stoi(temp.substr(3,2));
        int year = stoi(temp.substr(6,4));
        Date testPositive(day,month,year);
        cout << "Length of isolation: 7 days" << endl;
        testPositive.addDays(7);
        cout << "Return to classes: " + testPositive.showDate() << endl;
    }
    
    // if result is negative
    if (result == "negative" || result == "Negative")
    {
        string exposed;
        cout << "Exposed to positive case: ";
        cin >> exposed;
        // if they were not exposed, then prompt user they do not have to isolate
        if(exposed == "no" || exposed == "No")
        {
            cout << "Length of isolation: 0 days" << endl;
        }
        else // if result is negative and they were exposed
        {
            string exposed;
            cout << "Date exposed to positive case: " ;
            cin >> exposed;
            int monthExposed = stoi(exposed.substr(0,2));
            int dayExposed = stoi(exposed.substr(3,2));
            int yearExposed = stoi(exposed.substr(6,4));
            Date dateExposed(dayExposed,monthExposed,yearExposed);
            
            string vacination;
            cout << "Have you gotten your second vaccination dose: " ;
            cin >> vacination;
            
            if (vacination == "no" || vacination == "No")
            {
                cout << "Vaccination status at time of exposure: not fully vaccinated"  << endl;
                cout << "Lenght of isolation: 12 days" << endl;
                dateExposed.addDays(12);
                cout << "Return to classes: " + dateExposed.showDate() << endl;
            }
            else
            {
                // declare variables for days between exposure and when recived their second dose
                int daysBetween;
                
                string secondVac;
                cout << "Date second vaccination dose received: ";
                cin >> secondVac;
                int monthVac = stoi(secondVac.substr(0,2));
                int dayVac = stoi(secondVac.substr(3,2));
                int yearVac = stoi(secondVac.substr(6,4));
                Date secondDose(dayVac,monthVac,yearVac);
                
                daysBetween = calcDays(dateExposed, secondDose);
                cout << "TEST: " << daysBetween << endl;
                
                // if they were not fully vacinated by time of exposure, then prompt user they need to isolate for 12 days from day of exposure
                if (daysBetween < 14)
                {
                    cout << "Vaccination status at time of exposure: not fully vaccinated" << endl;
                    cout << "Length of isolation: 12 days" << endl;
                    dateExposed.addDays(12);
                    cout << "Return to classes: " + dateExposed.showDate() << endl;
                }
                // if they were fully vacinated by time of exposure, prompt user that they need to isolate for 3 days from the day of exposure
                else
                {
                    cout << "Vaccination status at time of exposure: fully vaccinated" << endl;
                    cout << "Length of isolation: 3 days" << endl;
                    dateExposed.addDays(3);
                    cout << "Return to classes: " + dateExposed.showDate() << endl;
                }
            }
        }
    }
        
    return 0;
}


