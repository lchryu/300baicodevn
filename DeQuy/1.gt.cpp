#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

void fastIO() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    // system("cls");
}
ll gt(ll n) {
    if (n == 0) return 1;
    return n * gt(n - 1);
}
int main() {
    // fastIO();
    ll n; cin >> n;
    cout << gt(n);
}
