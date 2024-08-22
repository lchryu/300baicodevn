// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin >> n;
//     cin.ignore();
//     for(int i = 1; i <= n; i++){
//         string s;
//         getline(cin, s);
//         // dinh i
//         stringstream ss(s);
//         string tmp;
//         while(ss >> tmp){
//             int x = stoi(tmp);
//             if(x > i) cout << i << " " << x << endl;
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    cin.ignore();
    for (int v = 1; v <= n; v++) {
        string adjList; getline(cin, adjList);
        stringstream ss(adjList);
        string tmp;
        while (ss >> tmp) {
            int neighbor = stoi(tmp);
            if (neighbor > v) cout << v << ' ' << neighbor << endl;
        }
    }
}