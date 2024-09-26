#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        long long minCost = INT64_MAX;

        for (int i = 0; i < n; ++i)
        {
            long long gcdValue = gcd(arr[i], i + 1);
            long long cost = n - i + gcdValue - 1;
            minCost = min(minCost, cost);
        }

        cout << minCost << endl;
    }

    return 0;
}