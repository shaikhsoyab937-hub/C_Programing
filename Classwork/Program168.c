#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;
   
    
     if(iNo < 0)
    {
        iNo = - iNo;
    }

    while(iNo != 0)
    {
       iDigit = iNo % 10;

       iSum = iSum + iDigit;
       iCount++;

       iNo = iNo / 10;

    } 
          
    return(iSum / iCount);            //Need of typecasting
}
    

int main()
{
    int iValue = 0;
    float fRet = 0.0f;
    

    printf("Enter number : \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Summation of Digits : %f\n",fRet);


    return EXIT_SUCCESS;
}