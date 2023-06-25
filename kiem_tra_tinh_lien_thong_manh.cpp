#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1004];
bool visited[1005];
void DFS(int u){
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
        int n, m; cin >> n >> m;
        for(int i=0; i<1005; i++)   ke[i].clear();
        memset(visited, false, sizeof(visited));
        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
        }
        bool check = true;
        for(int i=1; i<=n; i++){
            DFS(i);
            for(int j=1; j<=n; j++){
                if(!visited[j]){
                    check = false;
                    break;
                }
            }
            memset(visited, false, sizeof(visited));
        }
        if(check)   cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}