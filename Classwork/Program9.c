#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//      Function Name : Addition
//      Input         : Interger, Interger
//      Output        : Interter
//      Description   : Performs Addtion
//      Date          : 04/10/2026
//      Athor         : Soyab Nijam Shaikh
//
//////////////////////////////////////////////////////////

int Addition(
                 int iNo1,        // First input
                 int iNo2         // Second input
            ) 
{
      int iAns = 0;                                                              

      iAns = iNo1 + iNo2;          //Business Logic
      
      return iAns;
}


//////////////////////////////////////////////////////////
//
//     Enter point of the  application
//
//////////////////////////////////////////////////////////

int main()
{
      int iValue1 = 0, iValue2 = 0, iResult = 0;
       
      printf("Enter First Number : \n");
      scanf("%d",&iValue1);

      printf("Enter Second Number : \n");
      scanf("%d",&iValue2);
      
      iResult = Addition(iValue1, iValue2);

      printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////
//
//         Step 5 :    Test the Program
//
//         Tested        Inpute       Output
//         
//           10            21              31
//           11            0               11
//           0             11              11
//           20            -9              11
//          -9             20              11
//          -20           -11              31
//
/////////////////////////////////////////////////////////

