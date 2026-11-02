#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
/*
Function Name : SquareMeter
Input         : Area in square feet
Output        : Area in square meters
Description   : Converts square feet into square meters.
1 square foot = 0.0929 square meter.
Date          : 01/11/2026
Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
double dArea = 0.0;
int iCnt = 0;

for(iCnt = 0; iCnt < 1; iCnt++)
{ 
   dArea = iValue * 0.0929;
}

return dArea;

}

int main()
{
int iValue = 0;
double dRet = 0.0;

printf("Enter area in square feet: ");
scanf("%d", &iValue);

dRet = SquareMeter(iValue);

printf("Area in square meters is %lf\n", dRet);

return EXIT_SUCCESS;

}