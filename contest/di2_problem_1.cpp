#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class solve
{
public:
    solve()
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int i = v[0], j = v[n - 2], k = v[1], l = v[n - 1];
        cout << (abs(i - j) + abs(j - k) + abs(k - l) + abs(l - i)) << endl;
    }
};
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        solve s;
    }
}