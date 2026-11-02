#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
/*
Function Name : FhtoCs
Input         : Temperature in Fahrenheit
Output        : Temperature in Celsius
Description   : Converts Fahrenheit into Celsius using
formula (Fahrenheit - 32) * (5.0 / 9.0).
Date          : 01/11/2026
Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
double dCelsius = 0.0;
int iCnt = 0;

for(iCnt = 0; iCnt< 1; iCnt++)
{
    dCelsius = (fTemp - 32) *(5.0/9.0);
}

return dCelsius;

}

int main()
{
float fValue = 0.0f;
double dRet = 0.0;

printf("Enter temperature in Fahrenheit: ");
scanf("%f", &fValue);

dRet = FhtoCs(fValue);

printf("Temperature in Celsius is %lf\n", dRet);

return EXIT_SUCCESS;

}