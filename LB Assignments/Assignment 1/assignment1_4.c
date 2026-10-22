#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
/*
    Function Name : Check
    Input         : One Integer
    Output        : TRUE if divisible by 5, otherwise FALSE
    Description   : Checks whether a number is divisible by 5.
    Date          : 22/10/2026
    Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////////

typedef int bool;
#define TRUE 1
#define FALSE 0

bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
      
    int iValue = 0;
bool bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
       printf("Not Divisible by 5");
    }
     
    return EXIT_SUCCESS;
}
