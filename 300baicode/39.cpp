#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e7 + 5;
bool prime[maxn] = {false, false};
void sieve() {
    for (int i = 0; i <= maxn; i++) prime[i] = true;
    for (int i = 2; i <= sqrt(maxn); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= maxn; j += i) {
                prime[j] = false;
            }
        }
    }
}
int main() {
    int k; cin >> k;
    sieve();
    int cnt = 0;
    for (int i = 2; i <= maxn; i++) {
        if (prime[i]) {
            cout << i << ' ';
            cnt++;
        }
        if (cnt == k) break;
    }
}