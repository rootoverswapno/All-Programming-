#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex){visited[vertex]=true;for(auto cheld:graph[vertex]){if(visited[cheld]){ continue;}dfs(cheld);}}
void solve(){

        int n;
        cin >> n;

        vector<ll>v(n);
        ll total_sum = 0;
        for(auto &i:v)
        {
            cin>>i;
            total_sum+=i;
        }
        sort(v.begin(),v.end());
        if (total_sum % n != 0) {
            cout << "NO" << endl;
            return;
        }

        ll tar = total_sum / n;
        ll sum = 0;
        bool ok = true;

        for (int i = 0; i < n; ++i) {
           sum += v[i];
            if (sum < (i + 1) * tar) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


}
int main()
{
int t;
cin>>t;
while(t--)
{
solve();
}
return 0;
}