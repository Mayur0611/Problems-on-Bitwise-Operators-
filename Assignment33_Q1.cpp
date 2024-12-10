/*
  write a below program which accept one number from user and off 7th
  bit of that number if it is on. Return modified number

     Example:   Input: 79
                Output: 15
*/

#include<iostream>
using namespace std;

int OFFBit(int iNo)
{
    int iMask = 0x40;
    int iResult = 0;
    iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number: \n";
    cin>>iValue;

    iRet = OFFBit(iValue);

    cout<<"Modified number is:"<<iRet;

    return 0;
}