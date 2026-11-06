#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : NonFact
    Input         : Integer Number
    Output        : All Non-Factors
    Description   : Displays all non-factors of the given
                    number except 1 and itself.
    Date          : 03/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    NonFact(iValue);



    return EXIT_SUCCESS;
}