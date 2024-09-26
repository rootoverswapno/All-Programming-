#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n;
    cin >> n;
    int sum = 0;
    string s;
    while (n--)
    {

        cin >> s;
        if (s == "Tetrahedron")
        {
            sum += 4;
        }
        if (s == "Cube")
        {
            sum += 6;
        }
        if (s == "Octahedron")
        {
            sum += 8;
        }
        if (s == "Dodecahedron")
        {
            sum += 12;
        }
        if (s == "Icosahedron")
        {
            sum += 20;
        }
    }
    cout << sum << endl;
}
int main()
{

    solve();
    return 0;
}