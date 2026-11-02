#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
/*
    Function Name : TableRev
    Input         : Integer
    Output        : Multiplication table in reverse order
    Description   : Accepts a number and displays
                    its table in reverse order.
    Date          : 01/11/2026
    Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

int TableRev(int iNo)
{  
   int iCnt = 0;
   if(iNo < 0)
   {
    iNo = -iNo;
   }
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
      printf("%d\t",iNo * iCnt);
    }
}
int main()
{
  int iValue = 0;

  printf("Enter Number : \n");
  scanf("%d",&iValue);

  TableRev(iValue);
 
  return EXIT_SUCCESS;
}