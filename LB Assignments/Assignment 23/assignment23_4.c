#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : DisplayDigit
    Input         : String
    Output        : Display Only Digits
    Description   : Displays only digit characters from a string.
    Date          : 15/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%19[^\n]",arr);

    DisplayDigit(arr);

    printf("\n");

    return EXIT_SUCCESS;
}