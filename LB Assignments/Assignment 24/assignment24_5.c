#include<stdio.h>
#include<stdlib.h>
#include<string.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : StrRevX
    Input         : String
    Output        : Reversed String
    Description   : Reverses the given string in place.
    Date          : 15/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    int iStart = 0;
    int iEnd = strlen(str) - 1;
    char temp;

    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%19[^\n]",arr);

    StrRevX(arr);

    printf("Modified string is %s\n",arr);

    return EXIT_SUCCESS;
}