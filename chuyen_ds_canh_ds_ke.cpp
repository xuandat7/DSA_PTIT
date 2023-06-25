#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
int main(){
    int t; cin >> t;
    while (t--)
    {
        int x, y; cin >> x >> y;
        for(int i=1; i<=y; i++){
            int u, v; cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        for(int i=1; i<=x; i++){
            cout << i << ": ";
            for(int j=0; j<ke[i].size(); j++){
                cout << ke[i][j] << ' ';
            }
            cout << endl;
        }
        // ke->clear();
        for(int i=1; i<=x; i++){
            ke[i].clear();
        }
        cout << endl;
    }
    return 0;
}