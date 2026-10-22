#include<stdio.h>
#include<stdlib.h>


///////////////////////////////////////////////////////////
//
//      Function Name : Display
//      Input         : Interger 
//      Output        : Void
//      Description   : Display * given number of times by dicrementing
//      Date          : 22/10/2026
//      Athor         : Soyab Nijam Shaikh
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while(iNo >= iCnt)
    { 
        printf(" * ");
        iNo --;
    }

}
int main()
{
     int iValue = 0;

     printf("Enter number : \n");
     scanf("%d",&iValue);

     Display(iValue);

    return EXIT_SUCCESS;
}
