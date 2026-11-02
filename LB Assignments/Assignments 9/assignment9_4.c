#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
/*
Function Name : OddFactorial
Input         : Integer
Output        : Odd factorial
Description   : Calculates the product of all odd
numbers up to the given number.
Date          : 01/11/2026
Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

int OddFactorial(int No)
{
int i = 0;
int iFact = 1;


if(No < 0)
 {
  No = -No;
 }

for(i = 1; i <= No; i = i + 2)
{
    iFact = iFact * i;
}

return iFact;

}

int main()
{
int iValue = 0;
int iRet = 0;

printf("Enter number: ");
scanf("%d", &iValue);

iRet = OddFactorial(iValue);

printf("Odd Factorial of number is %d", iRet);
return EXIT_SUCCESS;

}