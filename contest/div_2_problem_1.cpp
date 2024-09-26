#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll ans=1;
        ll n;
        cin>>n;
        while(ans<n)
        {
            ans=ans*2;
             if(ans>n)
        {
            ans=ans/2;
            break;
        }
        }
       
        cout<<ans<<endl;
    }
    return 0;
}