#include<stdio.h>
#include<stdlib.h>

/*
//////////////////////////////////////////////////////////////

Function Name : MultipleDisplay
Input         : Integer
Output        : First 5 multiples of N
Description   : Accepts a number from the user and displays
                the first 5 multiples of that number.
Date          : 31/10/2026
Author        : Soyab Nijam Shaikh

//////////////////////////////////////////////////////////////

*/

void MultipleDisplay(int iNo)
{
  int iCnt = 1;
  for(iCnt = 1; iCnt <= 5; iCnt ++)
  {
    printf("%d\t",iNo * iCnt);
  }
      
}
int main()
{
  int iValue = 0;
  printf("Enter number :\n");
  scanf("%d",&iValue);

  MultipleDisplay(iValue);




    return EXIT_SUCCESS;
}