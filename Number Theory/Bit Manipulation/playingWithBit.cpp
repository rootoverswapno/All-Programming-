#include<bits/stdc++.h>
using namespace std;
void printBinary(int number)
{
    for(int i=10;i>=0;--i)
    {
        cout<<((number>>i)&1);
    }
    cout<<endl;
}
int main()
{
    int a=8;
    int i=1;
    printBinary(a);
    if((a&(1<<i))!=0)
    {
        cout<<"SET BIts";
    }
    else
    {
        cout<<"NOT set Bit ";
    }
    cout<<endl;
    // printBinary(9&(1<<3));
    //set bit
    printBinary(a|(1<<1));
    //unset bit
    printBinary(a&(~(1<<3)));
    //toggle of bit
      printBinary(a^(1<<0));
      printBinary(a^(1<<3));
      //count of set Bit
      int ct=0;
      for(int i=31;i>=0;--i)
      {
        if((a&(1<<i))!=0)
        {
            ct++;
        }
      }
      cout<<ct<<endl;
      int c=__builtin_popcount(a);
      cout<<c<<endl;
    return 0;
}