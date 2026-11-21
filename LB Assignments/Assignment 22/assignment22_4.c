#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : Pattern
    Input         : Integer Number
    Output        : Hash, Number and Star Pattern
    Description   : Displays hash, number and star
                    repeatedly.
    Date          : 14/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("#\t%d\t*\t", i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements\n");
    scanf("%d", &iValue);

    Pattern(iValue);


    return EXIT_SUCCESS;
}