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

int main() {
   // fastIO();
    string s; getline(cin, s);
    for (auto &c : s) c = tolower(c);
    map<char,int>m;
    for (auto c : s) m[c]++;

    for (auto c : s) {
        if (m.find(c) != m.end()) {
            cout << c << ':' << m[c] << ' ';
            m.erase(c);
        }
    }
}