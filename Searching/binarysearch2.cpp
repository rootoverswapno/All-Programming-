#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    int to_find;
    cin >> to_find;

    int lo = 0;
    int hi = n - 1;
    int mid;
    while ((hi - lo) > 1)
    {
        mid = (hi + lo) >> 1;
        if (v[mid] < to_find)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] == to_find)
    {
        cout << "index is  :" << lo << v[lo] << endl;
    }
    else if (v[hi] == to_find)
    {
        cout << "index is  :" << hi << v[hi] << endl;
    }
    else
    {
        cout << "not find" << endl;
    }

    return 0;
}