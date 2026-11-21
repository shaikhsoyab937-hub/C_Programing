#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : LastChar
    Input         : String and Character
    Output        : Index of Last Occurrence
    Description   : Returns the index of last occurrence of
                    given character in the string.
    Date          : 15/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }

        iCnt++;
        str++;
    }

    return iPos;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string\n");
    scanf("%19[^\n]",arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Character location is %d\n",iRet);

    return EXIT_SUCCESS;
}