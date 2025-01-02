#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve_by_Swapno(){
 int n;
    cin >> n;
    vector<int> v(n), vv;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 2) vv.push_back(i);
    }

    if (vv.empty()) {
        cout << 1 << endl;
        return;
    }

    int w = 1;
    for (int i = 1; i < vv.size(); i++) {
        w = (w * (vv[i] - vv[i - 1])) % 998244353;
    }

    cout << w << endl;

}
int main()
{
int t;
cin>>t;
while(t--)
{
solve_by_Swapno();
}
return 0;
}