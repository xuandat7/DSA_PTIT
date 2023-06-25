#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visited[1005];
vector<pair<int, int>> dscanh;

int n, m; 
void DFS(int u){
    visited[u] = true;
    for(int v:ke[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}
void DFScc(int u, int s, int t){
    visited[u] = true;
    for(int v: ke[u]){
        if(v == s && u == t || v == t && u == s)    continue;
        if(!visited[v]){
            DFScc(v, s, t);
        }
    }

}
int main(){
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for(int i=0; i<1005; i++)   ke[i].clear();
        dscanh.clear();
        memset(visited, false, sizeof(visited));
        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
            dscanh.push_back({x, y});
        }
        for(int i=1; i<=n; i++){
            sort(ke[i].begin(), ke[i].end());
        }
        int tplt = 0;
        for(int i=1; i<=n; i++){
            if(!visited[i]){
                tplt++;
                DFS(i);
            }
        }
        for(auto i:dscanh){
            memset(visited, false, sizeof(visited));
            int cnt = 0;    
            int x = i.first; 
            int y = i.second;
            for(int j = 1; j<=n; j++){
                if(!visited[j]){
                    cnt++;
                    DFScc(j, x, y);
                }
            }
            if(cnt > tplt)  cout << x << " " << y << " "; 
        }
        cout << endl;
    }
    return 0;
}