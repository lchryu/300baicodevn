#include <bits/stdc++.h>

using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double perimeter = a + b + c;
    double p = perimeter / 2;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed << setprecision(1) << perimeter << ' ' << fixed << setprecision(3) << area;
}