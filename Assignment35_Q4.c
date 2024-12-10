
/*write program which accept one number from user and checks whether 
   1st and 2nd bit is ON or OFF:
*/ 

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    int iMask = 0x3;
    int iResult = 0;
    
    iResult = iNo & iMask;

    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if(bRet  == true)
    {
        printf("Bit is ON \n");
    }
    else
    {
        printf("Bit is OFF \n");
    }
    
    return 0;
}