#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visited[1005];
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(int x:ke[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n,m,u; cin >> n >> m >> u;
        memset(visited, false, sizeof(visited));
        for(int i=0; i<1005; i++)   ke[i].clear();
        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
        }
        BFS(u);
        cout << endl;
    }
    return 0;
}