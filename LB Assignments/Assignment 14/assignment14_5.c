#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////
/*
    Function Name : FactDiff
    Input         : Integer Number
    Output        : Difference Between Sum of Factors and
                    Sum of Non-Factors
    Description   : Calculates difference between summation
                    of all factors and non-factors.
    Date          : 03/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    return iFactSum - iNonFactSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is : %d\n",iRet);

    return EXIT_SUCCESS;
}