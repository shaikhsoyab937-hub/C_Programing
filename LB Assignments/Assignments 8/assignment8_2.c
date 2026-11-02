#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
/*
    Function Name : Display
    Input         : Single digit number
    Output        : Number in words
    Description   : Accepts a single digit number and
                    displays it in words.
    Date          : 01/11/2026
    Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////

void Display(int iNo)
{  
 
  char *Arr[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
  if(iNo < 0)
  {
    iNo = -iNo;
  }

  if(iNo >= 0 && iNo <= 9)
  {
    printf("%s", Arr[iNo]);
  }
 else 
 {
    printf("Invalid Number");
 }
}
int main()
{
  int iValue = 0;
  printf("Enter Number : \n");
  scanf("%d",&iValue);

  Display(iValue);
 
  return EXIT_SUCCESS;
}