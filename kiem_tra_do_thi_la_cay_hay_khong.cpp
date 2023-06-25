#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
vector<int> ke[1005];
int parent[1005];
bool DFS(int u){
    visited[u] = true;
    for(int v:ke[u]){
        if(!visited[v]){
            parent[v] = u;
            if(DFS(v)){
                return true;
            }
        }
        else if(v != parent[u]) return true;
    }
    return false;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        memset(parent, 0, sizeof(parent));
        memset(visited, false, sizeof(visited));
        for(int i=0; i<1005; i++)   ke[i].clear();
        for(int i=1; i<=n-1; i++){
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        bool check = true;
        for(int i=1; i<=n; i++){
            if(!visited[i]){
                if(DFS(i)){
                    check = false;
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