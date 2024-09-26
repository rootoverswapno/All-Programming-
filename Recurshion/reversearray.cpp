#include <bits/stdc++.h>
using namespace std;
void rev(vector<int> &v, int lo, int hi)
{

    if (lo >= hi)
    {
        return;
    }

    swap(v[lo], v[hi]);
    rev(v, lo + 1, hi - 1);
}
int main()
{
    int n;
    cout << "Enter size:";
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    int lo = 0;
    int hi = v.size() - 1;
    rev(v, lo, hi);
    for (const auto &i : v)
    {
        cout << i << " ";
    }

    return 0;
}