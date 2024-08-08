#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

void fastIO() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    system("cls");
}
const int MOD = 1e9 + 7;
ll binPow(ll a, ll b) {
    if (b == 0) return 1;
    ll x = binPow(a, b / 2);
    if (b % 2) return x * x * a;
    return (x % MOD) * (x % MOD) % MOD;
}

int main() {
    fastIO();
  
}