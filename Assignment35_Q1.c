/*
  Write the Program which accept one number from user and count number of ON(1)
  bits on it without using % and / operator:

  Example:    Input: 11
              Output: 3
*/


#include<stdio.h>


int CountOne(unsigned int iNo)
{
    int Cnt=0, j=0;

    for(int i=0;j=j+(2^i)<=iNo;i++)
    {
        if(iNo & 1<<i)
        {
            Cnt++;
        }
    }

    return Cnt;
}

int main()
{
    unsigned int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

    printf("The count of ON bits is: %d \n",iRet);

    return 0;
}
