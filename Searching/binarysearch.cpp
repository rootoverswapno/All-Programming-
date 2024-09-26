#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int m;
    cout << "Enter searching Element : ";
    cin >> m;
    int midium;
    int low = 0;
    int high = n - 1;
    midium = (high + low) / 2;
    while (low <= high)
    {
        midium = (high + low) / 2;

        if (v[midium] == m)
        {
            cout << "number is  " << m << "  at position " << midium << endl;
            break;
        }
        
        if (v[midium] < m)
        {
            low = midium + 1;
        }
        else
        {
            high = midium - 1;
        }
    }
    if (low > high)
    {
        cout << "number is not found ";
    }
    return 0;
}