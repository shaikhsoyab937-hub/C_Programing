#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
/*
    Function Name : CheckMultipleDivisibility
    Input         : Integer
    Output        : Divisible by Both, Divisible by 3 Only,
                    Divisible by 5 Only, or Not Divisible by Either
    Description   : Checks divisibility by 3 and 5.
    Date          : 22/10/2026
    Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////////

void CheckMultipleDivisibility(int iValue)
{
    if((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("Divisible by Both");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3 Only");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 Only");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}