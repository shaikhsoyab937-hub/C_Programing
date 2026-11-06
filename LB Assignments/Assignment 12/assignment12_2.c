#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : ChkZero
    Input         : Integer Number
    Output        : Contains Zero or Not
    Description   : Checks whether a number contains zero.
    Date          : 03/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void ChkZero(int iNo)
{
    int iDigit = 0;
    int bFlag = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            bFlag = 1;
            break;
        }

        iNo = iNo / 10;
    }

    if(bFlag == 1)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    ChkZero(iValue);

return EXIT_SUCCESS;

}