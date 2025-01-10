#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s="hello world";
   string st="miao";
    if(s.find(st))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
   if(s.find(st) != string::npos)
   {
         cout<<"String Find at index "<<s.find(st)<<endl;
   }
   else
   {
         cout<<"string find  ";
   }
   
   return 0;
}