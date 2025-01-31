// Kelsey Wessel
// 1/30/25
// Problem : Provide students with a self-assessment tool they can use to determine if and for how long they must isolate

// main:

    // declare variable for Covid test result and date of test

    // read in input for users tests results

    // if result is positive, then prompt user they must isolate for 7 days from date of test REGARDLESS

    // if result is negative :

        // if they were not exposed, then prompt user they do not have to isolate

        // if result is negative and they were exposed:
        
            // declare int variable for days between exposure and when recived their second dose

            // declare two Date class objects for the date they were exposed and when they recieved their second dose
        
            // read in input for the objects

            // pass the two objects to function CalcDays

            // store result in the int variable for days between exposure and when recived their second dose

            // if the difference between exposure and when recived their second dose is >= 14

                // they were fully vacinated by time of exposure, so prompt user that they need to isolate for 3 days from the day of exposure

            // if the difference between exposure and when recived their second dose is < 14
            
                // if they were not fully vacinated by time of exposure, then prompt user they need to isolate for 12 days from day of exposure

// Date class:

    // declare three private attributes that are day, month, and year
    
    // create the defualt constructor containing day, month, and year

    // create the parameterized constructor containing day, month, and year

        // if any of the parameters are invalid, default date to 1/01/2023

    // create the SetDay(int day) method
        
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


// calcDays:

    // create function calcDays that takes in two Date class parameters and returns an int
    
        // declare two objects for date1 and date2

        // assign first parameter to date1 and the second to date2
    
        // declare two integer variables for days between the two dates ; daysDiff1 and daysDiff2

        // declare one integer variable for difference between dates ; theDifference

        // calculate the days between 1/01/2023 and date1, and store in daysDiff1

        // calculate the days between 1/01/2023 and date2, and store in daysDiff2

        // assign theDifference with the difference between daysDiff1 and daysDiff2
    
        // return the absolute value of theDifference variable

