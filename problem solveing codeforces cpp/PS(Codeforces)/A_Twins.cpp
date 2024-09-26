#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ll n, sum1 = 0;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        sum1+= v[i];
    }
    sum1 /= 2;
    sort(v.begin(), v.end());
    ll sum2 = 0, c = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        sum2 += v[i];
        c++;
        if (sum2 > sum1)
        {
            break;
        }
    }
    cout << c << endl;

    return 0;
}