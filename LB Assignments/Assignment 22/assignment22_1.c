#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : Pattern
    Input         : Integer Number
    Output        : Alphabet Pattern
    Description   : Displays alphabets from A to given number.
    Date          : 14/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;

    for(i = 0; i < iNo; i++)
    {
        printf("%c\t", 'A' + i);
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