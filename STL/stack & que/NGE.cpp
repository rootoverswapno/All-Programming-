#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>arr;
    for(auto &i:v)
    {
        cin>>i;
    }
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
             if(v[i]<v[j])
             {
                arr.push_back(v[j]);
                break;
             }
             else
             {
                if(j==n-1)
                {
                      arr.push_back(-1);
                      break;
                }
                
             }
        }
    }
    arr.push_back(-1);
    for(auto &i:arr)
    {
        cout<<i<<"  ";
    }



    return 0;
}