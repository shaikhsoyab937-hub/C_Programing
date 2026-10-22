#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
/*
    Function Name : CheckLeapYear
    Input         : Year (Integer)
    Output        : Leap Year / Not a Leap Year / Invalid Year
    Description   : Checks whether a year is a leap year
                    according to Gregorian calendar rules.
    Date          : 22/10/2026
    Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid Year");
    }
    else if((iYear % 400 == 0) ||
            ((iYear % 4 == 0) && (iYear % 100 != 0)))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}