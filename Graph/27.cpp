#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> alist[1001];
int visited[1001] = {};

int DFS(int i) {
    visited[i] = 1;
    int cnt = 1;
    for (int j : alist[i]) {
        if (visited[j] == 0) {
            cnt += DFS(j);
        }
    }
    return cnt;
}

int main() {
    cin >> n >> m;
    
    while (m--) {
        int x, y;
        cin >> x >> y;
        alist[x].push_back(y);
        alist[y].push_back(x);
    }

    int ans = 0;
    
    for (int i = 1; i <= n; i++) {
        if (visited[i] == 0) {
            ans = max(ans, DFS(i));
        }
    }

    cout << ans << endl;

    return 0;
}
