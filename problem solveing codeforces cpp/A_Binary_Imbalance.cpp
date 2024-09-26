#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> s;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                s.insert(i + 1, "1");
            }
            else
            {
                s.insert(i + 1, "0");
            }
        }
        int c = 0, c1 = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '0')
            {
                c++;
            }
            else
            {
                c1++;
            }
        }
        if (c > c1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}