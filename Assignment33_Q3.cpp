/*
  write a below program which accept one number from user and toggle 7th bit
  of that number. Return modified number

     Example:   Input: 137
                Output: 201
*/

#include<iostream>
using namespace std;

int ToggleBit(int iNo)
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

    iRet = ToggleBit(iValue);

    cout<<"Modified number is: "<<iRet;

    return 0;
}