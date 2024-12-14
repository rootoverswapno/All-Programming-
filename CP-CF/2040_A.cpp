#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e3 + 10;
vector<int> graph[N];
bool visited[N];
void dfs(int vertex)
{
    visited[vertex] = true;
    for (auto cheld : graph[vertex])
    {
        if (visited[cheld])
        {
            continue;
        }
        dfs(cheld);
    }
}
void solve_by_Swapno()
{

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &num : v)
    {
        cin >> num;
    }

    for (int i = 0; i < v.size(); ++i)
    {
        bool it = true;
        for (int j = 0; j < v.size(); ++j)
        {
            if (i != j)
            {
                if ((abs(v[i] - v[j])) % k == 0)
                {
                    it = false;
                    break;
                }
            }
        }
        if (it)
        {
            cout << "YES" << endl;
            cout << i + 1 << endl;
            return;
        }
    }
    cout << "NO" << endl;
   
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve_by_Swapno();
    }
    return 0;
}