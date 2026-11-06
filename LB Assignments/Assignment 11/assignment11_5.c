#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////

/*
    Function Name : RangeDisplayRev
    Input         : Starting point and Ending point
    Output        : Display numbers in reverse order
    Description   : Displays all numbers between given
                    range in decreasing order.
    Date          : 02/11/2026
    Author        : Soyab Nijam Shaikh
*/

////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
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

    RangeDisplayRev(iValue1, iValue2);

return EXIT_SUCCESS;

}