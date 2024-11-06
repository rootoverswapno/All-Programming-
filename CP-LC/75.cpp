#include<bits/stdc++.h>
using namespace std;
void sorted(vector<int>&v)
{
    int n=v.size();
    int min_index=0;
    for(int i=0;i<n-1;++i)
    {
        min_index=i;
        for(int j=i+1;j<n;++j)
        {
            if(v[j]<v[min_index])
            {
                min_index=j;
            }

        }
        if(min_index!=i)
        {
           swap(v[i],v[min_index]);
        }


    }
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
    sorted(v);
    for(auto &i:v)
    {
        cout<<i<<" ";
    }
return 0;
}