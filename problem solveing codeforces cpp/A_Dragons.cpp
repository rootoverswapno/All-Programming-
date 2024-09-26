#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    pair<int, int> p[n+1];

    for (int i = 0; i < n; ++i)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p, p + n);
    int c=0;
    for(int i=0;i<n;++i)
    {
        if(s<=p[i].first)
        {
            c=1;
        }
        else
        {
            s+=p[i].second;
        }
    }
    if(c==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
       cout<<"YES"<<endl;
    }

    return 0;
}