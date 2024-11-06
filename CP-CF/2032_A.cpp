#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s = 2 * n;
        vector<int> v(s);
        int on_switch = 0;
        int of_switch = 0;
        for (auto &i : v)
        {
            cin >> i;
            if (i == 1)
            {
                on_switch++;
            }
            else
            {
                of_switch++;
            }
        }
        int minimum_switch = 0;
        int maximum_switch = 0;

        int mode_on = on_switch % 2;
        int mode_of = of_switch % 2;
        int sum = mode_of + mode_on;
        minimum_switch = sum / 2;
        if (n == 1 && on_switch == 2)
        {
            minimum_switch = 0;
        }

        if (on_switch >= of_switch)
        {
            maximum_switch = of_switch;
        }
        else
        {
            maximum_switch = on_switch;
        }
        cout << minimum_switch << " " << maximum_switch << endl;
       
    }
    return 0;
}