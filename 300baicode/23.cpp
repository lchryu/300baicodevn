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

int main() {
    int n; cin >> n;
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            cout << i << ' ';
            flag = true;
        }
    }
    if (!flag) cout << "-";
}