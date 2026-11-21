#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : Display
    Input         : Character
    Output        : Decimal, Octal and Hexadecimal Values
    Description   : Displays ASCII value of given character
                    in decimal, octal and hexadecimal format.
    Date          : 16/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal      : %d\n",ch);
    printf("Octal        : %04o\n",ch);
    printf("Hexadecimal  : 0X%X\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}