#include <bits/stdc++.h>
int fibo(int n) {
    if (n == 1) return 0;
    if (n == 0) return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main() {
    int n; std::cin >> n;
    std::cout << fibo(n);
}