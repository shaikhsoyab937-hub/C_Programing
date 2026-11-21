#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : Pattern
    Input         : Integer Number
    Output        : Even Number Pattern
    Description   : Displays even numbers from 2
                    up to the given count.
    Date          : 14/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t", i * 2);
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