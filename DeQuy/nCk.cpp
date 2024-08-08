#include <iostream>

int combination(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return combination(n - 1, k - 1) + combination(n - 1, k);
}

int main() {
    int n, k; std::cin >> k >> n;
    std::cout << combination(n, k) << std::endl;
    return 0;
}
