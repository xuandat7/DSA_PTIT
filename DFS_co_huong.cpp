#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visited[1005];
int n, m, u;
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
        
        cin >> n >> m >> u;
        memset(visited, false, sizeof(visited));
        for(int i=0; i<1005; i++)   ke[i].clear();
        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
        }
        DFS(u);
        cout << endl;
    }
    return 0;
}