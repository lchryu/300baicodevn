#include <bits/stdc++.h>
using namespace std;

int visited[1001] = {};
vector<int> alist[1001];
int pre[1001] = {};
int n, m, s, t;

void DFS(int i) {
    visited[i] = 1;
    sort(alist[i].begin(), alist[i].end());
    for(int j = 0; j < alist[i].size(); j++) {
        if(visited[alist[i][j]] == 0) {
            pre[alist[i][j]] = i;
            DFS(alist[i][j]);
        }
    }
}

void findway() {
    DFS(s);
    if(visited[t] == 0) {
        cout << "-1\n";
        return;
    }
    vector<int> way;
    way.push_back(t);
    while(t != s) {
        t = pre[t];
        way.push_back(t);
    }
    for(int i = way.size() - 1; i >= 0; i--) {
        cout << way[i] << " ";
    }
    cout << endl;
}

int main() {
    cin >> n >> m >> s >> t;
    while(m--) {
        int x, y;
        cin >> x >> y;
        alist[x].push_back(y);
        alist[y].push_back(x);
    }

    findway();
    return 0;
}
