#include<bits/stdc++.h>
using namespace std;
vector<int> selection(vector<int>&v)

{
    // vector<int>v=v1;
    for(int i=0;i<v.size();++i)
    {
        for(int j=i+1;j<v.size();++j)
        {
            if(v[j]<v[i])
            {
                int temp =v[j];
                v[j]=v[i];
                v[i]=temp;
            }
        }
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    /*
    
      for(int i=0;i<=n-1;++i)
    {
        for(int j=i+1;j<=n-1;++j)
        {
            if(v[j]<v[i])
            {
                int temp=v[j];
                v[j]=v[i];
                v[i]=temp;
            }
        }
    }
    
    */
  
    selection(v);
    for(auto &i:v)
    {
        cout<<i<<" ";
    }
    


    return 0;
}