#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : DisplayASCII
    Input         : No Input
    Output        : ASCII Table
    Description   : Displays symbol, decimal, hexadecimal and
                    octal representation of ASCII values
                    from 0 to 255.
    Date          : 16/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\t%x\t\t%o\n",
                iCnt, iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}