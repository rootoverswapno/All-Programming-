#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    int p1 = fibo(n - 1);
    int p2 = fibo(n - 2);
    return p1 + p2;
}
int main()
{
    int n;
    cin >> n;
    cout << endl
         << fibo(n);

    return 0;
}