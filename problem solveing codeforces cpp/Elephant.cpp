#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    count = n / 5;
    if (n % 5 != 0)
    {
        count = count + 1;
    }
    cout << count << endl;
}