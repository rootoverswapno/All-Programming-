#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int p=0,q=1;
    while(q<n)
    {
        if(s[q]-s[p]>1)
        {
            s[q]--;
            swap(s[q],s[p]);
            if(p>0)
            {
                p--;
                q--;
            }
        }
        else
        {
            p++;
            q++;
        }
    }

    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
