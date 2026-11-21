#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Input         : String
// Output        : TRUE or FALSE
// Description   : Checks whether the string contains vowels.
// Date          : 16/11/2026
// Author        : Soyab Nijam Shaikh
//
///////////////////////////////////////////////////////////////

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') ||
           (*str == 'i') || (*str == 'o') ||
           (*str == 'u') || (*str == 'A') ||
           (*str == 'E') || (*str == 'I') ||
           (*str == 'O') || (*str == 'U'))
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string:\n");
    scanf("%19[^\n]",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return EXIT_SUCCESS;
}