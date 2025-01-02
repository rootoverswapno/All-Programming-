#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve_by_Swapno(int i) {
    string n; 
    cin >> n;

    long long odd_sum = 0, even_sum = 0;
    for (int i = 0; i < n.size(); ++i) {
        int digit = n[i] - '0'; 
        if (i % 2 == 0) {
            odd_sum += digit; 
        } else {
            even_sum += digit; 
        }
    }

    if ((odd_sum - even_sum) % 11 == 0) {
        cout << "Case " << i<< ": Yes" << endl;
    } else {
        cout << "Case " << i << ": No" << endl;
    }
}
int main()
{
int t;
cin>>t;
for(int i=1;i<=t;++i)
{
solve_by_Swapno(i);
}
return 0;
}