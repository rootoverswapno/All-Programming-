#include <bits/stdc++.h>
long long mod = 1e9 + 7;
#define pb push_back
#define swapno king of the world
#define vv vector<int> v(n);
#define int long long
using namespace std;
int getCharacterValue(char ch)
{

    ch = tolower(ch);
    return ch - 'a' + 1;
}

int calculateStringSum(string &str)
{
    int sum = 0;
    for (char ch : str)
    {
        sum += getCharacterValue(ch);
    }
    return sum;
}
void solve_de()
{
    // rootover swapno.......
    string s;
    cin >> s;
    int sum = calculateStringSum(s);
    cout<<sum<<endl;
    int n = s.size();
    string s1 = "eid";
    bool found = s.find(s1);
    // cout<<found<<endl;
    if (found == true)
    {
        if ((sum < (n * (n - 1))))
        {
            cout << "Eid Mubarak" << endl;
            return;
        }
    }

    else
    {
        cout << "Dear husband" << endl;
        return;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve_de();
        // SWAPNO KING OF THE WORLD..
        // NAM TO SUNA HI HOGA......
    }
}
//@SWAPNO_MOY