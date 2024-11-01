#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
  vector<string>v(n);
  for(auto &i:v)
  {
    cin>>i;
  }
  map<string,vector<string>>mp;
  for(auto &x:v)
  {
    string word=x;
    sort(word.begin(),word.end());
    mp[word].push_back(x);
  }
  vector<vector<string>>res;
  for(auto &i:mp)
  {
      res.push_back(i.second);
  }
  for(auto &i:res)
  {
    for(auto &j:i)
    {
        cout<<j<<" ";
    }
    cout<<"     ";
  }
  cout<<endl;
   

     


return 0;
}