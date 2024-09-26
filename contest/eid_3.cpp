#include<bits/stdc++.h>
long long  mod=1e9+7 ;
#define pb push_back
#define swapno king of the world  
#define vv vector<int>v(n);
#define int long long 
using namespace std;

void solve_de()
{
//rootover swapno.......
int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end()); 
    int target = v[n/2]; 
    int totalCost = 0;
    for (int i = 0; i < n; ++i) {
        totalCost += abs(v[i] - target); 
    }
    
    cout << totalCost << endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
  
solve_de();
//SWAPNO KING OF THE WORLD..
//NAM TO SUNA HI HOGA......

}
//@SWAPNO_MOY