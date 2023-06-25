#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
vector<int> ke[1005];
vector<pair<int, int>> tree;
void DFS(int u){
    visited[u] = true;
    for(int v:ke[u]){
        if(!visited[v]){
            tree.push_back({u, v});
            DFS(v);
        }
       
    }
    
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, m, u; cin >> n >> m >> u;
        
        memset(visited, false, sizeof(visited));

        for(int i=0; i<1005; i++)   ke[i].clear();
        tree.clear();
        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        DFS(u);
        if(tree.size() == n-1){
            for(auto i:tree)    cout << i.first << " " << i.second << endl;
        }
        else cout << -1;
        
        cout << endl;
    }
    return 0;
}