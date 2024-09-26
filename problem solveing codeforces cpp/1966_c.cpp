#include <bits/stdc++.h>
using namespace std;
void solve_de()
{
    // rootover swapno.......
    int n,i,j;
    cin >> n;
    vector<int> v;
    for (i = 0 ; i < n ; i++ )
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i)
    {
        for (j = i; j < v.size(); j++)
        {
            v[j] -= v[i];
        }
    }
    for (auto &i : v)
    {
        cout << i;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve_de();
    }
    return 0;
}