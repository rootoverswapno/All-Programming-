#include <bits/stdc++.h>
using namespace std;
char uppers(char c)
{
    return 'A' + (c - 'a');
}
int main()
{

    while (true)
    {
        string s;
        cin >> s;
        if (s.size() == 0)
        {
            break;
        }
        for (int i = 0; i < s.size(); ++i)
        {
            s[i] = uppers(s[i]);
        }
        cout << s << endl;
    }
    return 0;
}