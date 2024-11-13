#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_set<char> st;
        int ans=0;
       for(auto &i:s)
       {
             st.insert(i); 
             ans+=st.size();
       }
       cout<<ans<<endl;
    }
    return 0;
}