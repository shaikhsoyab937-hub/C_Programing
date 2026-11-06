#include<stdio.h>
#include<stdlib.h>

typedef int bool;
///////////////////////////////////////////////////////////////
/*
    Function Name : CheckEqual
    Input         : Two Integer Numbers
    Output        : Boolean
    Description   : Checks whether two given numbers
                    are equal or not.
    Date          : 03/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////


#define true 1
#define false 0

bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Enter two numbers : ");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = CheckEqual(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }


    return EXIT_SUCCESS;
}