#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define all(x) x.begin(), x.end()
#define pb push_back
using namespace std;
using ll = long long;

void fastIO() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
}

int main() {
    fastIO();
    int n; cin >> n;
    int a[n];
    vector<int>evenNumbers;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) evenNumbers.pb(a[i]);
    }
    if (evenNumbers.empty()) cout << 0;
    else cout << fixed << setprecision(2) << accumulate(all(evenNumbers), 0.0)/evenNumbers.size();
}