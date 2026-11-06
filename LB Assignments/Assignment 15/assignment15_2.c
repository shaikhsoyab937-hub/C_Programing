#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

///////////////////////////////////////////////////////////////
/*
    Function Name : Check
    Input         : Integer Number
    Output        : Boolean
    Description   : Checks whether given number is greater
                    than 100 or not.
    Date          : 06/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

#define true 1
#define false 0

BOOL CheckGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return EXIT_SUCCESS;
}