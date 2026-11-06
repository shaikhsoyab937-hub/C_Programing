#include<stdio.h>
#include<stdlib.h>


///////////////////////////////////////////////////////////////
/*
    Function Name : CountOdd
    Input         : Integer Number
    Output        : Count of Odd Digits
    Description   : Counts the total odd digits in a number.
    Date          : 03/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

return EXIT_SUCCESS;

}