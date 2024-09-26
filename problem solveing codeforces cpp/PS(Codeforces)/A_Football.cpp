#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{

    int n;
    cin >> n;
    map<string, int> m;
    string s, a, b;
    while (n--)
    {
        cin >> s;
        m[s]++;
        if (a.empty())
        {
            a = s;
        }
        else if (b.empty() and s != a)
        {
            b = s;
        }
    }
    if (m[a] > m[b])
    {
        cout << a << endl;
    }
    else
    {
        cout << b<<endl;
    }

    return 0;
}