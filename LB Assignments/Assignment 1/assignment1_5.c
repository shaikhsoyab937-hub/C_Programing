#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
/*
    Function Name : Accept
    Input         : One Integer
    Output        : Prints the '*' symbol the given number
                    of times.
    Description   : Displays the specified number of stars.
    Date          : 22/10/2026
    Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;
   
    for( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
       
    }

}
int main()
{
    int iValue = 0;
    iValue = 5;

     Accept(iValue);
     
    return EXIT_SUCCESS;
}
