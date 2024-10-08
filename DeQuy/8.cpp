#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    ll a, b; cin >> a >> b;
    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;
}
