#include <bits/stdc++.h>
#define swapno king of the world
#define int long long
using namespace std;

void solve_de()
{
    // rootover swapno.......
    int arr[] = {100000, 11111, 11110, 11101, 11100, 11011, 11010, 11001, 11000,
                 10111, 10110, 10101, 10100, 10011, 10010, 10001, 10000, 1111, 1110,
                 1101, 1100, 1011, 1010, 1001, 1000, 111, 110, 101, 100, 11, 10};

    int val;
    cin >> val;

    string ans = "YES";
    int past = val;

    while (true)
    {
        int got = 0;
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
        {
            int num = arr[i];
            if (val >= num)
            {
                if (val % num == 0)
                {
                    past = val;
                    val = val / num;
                    got = 1;
                    break;
                }
            }
        }

        if (got == 0)
        {
            if (val == 1)
            {
                ans = "YES";
            }
            else
            {
                ans = "NO";
            }
            break;
        }
        else
        {
            if (val <= 0)
            {
                break;
            }
            else
            {
                if (past == val)
                {
                    ans = "NO";
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}
int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve_de();
        // SWAPNO KING OF THE WORLD..
        // NAM TO SUNA HI HOGA......
    }
}