#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;

void fastIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    fastIO();
    double a, b;
    cin >> a >> b;
    double avg = (a + b * 2) / 3;
    if (avg >= 8)
    {
        cout << fixed << setprecision(1) << avg << endl;
        cout << "Gioi";
    }
    else if (avg >= 6.5)
    {
        cout << fixed << setprecision(1) << avg << endl;
        cout << "Kha";
    }
    else if (avg >= 5.0)
    {
        cout << fixed << setprecision(1) << avg << endl;
        cout << "Trung binh";
    }
    else if (avg >= 3.5)
    {
        cout << fixed << setprecision(1) << avg << endl;
        cout << "Yeu";
    }
    else
    {
        cout << fixed << setprecision(1) << avg << endl;
        cout << "Kem";
    }
}