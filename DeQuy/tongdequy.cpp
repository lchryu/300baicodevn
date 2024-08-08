#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int tong(int n) {
    if (n == 1) return 1;
    return n + tong(n - 1);
}
int main()
{
    int n; cin >> n;
    cout << tong(n);
}
