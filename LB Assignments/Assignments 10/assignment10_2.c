#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
/*
Function Name : RectArea
Input         : Width and Height of rectangle
Output        : Area of rectangle
Description   : Calculates area of rectangle using
formula Width * Height.
Date          : 01/11/2026
Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
double dArea = 0.0;
int iCnt = 0;

for(iCnt = 0; iCnt < 1; iCnt++)
{
   dArea = fWidth * fHeight;
}


return dArea;

}

int main()
{
float fValue1 = 0.0f, fValue2 = 0.0f;
double dRet = 0.0;

printf("Enter width: ");
scanf("%f", &fValue1);

printf("Enter height: ");
scanf("%f", &fValue2);

dRet = RectArea(fValue1, fValue2);

printf("Area of rectangle is %lf\n", dRet);
return EXIT_SUCCESS;

}