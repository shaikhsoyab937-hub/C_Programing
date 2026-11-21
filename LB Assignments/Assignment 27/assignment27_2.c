#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function Name : CountSmall
// Input         : String
// Output        : Count of Small Characters
// Description   : Counts the small characters from a string.
// Date          : 16/11/2026
// Author        : Soyab Nijam Shaikh
//
///////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(arr);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}