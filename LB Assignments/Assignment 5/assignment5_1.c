#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
/*
    Function Name : CheckNumber
    Input         : Integer
    Output        : Positive Number, Negative Number or Zero
    Description   : Checks whether a number is positive,
                    negative or zero.
    Date          : 22/10/2026
    Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////////

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive Number");
    }
    else if(iValue < 0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("Zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
