#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while (n--)
    {
        int a = 0;
        string s;
        cin >> s;
        if (s[0] == 'Y' || s[0] == 'y')
        {
            a++;
        }

        if (s[1] == 'E' || s[1] == 'e')
        {
            a++;
        }

        if (s[2] == 'S' || s[2] == 's')
        {
            a++;
        }

        if (a == 3)
        {
            cout <<"YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
    }
    return 0;
}