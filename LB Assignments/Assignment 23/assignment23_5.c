#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : CountWhite
    Input         : String
    Output        : Number of White Spaces
    Description   : Counts the number of white spaces in a string.
    Date          : 15/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%19[^\n]",arr);

    iRet = CountWhite(arr);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}