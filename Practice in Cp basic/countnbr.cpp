#include<bits/stdc++.h>
using namespace std;
const int N=1e7+9;
vector<int>v(N);
int main()
{
    int n;
    cin>>n;
    vector<int>vv(n);
    for(int i=0;i<n;++i)
    {
        cin>>vv[i];
        v[vv[i]]++;
        
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
       
       cout<<v[x]<<endl;
    }



    return 0;
}