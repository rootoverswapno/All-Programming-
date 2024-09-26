#include <bits/stdc++.h>
#define ll long long int
#define lld long long double
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a <= 2)
        {
            cout << "1" << endl;
        }
        else
        {
           int m = (ceil((double)(a - 2) / b)) + 1;
            cout << m << endl;
        }
    }
    return 0;
}