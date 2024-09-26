#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    vector<int>v;
        for(int i=0;i<t;++i)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int sum=0;
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();++i)
        {
            sum=sum+(v[i]-v[i-1]);
        }
        cout<<sum<<endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }

    return 0;
}