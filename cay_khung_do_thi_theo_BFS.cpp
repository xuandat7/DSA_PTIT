#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
vector<int> ke[1005];
vector<pair<int, int>> tree;
void BFS(int u){
    visited[u] = true;
    queue<int> q; q.push(u);
    while (!q.empty())
    {
        int s = q.front(); q.pop();
        for(int v:ke[s]){
            if(!visited[v]){
                q.push(v);
                tree.push_back({s, v});
                visited[v] = true;
            }
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
        BFS(u);
        if(tree.size() == n-1){
            for(auto i:tree)    cout << i.first << " " << i.second << endl;
        }
        else cout << -1;
        
        cout << endl;
    }
    return 0;
}