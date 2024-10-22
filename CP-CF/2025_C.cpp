#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int num:v)
        {
            cin>>num;
        }
        sort(v.begin(),v.end());
        int ans=0,j=0;
        for(int i=0;i<n;++i)
        {
           j=max(i,j);
           
        }
         
        /* code */
    }
    




return 0;
}