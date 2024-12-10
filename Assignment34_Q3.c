/*
      write a program which accept one number and position from user
      and on that bit .Return Modified number:
      

      Example:   Input: No = 10  position of bit = 3

                 Output : 14

*/


#include<stdio.h>
#include<stdbool.h>

unsigned int ONBit(unsigned int iNo, int iPos)
{
    int iMask = 0X1;
    int iResult = 0;

    iMask = iMask << (iPos -1);

    iResult = iNo ^ iMask;

    return iResult;
    
}


int main()
{
    int iValue = 0;
    int iLocation = 0;
    int iRet = 0;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    printf("Enter the Position: \n");
    scanf("%d",&iLocation);

    iRet = ONBit(iValue,iLocation);

    printf("Modified number is: %d",iRet);

    return 0;
}