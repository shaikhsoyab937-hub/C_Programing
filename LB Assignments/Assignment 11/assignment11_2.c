#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////

/*
    Function Name : RangeDisplayEven
    Input         : Starting point and Ending point
    Output        : Display all even numbers
    Description   : Displays even numbers between
                    starting point and ending point.
    Date          : 02/11/2026
    Author        : Soyab Nijam Shaikh
*/

////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point:\n");
    scanf("%d", &iValue1);

    printf("Enter ending point:\n");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);


return EXIT_SUCCESS;

}