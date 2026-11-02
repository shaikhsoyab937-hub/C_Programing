#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
/*
Function Name : DollarToINR
Input         : Amount in US dollars
Output        : Amount in Indian rupees
Description   : Converts US dollars into Indian rupees
at the rate of 70 rupees per dollar.
Date          : 01/11/2026
Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

int DollarToINR(int No)
{
    int iCnt = 0;
    int iResult = 0;

    for( iCnt = 1; iCnt <=70; iCnt++)
    {
        iResult = iResult + No;
    }
    
    return iResult;
}

int main()
{
int iValue = 0;
int iRet = 0;

printf("Enter number of USD: ");
scanf("%d", &iValue);

iRet = DollarToINR(iValue);

printf("Value in INR is %d", iRet);

return EXIT_SUCCESS;

}