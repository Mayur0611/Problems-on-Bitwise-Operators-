
// write program which checks whether 7th,& 15th &21st,28th bit is ON or OFF:

#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0x8104040;
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
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number: \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet  == true)
    {
        cout<<"Bit is ON \n";
    }
    else
    {
        cout<<"Bit is OFF \n";
    }
    
    return 0;
}