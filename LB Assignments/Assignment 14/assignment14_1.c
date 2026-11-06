#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : MultFact
    Input         : Integer Number
    Output        : Multiplication of All Factors
    Description   : Calculates multiplication of all factors
                    of the given number except itself.
    Date          : 03/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication is : %d\n",iRet);



    return EXIT_SUCCESS;
}