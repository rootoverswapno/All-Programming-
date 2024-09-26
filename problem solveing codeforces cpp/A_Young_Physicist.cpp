#include <iostream>
using namespace std;
int amin()
{

    int n, a, b, c;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        sum1 = sum1 + a;
        sum2 = sum2 + b;
        sum3 = sum3 + c;
    }
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}