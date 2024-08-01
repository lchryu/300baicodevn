#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

void fastIO() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    system("cls");
}
const int maxn = 1e7 + 5;
bool p[maxn] = {false, false};
void sieve() {
    for (int i = 2; i <= maxn; i++) p[i] = true;
    for (int i = 2; i <= sqrt(maxn); i++) {
        if (p[i]) {
            for (int j = i * i; j <= maxn; j += i) {
                p[j] = false;
            }
        }
    }
}
int main() {
    //fastIO();
    int n; cin >> n;
    if (n < 2) {
        cout << n;
        return 0;
    }
    int cnt = 2;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cnt ++;
            if (i != n / i) cnt++;
        }
    }
    cout << cnt;
}