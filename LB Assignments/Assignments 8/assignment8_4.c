#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
/*
    Function Name : Table
    Input         : Integer
    Output        : Multiplication table
    Description   : Accepts a number and displays
                    its multiplication table.
    Date          : 01/11/2026
    Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

int Table(int iNo)
{  
   int iCnt = 0;
   if(iNo < 0)
   {
    iNo = -iNo;
   }
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
      printf("%d\t",iNo * iCnt);
    }
}
int main()
{
  int iValue = 0;

  printf("Enter Number : \n");
  scanf("%d",&iValue);

  Table(iValue);
 
  return EXIT_SUCCESS;
}