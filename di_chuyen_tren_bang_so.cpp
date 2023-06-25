#include<bits/stdc++.h>
using namespace std;
int n, m;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
typedef pair<int, pair<int, int>> iii;
int a[1005][1005];
int d[1005][1005];
int dijkstra(){
    priority_queue<iii, vector<iii>, greater<iii>> q;
    q.push({a[1][1], {1,1}});
    d[1][1] = a[1][1];
    while(!q.empty()){
        auto top = q.top(); q.pop();
        int dis = top.first;
        int u = top.second.first, v= top.second.second;
        for(int i=0; i<4; i++){
            int x = u + dx[i];
            int y = v + dy[i];
            if(x >= 1 && x <=n && y <=m && y >= 1){
                if(d[x][y] > d[u][v] + a[x][y]){
                    d[x][y] = d[u][v] + a[x][y];
                    q.push({d[x][y], {x, y}});
                }
            }
        }
    }
    return d[n][m];
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> a[i][j];
                d[i][j] = 1e9;
            }
        }
        cout << dijkstra() <<endl;
    }
    return 0;
}