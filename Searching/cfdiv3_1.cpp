#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[3];
        if (n <= 28)
        {
            arr[0] = 1;
            arr[1] = 1;
            arr[2] = n - 2;
        }
        else if (n > 52)
        {
            arr[0] = n - 52;
            arr[1] = 26;
            arr[2] = 26;
        }
        else
        {
            arr[0] = 1;
            arr[1] = n - 27;
            arr[2] = 26;
        }
        cout << char(arr[0] + 96) << char(arr[1] + 96) << char(arr[2] + 96) << endl;
    }
}
int main()
{

    solve();
    return 0;
}