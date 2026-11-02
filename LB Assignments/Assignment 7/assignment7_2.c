#include<stdio.h>
#include<stdlib.h>

/*
//////////////////////////////////////////////////////////////

Function Name : Display
Input         : Integer
Output        : Numbers from 1 to N
Description   : Accepts a number from the user and displays
                all numbers from 1 to N.
Date          : 31/10/2026
Author        : Soyab Nijam Shaikh

//////////////////////////////////////////////////////////////

*/

void Display(int iNo)
{
  int iCnt = 0;

  
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       printf("%d\t",iCnt);
    }

    printf("\n");
      
}
int main()
{
  int iValue = 0;
  printf("Enter number :\n");
  scanf("%d",&iValue);

  Display(iValue);




    return EXIT_SUCCESS;
}