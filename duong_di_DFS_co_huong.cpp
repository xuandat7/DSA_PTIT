#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
vector<int> ke[1005];
int parent[1005];
void DFS(int u){
    visited[u] = true;
    for(int v:ke[u]){
        if(!visited[v]){
            parent[v] = u;
            DFS(v);
        }
    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, m, u, v; cin >> n >> m >> u >> v;
        for(int i=0; i<=1005; i++)  ke[i].clear();
        memset(visited, false, sizeof(visited));
        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            
        }
        DFS(u);
        if(!visited[v]) cout << -1;
        else{
            vector<int> p;
            while(v!=u){
                p.push_back(v);
                v = parent[v];
            }
            p.push_back(u);
            reverse(p.begin(), p.end());
            for(int x:p)    cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}