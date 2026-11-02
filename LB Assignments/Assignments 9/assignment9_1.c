#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
/*
Function Name : Display
Input         : Integer
Output        : Pattern of stars
Description   : Accepts a number from user and displays
the pattern.
Date          : 01/11/2026
Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

void Display(int No)
{
int i = 0;
 if(No < 0)
 {
  No = -No;
 }

for(i = 1; i <= No; i++)
{
    printf("*\t");
}

for(i = 1; i <= No; i++)
{
    printf("#\t");
}

}

int main()
{
int iValue = 0;

printf("Enter number: ");
scanf("%d", &iValue);

Display(iValue);

return EXIT_SUCCESS;

}