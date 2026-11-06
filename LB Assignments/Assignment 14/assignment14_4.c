#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : SumNonFact
    Input         : Integer Number
    Output        : Summation of All Non-Factors
    Description   : Calculates sum of all non-factors
                    of the given number.
    Date          : 03/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 2; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summation is : %d\n",iRet);

    return EXIT_SUCCESS;
}