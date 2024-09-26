#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve_game() {
    int n, k, PB, PS;
    cin >> n >> k >> PB >> PS;

    vector<int> p(n), a(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<ll> scoreA(n + 1), scoreB(n + 1);

    for (int i = 1; i <= n; i++) {
        scoreA[i] = scoreA[i - 1] + a[i - 1];
        scoreB[i] = scoreB[i - 1] + a[i - 1] * (i == p[i - 1] ? PB : PS);
    }

    ll maxScore = 0;
    for (int i = 0; i <= n; i++) {
        ll currScoreA = scoreA[min(i, n)];
        ll currScoreB = scoreB[min(i, n)] + (k - i) * PS;
        maxScore = max(maxScore, currScoreA + currScoreB);
    }

    if (maxScore - scoreA[n] > scoreB[n])
        cout << "Bodya\n";
    else if (maxScore - scoreA[n] < scoreB[n])
        cout << "Sasha\n";
    else
        cout << "Draw\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve_game();
    }
    return 0;
}
