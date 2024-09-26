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
  int k;
  cin>>k;
  int max_sum=INT_MIN;

  for(int i=0;i<n-k+1;++i)
  {
    int current_sum=0;
    for(int j=0;j<k;++j)
    {
       current_sum=current_sum+v[i+j];
    }
    max_sum=max(current_sum,max_sum);

  }
  cout<<max_sum<<endl;

    return 0;
}