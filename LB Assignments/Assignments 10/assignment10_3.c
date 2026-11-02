#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
/*
Function Name : KMToMeter
Input         : Distance in kilometers
Output        : Distance in meters
Description   : Converts kilometers into meters.
1 kilometer = 1000 meters.
Date          : 01/11/2026
Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

int KMToMeter(int No)
{
int iMeter = 0;
int iCnt = 0;

for(iCnt = 1; iCnt<= 1000; iCnt++)
{
    iMeter = iMeter + No;
}

return iMeter;

}

int main()
{
int iValue = 0, iRet = 0;

printf("Enter distance: ");
scanf("%d", &iValue);

iRet = KMToMeter(iValue);

printf("Distance in meters is %d\n", iRet);

return EXIT_SUCCESS;

}