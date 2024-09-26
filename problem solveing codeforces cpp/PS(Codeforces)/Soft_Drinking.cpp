#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int a = k * l;
    int b = a / nl;
    int x = c * d;
    int y = p / np;
    int z = min(b,min(x,y));
    cout << z / n << endl;
    return 0;
}