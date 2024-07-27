#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int age; cin >> age;
    if (age > 50) cout << "Lao nien";
    else if (age > 25) cout << "Trung nien"; // age <= 50
    else if (age > 11) cout << "Thieu nien";
    else cout << "Thieu nhi";
}