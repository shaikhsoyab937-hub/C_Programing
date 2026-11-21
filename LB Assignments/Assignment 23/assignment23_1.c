#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : strlwrx
    Input         : String
    Output        : Lowercase String
    Description   : Converts uppercase characters into lowercase.
    Date          : 15/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%19[^\n]",arr);

    strlwrx(arr);

    printf("Modified string is %s\n",arr);

    return EXIT_SUCCESS;
}