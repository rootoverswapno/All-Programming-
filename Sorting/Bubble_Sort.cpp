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
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n-i; ++j)
        {
            if (v[j] > v[j+1])
            {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}