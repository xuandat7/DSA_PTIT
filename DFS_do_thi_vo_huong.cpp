#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
vector<int> ke[1005];
void DFS(int u){
    cout << u << ' ';
    visited[u] = true;
    for(int v:ke[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, m, u; cin >> n >> m >> u;
        for(int i=0; i<1005; i++)   ke[i].clear();
        memset(visited, false, sizeof(visited));
        
        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        DFS(u);
        cout << endl;
    }
    return 0;
}