#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(vector<vector<ll>> &backtracking,vector<ll>& pre,int n,int k)
{
   
 backtracking[0][0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            for (int p = 0; p < i; p++) {
                long long a = pre[i] - pre[p];
                long long b = i - p;
                backtracking[i][j] = max(backtracking[i][j], backtracking[p][j - 1] + a * b);
            }
        }
    }

    cout << backtracking[n][k] << endl;

}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
    {
            cin >> i;
    }
    vector<ll> pre(n + 1, 0);
    vector<vector<ll>> backtracking(n + 1, vector<ll>(k + 1, LLONG_MIN));
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + v[i - 1];
    }
    solve(backtracking,pre,n,k);
   

    
    return 0;
}