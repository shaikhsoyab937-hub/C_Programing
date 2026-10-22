#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////
//
//      Function Name : Display
//      Input         : Integer, Integer
//      Output        : void
//      Description   : Displays first number given number of times
//      Date          : 22/10/2026
//      Author        : Soyab Nijam Shaikh
//
////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return EXIT_SUCCESS;
}
