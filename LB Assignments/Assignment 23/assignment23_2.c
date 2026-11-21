#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : struprx
    Input         : String
    Output        : Uppercase String
    Description   : Converts lowercase characters into uppercase.
    Date          : 15/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    struprx(arr);

    printf("Modified string is %s\n",arr);

    return EXIT_SUCCESS;
}