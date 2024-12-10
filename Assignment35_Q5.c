/*
  Write the Program which accept one number from user and range of position
  from user.Toggle all bits from that range:

 
*/


#include<stdio.h>


unsigned int CountOne(unsigned int iNo, int iStart, int iEnd)
{
    for(;iStart <= iEnd; iStart++)
    {
        iNo=iNo ^ 1<<iStart-1;
    }
    return iNo;
}
int main()
{
    unsigned int iValue = 0, iStart =0, iEnd = 0;
   

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    printf("Enter the starting position: \n");
    scanf("%d",&iStart);

     printf("Enter the End position: \n");
    scanf("%d",&iEnd);

    iRet = CountOne(iValue,iStart,iEnd);

    printf("The count of ON bits is: %d \n",iRet);

    return 0;
}
