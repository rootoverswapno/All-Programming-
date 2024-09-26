#include <bits/stdc++.h>
#define int long long
long long mod = 1e9 + 7;
#define pb push_back
#define swapno king of the world
#define va vector<int> v(n);
#define vb vector<int> v1(n);
#define f(i, n)       \
    for (auto &i : v) \
    {                 \
        cin >> i;     \
    }
using namespace std;

// Aliases
using ll = long long;
using lld = long double;
using ull = unsigned long long;
// Mathematical functions
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}                                                     //__gcd
int lcm(int a, int b) { return (a / gcd(a, b) * b); } //__lcm
int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return (x * factorial(x - 1));
    }
} //__facttorial
// Code by Swapnomoy Biswas
void solve_de()
{
    //...Solve Here...
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    for (int i = 0; i < s.size(); ++i)
    {
        st.insert(s[i]);
    }
    for (auto &i : st)
    {
        cout << i << " ";
    }
    vector<int> v;
    for (auto &i : st)
    {
        v.push_back(i);
    }
    cout << endl;
    for (auto &i : v)
    {
        cout << i << " ";
    }
    map<char, char> mp;
    for (int i = 0; i < v.size(); ++i)
    {
        mp[v[i]] = v[v.size() - i - 1];
    }
    cout << endl;
    for (auto &i : mp)
    {
        cout << i.first << " " << i.second << " " << endl;
    }
    cout << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << mp[s[i]];
    }
    cout << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        solve_de();
        // ROOTOVER SWAPNO.......
    }
}
//@SWAPNO_MOY