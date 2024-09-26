#include <bits/stdc++.h>
using namespace std;
void printBinary(int num)
{
    for (int i = 10; i >= 0; --i)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
int main()
{

    printBinary(9);
    int a = 9;
    int i = 3;
    if( (a & (1 << i) )!= 0)
    {
        cout << "SET BIT";
    }
    else
    {
        cout << "NOT SET BIT";
    }
    cout<<endl;
    //bit set
    printBinary(a|(1<<1));
    cout<<endl;
    //bit unset
    printBinary(a&(~(1<<3)));
    //bit toggle
    cout<<endl;
    printBinary(a^(1<<2));
     printBinary(a^(1<<3));
     //number of set bit
     int ct=0;
     for(int i=31;i>=0;--i)
     {
        if((a&(1<<i))!=0)
        {
            ct++;
        }
     }
     cout<<ct<<endl;
     int mm=__builtin_popcount(a);
     cout<<mm<<endl;
    return 0;
}
