#include <iostream>
using namespace std;
void printbinary(int n)
{
    for (int i = 9; i >= 0; --i)
    {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

int main()
{

    int a = 13;
    printbinary(a);
    int i = 3;
    if (a & (1 << i) != 0)
    {
        cout << "set bit" << endl;
    }
    else
    {
        cout << "not set" << endl;
    }
    // bit set
    printbinary(1 << 1);
    printbinary(a | (1 << 1));
    // unset bit
    printbinary(~a);
    printbinary(1 << 3);
    printbinary(~(1 << 3));
    printbinary(a & (~(1 << 3)));
    cout << endl
         << endl;
    // toggle bit
    printbinary(a ^ (1 << 2));
    printbinary(a ^ (1 << 3));
    // count bit
    int c = 0;
    for (int i = 31; i >= 0; --i)
    {
        if ((a & (1 << i)) != 0)
        {
            c++;
        }
    }
    cout << c << endl;
    cout << __builtin_popcount(a) << endl;
    cout << __builtin_popcountll((1LL << 35)) << endl;

    return 0;
}