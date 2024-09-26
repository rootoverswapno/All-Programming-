#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<string>&v)
{
    cout<<"Size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<endl;
    }
}

int main()
{
  vector<string>v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
{
    string s;
    cin>>s;
    v.push_back(s);
}
printvec(v);

    return 0;
}