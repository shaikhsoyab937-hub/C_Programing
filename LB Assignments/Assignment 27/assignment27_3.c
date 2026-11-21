#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
// Function Name : Difference
// Input         : String
// Output        : Difference Between Small and Capital Characters
// Description   : Calculates the difference between the frequency
//                 of small and capital characters.
// Date          : 16/11/2026
// Author        : Soyab Nijam Shaikh
//
///////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }

        str++;
    }

    return (iSmall - iCapital);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%19[^\n]",arr);

    iRet = Difference(arr);

    printf("%d\n",iRet);

   return EXIT_SUCCESS;
}