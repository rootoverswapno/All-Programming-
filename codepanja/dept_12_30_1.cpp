#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve_by_Swapno(){

ll n,k;
cin>>n>>k;
 string result = "";
    string digits = "0123456789"; 
    if (n == 0) {
        cout<<0<<endl;
        return;
    }
    while (n > 0) {
        ll remainder = n % k;
        result = digits[remainder] + result;
        n /= k;
    } 

    cout<<result<<endl;

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