#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=1;i<=6;++i)
        {
            if(s1.find(s2))
            {
                c=1;
                cout<<i<<endl;
                break;
            }
            s1+=s1;
        }
        if(c==0)
        {
            cout<<"-1"<<endl;
        }

        
    }
    return 0;
}