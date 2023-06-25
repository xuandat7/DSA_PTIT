#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visited[1004];
int deg[1005];
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
        // memset(visited, false, sizeof(visited));
        int n, m; cin >> n >> m;
        memset(deg, 0, sizeof(deg));
        for(int i=0; i<1005; i++)   ke[i].clear();
        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            deg[x]++;
            deg[y]++;
        }
        int check = 1;
        int cnt = 0;
        for(int i=1; i<=n; i++){
            if(deg[i]%2==1){
                cnt++;    

            }
        }
        if(cnt == 2)    cout << 1;
        else if (cnt == 0)  cout << 2;
        else cout << 0;  
        cout << endl;
    }
    return 0;
}