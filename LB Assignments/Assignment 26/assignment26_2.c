#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : Display
    Input         : Character
    Output        : Modified Character
    Description   : Converts small case into capital and
                    capital into small case. Other characters
                    remain unchanged.
    Date          : 16/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c\n",ch - 32);
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c\n",ch + 32);
    }
    else
    {
        printf("%c\n",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}