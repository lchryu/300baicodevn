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

int main() {
    fastIO();
    int n; cin >> n;
    cout << "Mua ";
    string season;
    if (2 <= n and n <= 4) season = "Xuan";
    else if (5 <= n and n <= 7) season = "Ha";
    else if (8 <= n and n <= 10) season = "Thu";
    else season = "Dong";
    cout << season;
}