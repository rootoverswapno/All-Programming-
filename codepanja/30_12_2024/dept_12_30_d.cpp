#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve_by_Swapno(){
ll w1, w2;
        ll k;
        cin >> w1 >> w2 >> k;  
       ll product = (w1 * w2) % static_cast<long long>(pow(10, k));
        cout << setw(k) << setfill('0') << product << endl;

}
int main()
{
int t;
cin>>t;
while(t--)
{
solve_by_Swapno();
}
return 0;
}