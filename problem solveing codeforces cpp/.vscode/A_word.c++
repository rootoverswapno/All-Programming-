#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int u = 0, l = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if (u > l)
    {
        string a;
        for (int i = 0; i < s.size(); i++)
        {
            a = toupper(s[i]);
                cout<<a;
        }
    }
    else
    { 
       string a;
        for (int i = 0; i < s.size(); i++)
        {
            a = tolower(s[i]);
                cout<<a;
        }
    }
    return 0;
}