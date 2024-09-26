#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int min_index;
    for (int i = 0; i < n-1; ++i)
    {
        min_index = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (v[j] < v[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(v[min_index], v[i]);
        }
    }

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}