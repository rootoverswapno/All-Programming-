#include<bits/stdc++.h>
using namespace std;
int main()
{
    //set ith bit


    int n=13;
    cout<<(n|(1<<1))<<endl;

   //clear bit 

   cout<<(n&(~(1<<2)))<<endl;

  ///toggle the ith bit 

  cout<<(n^(1<<1))<<endl;

  //clear the the last set bit 

  int N=16;
   cout<<(N&N-1)<<endl;

   //number 2 power or not 

   if((N&N-1)==0)
   {
    cout<<"YES"<<endl;
   }
   else
   cout<<"NO"<<endl;


return 0;
}