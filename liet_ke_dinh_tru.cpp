#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> ke[1005];
bool visited[1005];
void DFS(int u){
    visited[u] = true;
    for(int v:ke[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}
void dinhtru()
{
    for(int i=1; i<=n; i++){
        visited[i] = true;
        if(i == 1)  DFS(2);
        else DFS(1);

        bool check = false;
        for(int j=1; j<=n; j++){
            if(!visited[j]) check = true;
        }
        if(check)   cout << i << " ";
        memset(visited, false, sizeof(visited));
    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for(int i=0; i<1005; i++)   ke[i].clear();
        memset(visited, false, sizeof(visited));
        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        dinhtru();
        cout << endl;
    }
    return 0;
}