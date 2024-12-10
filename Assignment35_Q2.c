/*
  Write the Program which accept two numbers from user and display position of 
  comman ON bits from that two numbers:

  Example:    Input: 11
              Output: 3
*/


#include<stdio.h>


void CommanBits(unsigned int iNo1,unsigned int iNo2)
{
    int Cnt=0,j=0;

    for(int i=0;j=j+(2^i)<=iNo1;i++)
    {
        if(iNo1 & 1<<i && iNo1 & 1<<i)
        {
            printf("Comman bits at position %d \n",i+1);
        }
    }
    
}

int main()
{
    unsigned int iValue1 = 0;
    unsigned int iValue2 = 0;

 
    printf("Enter the First  Number: \n");
    scanf("%d",&iValue1);

    printf("Enter the Second Number: \n");
    scanf("%d",&iValue2);

    CommanBits(iValue1,iValue2);
    
    return 0;
}
