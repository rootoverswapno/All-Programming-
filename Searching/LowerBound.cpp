#include <bits/stdc++.h>
using namespace std;
int Lower_bound(vector<int> &v, int element)
{
    int lo = 0;
    int hi = v.size() - 1;
    int mid;
    while (hi - lo > 1)
    {
        mid = (hi + lo) >> 1;
        if (v[mid] < element)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] >= element)
    {
        return lo;
    }
    if (v[hi] >= element)
    {
        return hi;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    while (true)
    {
        int to_element;
        cin >> to_element;
        int lb = Lower_bound(v, to_element);
        cout << v[lb] << " " << (lb!=-1?v[lb]:-1)<<endl;;
    }

    return 0;
}