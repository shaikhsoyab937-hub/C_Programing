#include<stdio.h>
#include<stdlib.h>

/*
//////////////////////////////////////////////////////////////

Function Name : Display
Input         : Integer
Output        : Negative numbers to zero and positive numbers
Description   : Accepts a number from the user and displays
                numbers from -N to N.
Date          : 30/10/2026
Author        : Soyab Nijam Shaikh

//////////////////////////////////////////////////////////////

*/
void Display(int iNo)
{
  int iCnt = 0;

    for(iCnt = -iNo; iCnt <= 0; iCnt++)   
    {
       printf("%d\t",iCnt);
    }
    
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