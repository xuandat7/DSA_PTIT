#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visited[1005];
int parent[1005];
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int x:ke[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
                parent[x] = v;
            }            
        }
    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, m, u, v; cin >> n >> m >> u >> v;
        memset(visited, false, sizeof(visited));
        for(int i=0; i<1005; i++)   ke[i].clear();
        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            
        }
        BFS(u);
       
        if(!visited[v]){
            cout << -1;
        }
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