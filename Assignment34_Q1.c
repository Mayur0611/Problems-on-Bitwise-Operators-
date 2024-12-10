/*
      write a program which accept one number and position from user
      and check whether bit at that position is on or off. If bit is 
      on return true otherwise return false:
      

      Example:   Input: No = 10  position of bit = 2

                 Output : true

*/


#include<stdio.h>
#include<stdbool.h>

bool ChkBit(unsigned int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;

    iMask = iMask << (iPos -1);

    iResult = iNo & iMask;
    if(iResult == iMask)
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
    int iLocation = 0;
    bool bRet = false;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    printf("Enter the Position: \n");
    scanf("%d",&iLocation);

    bRet = ChkBit(iValue,iLocation);

    if(bRet == true)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is OFF");
    }

    return 0;
}