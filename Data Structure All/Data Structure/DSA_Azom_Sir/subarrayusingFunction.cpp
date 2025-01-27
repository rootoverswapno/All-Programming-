#include<iostream>
#include<vector>
using namespace std;
void subarray(vector<int> &m)
{
    for(int i=0;i<m.size();++i)
    {
        for(int j=i;j<m.size();++j)
        {
            for(int k=i;k<=j;++k)
            {
                cout<<m[k]<<" ";
            }
            cout<<endl;
        }
    }

}

int main()
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;++i)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }
  subarray(v);
    return 0;
}