#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int m = 0;
        int last_index = 0;
        int first_index = 0;
        for (int i = 0; i < n; ++i)

        {
            cin >> v[i];
            if (v[i] == 1 && first_index == 0)
            {
                last_index = i;
            }
            if (v[i] == 1)
            {
                last_index = i;
            }
        }
        for (int i = first_index; i < last_index; ++i)
        {
            if (v[i] == 0)
            {
                m++;
            }
        }
        cout << m << endl;
    }
    return 0;
}