#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x=1;
    while (t--)
    {
        
        double pi = 2 * acos(0.0);
        double r;
        cin >> r;
        double low = 1e-9;
        double ca = pi * r * r;
        double R=2*r;
        double sa = R * R;
        double diff =(sa - ca);
        double diff2 = (diff + low);
        int i=x;
        cout<<fixed<< setprecision(2);
           cout << "Case "<< i << ": " << diff2 << endl;
           x++;
    }

    
    
        

    return 0;
}