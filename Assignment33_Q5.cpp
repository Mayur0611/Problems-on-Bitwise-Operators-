
/*
  write a below program which accept one number from user and on its first 4 bits
  of that number. Return modified number

     Example:   Input: 73
                Output: 79
*/

#include<iostream>
using namespace std;

int ToggleBit(int iNo)
{
    int iMask = 0xf;
    int iResult = 0;
    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number: \n";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Modified number is: "<<iRet;

    return 0;
}