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
long long N = 1e9 + 7;
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
const int NN = 1e9 + 7;
void solve_de()
{
    //...Solve Here...
    int n;
    cin >> n;
    va
        f(i, n) int sum = 0;
    int prod = 1;
    for (int i = 0; i < n; ++i)
    {

        sum += v[i] % NN;

        prod = (prod * v[i]) % NN;
    }
    sum = sum % NN;
    prod = prod % NN;
    if (prod > sum)
        cout << (prod) << endl;
    else
        cout << (sum) << endl;
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