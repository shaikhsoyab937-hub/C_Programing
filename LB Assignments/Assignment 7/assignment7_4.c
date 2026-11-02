#include<stdio.h>
#include<stdlib.h>

/*
//////////////////////////////////////////////////////////////

Function Name : OddDisplay
Input         : Integer
Output        : Odd numbers up to N
Description   : Accepts a number from the user and displays
                all odd numbers from 1 to N.
Date          : 31/10/2026
Author        : Soyab Nijam Shaikh

//////////////////////////////////////////////////////////////

*/

void OddDisplay(int iNo)
{
  int iCnt = 0;
  for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
  {
    printf("%d\t",iCnt);
  }
      
}
int main()
{
  int iValue = 0;
  printf("Enter number :\n");
  scanf("%d",&iValue);

  OddDisplay(iValue);




    return EXIT_SUCCESS;
}