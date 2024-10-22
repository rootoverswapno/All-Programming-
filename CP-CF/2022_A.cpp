#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    int happy=0;
    int res=0;
    for(int i=0;i<n;++i)
    {
        cin>>v[i];
        happy+=(v[i]/2)*2;
        k-=(v[i]/2);
        res+=(v[i]%2);
    }
    if(res>k)
    {
        happy+=k*2-res;
    }
    else
    {
        happy+=res;
    }
    cout<<happy<<endl;
   }



return 0;
}