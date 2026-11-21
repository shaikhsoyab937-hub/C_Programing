#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : Pattern
    Input         : Integer Number
    Output        : Reverse Number and Hash Pattern
    Description   : Displays numbers in reverse order
                    with hash symbols.
    Date          : 14/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;

    for(i = iNo; i >= 1; i--)
    {
        printf("%d\t#\t", i);
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