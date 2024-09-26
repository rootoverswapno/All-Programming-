#include <iostream>
using namespace std;

int main()
{
    int n, a=0, b=0;
    string s;
    cin >> n;
    cin>>s;

    for (int j=1;j<=n;j++)
    {
        if (s[j] == 'A')
    
            a++;

        else if (s[j] == 'D')
        
            b++;
        
    }

    if (a == b)
    {
        cout << "Friendship" << endl;
    }
    else if (a > b)
    {
        cout << "Anton" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }

    return 0;
}