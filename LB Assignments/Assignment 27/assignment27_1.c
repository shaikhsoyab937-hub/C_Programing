#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function Name : CountCapital
// Input         : String
// Output        : Count of Capital Characters
// Description   : Counts the capital characters from a string.
// Date          : 16/11/2026
// Author        : Soyab Nijam Shaikh
//
///////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    printf("Enter string:\n");
    scanf("%19[^\n]",arr);

    iRet = CountCapital(arr);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}