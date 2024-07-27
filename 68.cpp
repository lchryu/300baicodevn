#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int updateRight(string s) {
    int right = s.size() - 1;
    while (s[right] == ' ') right--;
    return right;
}
int main() {
    cin.tie(nullptr);
    
    string s; getline(cin, s);

    int left = 0, right = s.size() - 1;
    while (s[left]  == ' ') left++;
    for (int i = left; i <= right; i++) {
        while (s[i] == ' ' && s[i + 1] == ' ') {
            s.erase(i, 1);
        }
        right = updateRight(s);
    }
    cout << s;
}