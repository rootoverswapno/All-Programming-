#include <bits/stdc++.h>
using namespace std;
void solve(int n, long long P)
{
    int der = d % 4;

    
        if (d >= 3)
        {
            cout << "Case " << n << ": Madhurima will be very very happy" << endl;
        }
        else if (d == 2)
        {
            cout << "Case " << n << ": Madhurima will be very happy" << endl;
        }
        else if (d == 1)
        {
            cout << "Case " << n << ": Madhurima will be happy" << endl;
        }
        else
        {
            cout << "Case " << n << ": They will forever be single" << endl;
        }
    
}
int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        long long x;
        cin >> x;
        solve(i, x);
    }
    return 0;
}
