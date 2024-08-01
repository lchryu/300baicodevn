#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    FILE* file_in;
    freopen_s(&file_in, "input.txt", "r", stdin);
#endif
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int kwh; cin >> kwh;
    int kwhTieuThu = 0, tongTien = 0;
    if (kwh > 200) {
        kwhTieuThu = kwh - 200;
        tongTien += kwhTieuThu * 1500;
        kwh -= kwhTieuThu;
    }
    if (kwh > 100) {
        kwhTieuThu = kwh - 100;
        tongTien += kwhTieuThu * 1100;
        kwh -= kwhTieuThu;
    }
    if (kwh > 50) {
        kwhTieuThu = kwh - 50;
        tongTien += kwhTieuThu * 800;
        kwh -= kwhTieuThu;
    }
    if (kwh > 0) tongTien += kwh * 600;
    cout << tongTien;
}