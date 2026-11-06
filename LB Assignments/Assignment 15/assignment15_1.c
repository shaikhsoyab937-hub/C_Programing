#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
/*
    Function Name : Display
    Input         : Character String
    Output        : Display Name
    Description   : Accepts name from user and displays it.
    Date          : 03/11/2026
    Author        : Soyab Nijam Shaikh
*/
///////////////////////////////////////////////////////////////

void Display()
{
    char Name[50];

    printf("Enter your name : ");
    fgets(Name, sizeof(Name), stdin);

    printf("Your name is : %s",Name);
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}