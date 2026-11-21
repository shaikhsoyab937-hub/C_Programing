#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : Pattern
    Input         : Number of Rows and Columns
    Output        : Reverse Number Pattern
    Description   : Displays numbers in reverse order
                    from iCol to 1.
    Date          : 14/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t", j);
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