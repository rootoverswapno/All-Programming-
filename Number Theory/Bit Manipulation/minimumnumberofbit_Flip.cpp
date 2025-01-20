#include<bits/stdc++.h>
using namespace std;
int main()
{

 int n;
 cin>>n;
 int flip;
 cin>>flip;
 
 int x=(n^flip);
 int ct=0;
 while(x!=0)
 {
    // x=x&(x-1);
    // ct++;


    //way two 
    
    ct+=x&1;
    x=x>>1;

    
 }
 cout<<ct<<endl;


return 0;
}