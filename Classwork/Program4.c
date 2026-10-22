/*

     Step 1 :   Understand the problem statement
     Step 2 :   Write the algoithm
     Step 3 :   Decide the programming langauge
     Step 4 :    Write the program
     Step 5 :    Test the Program

*/

///////////////////////////////////////////////////////
//
//  Step 1 :   Understand the problem statement
//             User is going to enter any 2 integers 
//             and we have to perfom addtion 
//
////////////////////////////////////////////////////////

////////////////////////////////////////////////////////
//    Step 2 :   Write the algoithm
/*
       START :
             Accept first number as No1
             Accept second number as No2
             Create the variable as Ans store the result
             Perform the addition and store into Ans 
             Display  the Ans
       END     

*/   
//////////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//    Step 3 :   Decide the programming langauge
//               We select C programming
//
///////////////////////////////////////////////////////


///////////////////////////////////////////////////////
//
//    Step 4 :    Write the program
//
///////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
      int iValue1, iValue2, iResult;
       
      printf("Enter First Number : \n");
      scanf("%d",&iValue1);

      printf("Enter Second Number : \n");
      scanf("%d",&iValue2);
      

      iResult = iValue1 + iValue2;                   //Business Logic
      
      printf("%d\n",iResult);



    return 0;
}