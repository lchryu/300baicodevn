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
}
const double p = 3.14;

int main() {
    fastIO();
    double a; cin >> a;
    cout << fixed << setprecision(2) << 2 * p * a << ' ' << p * pow(a, 2);
}