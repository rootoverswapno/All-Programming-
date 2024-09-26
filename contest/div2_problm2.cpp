#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 void solve()
 {

        int n,k;
        cin>>n>>k;
        vector<int>v(n),x(n);
        vector<int>m(n+1,0);
        for(int i=0;i<n;++i)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;++i)
        {
            cin>>x[i];
            m[abs(x[i]=x[i]+v[i])];
        }
        int m_p=k;
        for(int i=1;i<=n;++i)
        {
            if(m_p<m[i])
            {
                cout<<"NO"<<endl;
                return;
            }
            m_p=m_p-m[i];
            m_p=m_p+k;
        }
        cout<<"YES"<<endl;
        return;
        
 }
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
       solve(); 
    }
    return 0;
}