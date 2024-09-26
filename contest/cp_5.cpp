#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve_de_vai()
{
    int n;
    cin >> n;
    int mini;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    mini = *min_element(v.begin(), v.end());
    cout<<mini<<endl;
}
int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {

        solve_de_vai();
    }
}