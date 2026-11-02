#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
/*
    Function Name : Factorial
    Input         : Integer
    Output        : Factorial of given number
    Description   : Calculates the factorial of a
                    given number.
    Date          : 01/11/2026
    Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
  int iFact = 1;
  int iCnt = 0;

   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
     iFact = iFact * iCnt;
   }
    return iFact;
}
int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter Number : \n");
  scanf("%d",&iValue);

  iRet = Factorial(iValue);

  printf("Factorial of number is : %d\n",iRet);
 
  return EXIT_SUCCESS;
}