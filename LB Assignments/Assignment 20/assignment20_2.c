#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////
/*
    Function Name : Pattern
    Input         : Number of Rows and Columns
    Output        : Star, Hash and At Pattern
    Description   : Displays stars before secondary diagonal,
                    hash on secondary diagonal and
                    at symbols after secondary diagonal.
    Date          : 13/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i + j < iCol + 1)
            {
                printf("*\t");
            }
            else if(i + j == iCol + 1)
            {
                printf("#\t");
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}