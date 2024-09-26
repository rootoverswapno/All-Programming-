/*Arijit Biswas, the Wizard of Coding*/
#include<bits/stdc++.h>
#define ll long long
#define For(i,a,n) for(int i=a; i<n; i++)
#define For_eq(i,a,n) for(int i=a; i<=n; i++)
#define in cin>>
#define srt(a) sort(a.begin(), a.end())
#define vtr vector<ll>
#define pr pair<ll,ll>
#define unset unordered_set<ll>
#define p cout<<
#define nl <<endl
#define hae cout<<"YES"<<endl
#define na cout<<"NO"<<endl
using namespace std;

const int MAX_N = 2 * (1e5+7);
vtr vec(MAX_N);

ll digit_sum(ll i) {
    ll sum = 0;
    while (i > 0) {
        sum += i % 10;
        i /= 10;
    }
    return sum;
}

void pre_compute() {
    for (int i = 1; i < MAX_N; ++i) {
        vec[i] = vec[i - 1] + digit_sum(i);
    }
}

void anu(int case_num) {
    ll n;
    in n;
    p vec[n] nl;
}

int main() {
    pre_compute(); 

    ll tc;
    in tc;
    For_eq(i, 1, tc) {
        anu(i);
    }

    return 0;
}