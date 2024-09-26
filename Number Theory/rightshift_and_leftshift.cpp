#include<bits/stdc++.h>
using namespace std;
void printbinary(int n)
{
    for(int i=10;i>=0;--i)
    {
        cout<<((n>>i)&1);
    }
    cout<<endl;
}
int main()
{
  int n=5;
  cout<<(n>>1)<<endl;
  cout<<(n<<1)<<endl;  
    return 0;
}