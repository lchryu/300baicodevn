#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll fibo(ll n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main() {
    ll n; cin >> n;
    cout << fibo(n);
}
