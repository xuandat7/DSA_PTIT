#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visited[1005];
int parent[1005];
int color[1005];
bool DFS(int u){
    visited[u] = true;
    for(int v: ke[u]){
        if(!visited[v]){
            parent[v] = u;
            if(DFS(v)){
                return true;
            }
        }
        else if (v != parent[u]){
            return true;
        }
    }
    return false;
}
// co huong
bool DFS_co_huong(int u){
    color[u] = 1;
    for(int v: ke[u]){
        if(color[v] == 0){
            parent[v] = u;
            if(DFS_co_huong(v)){
                return true;
            }
        }
        else if (color[v] == 1){
            return true;
        }

    }
    color[u] = 2;
    return false;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        memset(color, 0, sizeof(color));
        memset(parent, 0, sizeof(parent));
        for(int i=0; i<1005; i++)   ke[i].clear();
        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            
        }
        bool check = false;
        for(int i=1; i<=n; i++){
            if(color[i] == 0){
                if(DFS_co_huong(i)){
                    check = true;
                    break;
                }
            }
        }
        if(check)   cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}