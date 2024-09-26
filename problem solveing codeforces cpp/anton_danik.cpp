#include <iostream>
using namespace std;

int main ()
{
    int n,i,p,s;
    char ch;

    while (cin >> n)
    {
        p = 0;
        s = 0;

        for (i=1; i<=n; i++)
        {
            cin >> ch;

            if (ch == 'A')
                p = p + 1;
            else
                s = s + 1;
        }

        if (p > s)
            cout << "Anton" << endl;
        else if (s > p)
            cout << "Danik" << endl;
        else
            cout << "Friendship" << endl;
    }

    return 0;
}