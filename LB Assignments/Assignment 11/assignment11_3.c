#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////

/*
    Function Name : RangeSum
    Input         : Starting point and Ending point
    Output        : Addition of all numbers
    Description   : Returns addition of all positive
                    numbers between the given range.
    Date          : 02/11/2026
    Author        : Soyab Nijam Shaikh
*/

////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart <= 0 || iStart > iEnd)
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point:\n");
    scanf("%d", &iValue1);

    printf("Enter ending point:\n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range");
    }
    else
    {
        printf("Addition is %d", iRet);
    }

return EXIT_SUCCESS;

}