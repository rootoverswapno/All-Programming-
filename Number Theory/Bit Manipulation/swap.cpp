#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a=5;
   int b=9;
   a=a^b;
   b=b^a;
   a=a^b;
   cout<<"a : "<<a<<"   b : "<<b<<endl;



return 0;
}