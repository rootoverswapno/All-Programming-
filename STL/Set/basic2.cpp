#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void print(set<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
}

int main()
{

    set<string> s;
    s.insert("abc"); // log(n)
    s.insert("zsdf");
    s.insert("bcd");
    auto it = s.find("abc");
    if (it != s.end())
    {
        s.erase(it);
    }
    print(s);
}