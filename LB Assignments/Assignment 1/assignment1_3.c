#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
/*
    Function Name : Display
    Input         : None
    Output        : Prints numbers from 5 to 1
    Description   : Displays numbers in descending order.
    Date          : 22/10/2026
    Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////////
void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }

}
int main()
{
     Display();
     
    return EXIT_SUCCESS;
}
