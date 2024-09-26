#include <bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n)
{
    vector<bool> prime(n, true);
    for (int i = 2; i * i <= n; ++i)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i < n; ++i)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    SieveOfEratosthenes(n);

    return 0;
}