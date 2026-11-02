#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////
/*
    Function Name : Number
    Input         : Integer
    Output        : Small, Medium or Large
    Description   : Checks whether the number is small,
                    medium or large.
    Date          : 01/11/2026
    Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

void Number(int iNo)
{
      if(iNo < 50)
      {
        printf("Small");
      }
      else if(iNo < 100)
      {
        printf("Mediam");
      }
      else
      {
        printf("Large");
      }
}
int main()
{
  int iValue = 0;
  printf("Enter Number : \n");
  scanf("%d",&iValue);

  Number(iValue);
 
  return EXIT_SUCCESS;
}