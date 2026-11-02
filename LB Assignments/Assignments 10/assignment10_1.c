#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
/*
Function Name : CircleArea
Input         : Radius of circle
Output        : Area of circle
Description   : Calculates area of circle using
formula PI * Radius * Radius.
Date          : 01/11/2026
Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
double dArea = 0.0;
int iCnt = 0;

for(iCnt = 0; iCnt < 1; iCnt++)
{
   dArea = 3.14 * fRadius * fRadius;
}

return dArea;

}

int main()
{
float fValue = 0.0f;
double dRet = 0.0;

printf("Enter radius: ");
scanf("%f", &fValue);

dRet = CircleArea(fValue);

printf("Area of circle is %lf\n", dRet);

return EXIT_SUCCESS;

}