#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//      Function Name : CheckEven
//      Input         : Interger, 
//      Output        : BOOL
//      Description   : Checks whether number is even or odd
//      Date          : 22/10/2026
//      Athor         : Soyab Nijam Shaikh
//
//////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if (iNo % 2 == 0)
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
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    // Display result
    if (bRet == TRUE)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    return EXIT_SUCCESS;
}