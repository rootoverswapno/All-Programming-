#include <bits/stdc++.h>
using namespace std;
char upper(char c)
{
    
    return  c + ('a' - 'A');
    
}
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i)
    {
        
            s[i] = upper(s[i]);
        
    }
    cout << s << endl;

    return 0;
}