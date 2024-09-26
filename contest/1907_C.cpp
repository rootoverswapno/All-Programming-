#include <bits/stdc++.h>
#define swapno king of the world
#define int long long
using namespace std;

void solve_de()
{
    // rootover swapno.......
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> freq;
    for (auto &i : s)
    {
        freq[i]++;
    }
    int u = 0, u1 = 0;
    for (auto &i : freq)
    {
        u = i.second;
        u1 = max(u1, u);
    }
    if (n % 2 == 0)
    {
        if (u1 > n / 2)
        {
            cout << u1 - (n - u1) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        if(u1 > (n / 2))
        {
           cout << u1 - (n - u1) << endl;  
        }
        else
        {
            cout << 1 << endl; 
        }
    }
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