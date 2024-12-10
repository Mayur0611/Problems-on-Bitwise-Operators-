/*
      write a program which accept one number and position from user
      and Toggle contents of first and last nibble of  that number
       .Return Modified number(Nibble is a group of four bits):
      
*/


#include<stdio.h>
#include<stdbool.h>

unsigned int ToggleBit(unsigned int iNo)
{
    int iMask = 0X9;
    int iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified Number is: %d",iRet);
    
    return 0;
}