#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto &i:v)
  {
    cin>>i;
  }
  vector<int>vv;
   vv.push_back(v[n-1]);
  for(int i=n-2;i>=0;--i)
  {

    if(find(vv.begin(),vv.end(),v[i])==vv.end())
    {
        vv.push_back(v[i]);
    }
    

  }

  reverse(vv.begin(),vv.end());
  cout<<vv.size()<<endl;
  for(int num:vv)
  {
    cout<<num<<" ";
  }
  cout<<endl;



return 0;
}