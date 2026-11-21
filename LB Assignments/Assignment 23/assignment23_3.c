#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : strtogglex
    Input         : String
    Output        : Toggled String
    Description   : Converts uppercase characters into lowercase
                    and lowercase characters into uppercase.
    Date          : 15/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%19[^\n]",arr);

    strtogglex(arr);

    printf("Modified string is %s\n",arr);

    return EXIT_SUCCESS;
}