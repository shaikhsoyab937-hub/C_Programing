#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
/*
Function Name : FactorialDiff
Input         : Integer
Output        : Difference between even and odd factorial
Description   : Calculates even and odd factorial and
returns their difference.
Date          : 01/11/2026
Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

int FactorialDiff(int No)
{
int iCnt = 0;
int iEvenFact = 1;
int iOddFact = 1;


if(No < 0)
 {
  No = -No;
 }


for( iCnt = 2;  iCnt <= No;  iCnt = iCnt + 2)
{
    iEvenFact = iEvenFact *  iCnt;
}

for( iCnt = 1;  iCnt <= No;  iCnt =  iCnt + 2)
{
    iOddFact = iOddFact *  iCnt;
}

return iEvenFact - iOddFact;

}

int main()
{
int iValue = 0;
int iRet = 0;

printf("Enter number: ");
scanf("%d", &iValue);

iRet = FactorialDiff(iValue);

printf("Factorial difference is %d", iRet);

return EXIT_SUCCESS;

}