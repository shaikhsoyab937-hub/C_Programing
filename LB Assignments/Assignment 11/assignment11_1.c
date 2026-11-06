#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////

/*
    Function Name : RangeDisplay
    Input         : Starting point and Ending point
    Output        : Display all numbers between range
    Description   : Displays all numbers from starting
                    point to ending point.
    Date          : 02/11/2026
    Author        : Soyab Nijam Shaikh
*/

////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point:\n");
    scanf("%d", &iValue1);

    printf("Enter ending point:\n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);


return EXIT_SUCCESS;

}