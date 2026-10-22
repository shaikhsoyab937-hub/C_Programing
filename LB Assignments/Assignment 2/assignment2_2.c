#include<stdio.h>
#include<stdlib.h>

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