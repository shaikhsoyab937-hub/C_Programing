#include<stdio.h>
#include<stdlib.h>


///////////////////////////////////////////////////////////////
/*
    Function Name : DisplayReverse
    Input         : Integer Number
    Output        : Digits in Reverse Order
    Description   : Displays digits of a number in reverse order.
    Date          : 03/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void DisplayReverse(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

return EXIT_SUCCESS;

}