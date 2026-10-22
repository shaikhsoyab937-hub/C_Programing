#include<stdio.h>
#include<stdlib.h>

/*
////////////////////////////////////////////////////////////////
    Function Name : DisplayConvert
    Input          : Character
    Output         : Converted Character
    Description    : Converts the case of a character
    Date           : 22/10/2026
    Author         : Soyab Nijam Shaikh
////////////////////////////////////////////////////////////////
*/

void DisplayConvert(char CValue)
{
    if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("%c\n", CValue - 32);
    }
    else if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("%c\n", CValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}