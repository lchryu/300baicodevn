#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

int main() {
    ll l, r; cin >> l >> r;
    cout << r / 3 - (l - 1)/3;
}