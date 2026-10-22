#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
/*
    Function Name : FindGreater
    Input         : Two Integers
    Output        : Greater Number or Both Numbers Are Equal
    Description   : Finds the greater of two numbers.
    Date          : 22/10/2026
    Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////////

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater", iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Greater", iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}