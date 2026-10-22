#include <stdio.h>
#include <stdlib.h>

/*
////////////////////////////////////////////////////////////////
    Function Name : DisplayEvenFactor
    Input          : Integer
    Output         : Even Factors
    Description    : Displays Even Factors of a Number
    Date           : 22/10/2026
    Author         : Soyab Nijam Shaikh
////////////////////////////////////////////////////////////////
*/

void DisplayEvenFactor(int iNo)
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

    DisplayEvenFactor(iValue);

    return EXIT_SUCCESS;
}