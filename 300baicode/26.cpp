#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main() {
    int n; cin >> n;
    int s = 0;
    for (int i = 3; i <= n; i++) {
        if (i % 15 == 0) s += i;
    }
    cout << s;
}