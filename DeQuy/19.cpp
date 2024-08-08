#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(ll n) {
    if (n < 10) return n % 2 == 0;
    
    int lastDigit = n % 10;
    if (lastDigit % 2 == 1) return false;

    return check(n / 10);
}
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    ll n; cin >> n;
    if (check(n)) cout << "YES";
    else cout << "NO";
}
