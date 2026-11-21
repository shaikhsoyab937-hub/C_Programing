#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function Name : Reverse
// Input         : String
// Output        : Reversed String
// Description   : Reverses the given string in place.
// Date          : 16/11/2026
// Author        : Soyab Nijam Shaikh
//
///////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    int iStart = 0;
    int iEnd = 0;
    char ch = '\0';

    while(str[iEnd] != '\0')
    {
        iEnd++;
    }

    iEnd--;

    while(iStart < iEnd)
    {
        ch = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = ch;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%19[^\n]",arr);

    Reverse(arr);

    printf("Modified string is %s\n",arr);

   return EXIT_SUCCESS;
}