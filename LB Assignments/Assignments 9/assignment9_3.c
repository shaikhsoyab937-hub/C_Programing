#include<stdio.h>
#include<stdlib.h>


////////////////////////////////////////////////////////////
/*
Function Name : EvenFactorial
Input         : Integer
Output        : Even factorial
Description   : Calculates the product of all even
numbers up to the given number.
Date          : 01/11/2026
Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

int EvenFactorial(int No)
{
int iCnt = 0;
int iFact = 1;

if(No < 0)
 {
  No = -No;
 }

for(iCnt = 2; iCnt <= No; iCnt = iCnt + 2)
{
    iFact = iFact * iCnt;
}

return iFact;

}

int main()
{
int iValue = 0;
int iRet = 0;

printf("Enter number: ");
scanf("%d", &iValue);

iRet = EvenFactorial(iValue);

printf("Even Factorial of number is %d", iRet);

return EXIT_SUCCESS;

}