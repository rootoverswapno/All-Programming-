#include <bits/stdc++.h>
using namespace std;
int Pow(int x, int y)
{
    if (y == 0)
        return 1;
    int p = Pow(x, y - 1);
    return x * p;
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << Pow(x, y) << endl;

    return 0;
}