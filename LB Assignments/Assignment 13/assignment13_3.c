#include<stdio.h>
#include<stdlib.h>


///////////////////////////////////////////////////////////////
/*
    Function Name : CountRange
    Input         : Integer Number
    Output        : Count of Digits Between 3 and 7
    Description   : Counts the digits which are greater
                    than 3 and less than 7.
    Date          : 03/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 3 && iDigit < 7)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);


return EXIT_SUCCESS;

}