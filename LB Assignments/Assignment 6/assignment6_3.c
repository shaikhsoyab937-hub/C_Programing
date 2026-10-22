#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
/*
    Function Name : CalculateDiscount
    Input         : Purchase Amount
    Output        : Final Payable Amount
    Description   : Calculates the final payable amount after
                    applying the discount based on purchase amount.
    Date          : 22/10/2026
    Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid Input");
    }
    else if(fAmount < 1000)
    {
        fDiscount = 0.0f;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f", fFinalAmount);
    }
    else if(fAmount < 5000)
    {
        fDiscount = fAmount * 0.10f;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f", fFinalAmount);
    }
    else
    {
        fDiscount = fAmount * 0.20f;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f", fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}