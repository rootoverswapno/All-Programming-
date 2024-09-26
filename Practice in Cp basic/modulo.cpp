#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
  int M=7;
  long long fact=1;
  for(int i=1;i<=n;++i)
  {
    fact=(fact*i)%M;
  }
  cout<<fact<<endl;




    return 0;
}