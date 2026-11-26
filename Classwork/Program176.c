//8998
//14341
//7007

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev*10) + iDigit;
        iNo = iNo/10;

    }

    if(iRev == iNo)            //ISSUE
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Number is not Palindrome\n");
    }

    return EXIT_SUCCESS;
}