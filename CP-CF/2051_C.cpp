#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void  dfs(int vertex){visited[vertex]=true;for(auto cheld:graph[vertex]){if(visited[cheld]){ continue;}dfs(cheld);}}
void solve_by_Swapno(){
int n, m, k;
    cin >> n >> m >> k;

    vector<int> v1(m), v2(k);
    for (auto &i : v1) {
        cin >> i;
    }
    for (auto &i : v2) {
        cin >> i;
    }
    unordered_set<int> set_v2(v2.begin(), v2.end());

    string result;
    for (int i = 0; i < m; ++i) {
        bool allPresent = true;

        for (int j = 1; j <= n; ++j) {
            if (j != v1[i] && set_v2.find(j) == set_v2.end()) {
                allPresent = false;
                break; 
            }
        }

        result += (allPresent ? '1' : '0');
    }

    cout << result << endl;

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