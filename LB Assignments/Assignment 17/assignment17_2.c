#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////
/*
    Function Name : Pattern
    Input         : Number of Rows and Columns
    Output        : Display Even and Odd Numbers
    Description   : Displays alternate even and odd
                    number rows.
    Date          : 11/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol + 1; j++)
        {
            if(i % 2 != 0)
            {
                printf("%d\t", 2 * j);
            }
            else
            {
                printf("%d\t", (2 * j) - 1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);


    return EXIT_SUCCESS;
}