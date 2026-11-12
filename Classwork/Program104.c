#include<stdio.h>
#include<stdlib.h>
 
void CheckPerfect(int iNo)        
{  
      int iCnt = 0, iSum = 0;
      
     for(iCnt = 1; iCnt <= iNo/2; iCnt ++)
      {
          if(iNo % iCnt == 0)
          {
              iSum = iSum + iCnt;                                              
          }
        }
      if(iSum == iNo)
      {
        printf("It is Perfect number\n");

      }
      else
      {
        printf("It is Not Perfect number\n");
      }
}   

int main()          
{
     int iValue = 0, iRet = 0;
    
      printf("Enter the Number : \n");
      scanf("%d",&iValue);
    
     CheckPerfect(iValue);

    
    return EXIT_SUCCESS;
}

// Time complexicty : O(N/2)