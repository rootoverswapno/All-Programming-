#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={1,2,3,4,5};
  bool ok=all_of(v.begin(),v.end(),[](int x){return x>0;});
  if(ok)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
  


return 0;
}