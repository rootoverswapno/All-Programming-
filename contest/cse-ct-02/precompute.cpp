#include <bits/stdc++.h>
using namespace std;

const int N = 200007; 
vector<int> vv(N);

int digitsum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    // vv[0]=0;
    for (int i = 0; i < N; ++i) {  
        vv[i] = vv[i - 1] + digitsum(i);
    }
  
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << vv[n] << endl;
       
    }

    return 0;
}
