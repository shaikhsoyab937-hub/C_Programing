#include<stdio.h>
#include<stdlib.h>

/*
//////////////////////////////////////////////////////////////

Function Name : Pattern
Input         : Integer
Output        : Pattern of numbers and symbols
Description   : Accepts a number from the user and displays
                a pattern using numbers and symbols.
Date          : 31/10/2026
Author        : Soyab Nijam Shaikh

//////////////////////////////////////////////////////////////

*/

void Pattern(int iNo)
{
  int iCnt = 0;

  if(iNo < 0)
  {
     iNo = -iNo;
  }
  
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       printf("$\t*\t",iCnt);
    }

    printf("\n");
      
}
int main()
{
  int iValue = 0;
  printf("Enter number :\n");
  scanf("%d",&iValue);

  Pattern(iValue);




    return EXIT_SUCCESS;
}