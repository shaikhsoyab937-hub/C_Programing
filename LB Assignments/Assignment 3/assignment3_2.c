#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
/*
    Function Name : DisplayFactor
    Input          : Integer
    Output         : Integer Factors
    Description    : Displays Even Factors
    Date           : 22/10/2026
    Author         : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}