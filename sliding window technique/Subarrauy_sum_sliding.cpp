#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int max_sum=0;
    for (auto &i : v)
    {
        cin >> i;
    }
    int k;
    cin >> k;
    if (n <= k)
    {
        cout << "Invalid";
    }
    for (int i = 0; i < k; ++i)
    {
        max_sum += v[i];
    }
    int window = max_sum;
    for (int i = k; i < n; ++i)
    {
        window += v[i] - v[i - k];
        max_sum = max(max_sum, window);
    }
    cout << max_sum << endl;

    return 0;
}