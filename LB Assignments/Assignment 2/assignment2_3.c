#include<stdio.h>
#include<stdlib.h>


///////////////////////////////////////////////////////////
//
//      Function Name : Display
//      Input         : Interger 
//      Output        : Void
//      Description   : Prints "Hello" if number is less than 10,otherwise prints "Demo"
//      Date          : 22/10/2026
//      Athor         : Soyab Nijam Shaikh
//
//////////////////////////////////////////////////////////


void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");

    }
    else
    {
        printf("Demo");
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
