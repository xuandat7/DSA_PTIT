#include<bits/stdc++.h>
using namespace std;
int m, n, u;
bool chuaxet[1005];
vector<int> List[1005];
void BFS(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u] = false;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout << v << ' ';
        for(int x:List[v]){
            if(chuaxet[x]){
                q.push(x);
                chuaxet[x] = false;
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int u, x, y;
        memset(chuaxet, true, sizeof(chuaxet));
        for(int i=0; i<1005; i++)   List[i].clear();
        cin >> n >> m >> u;
        for(int i=1; i<=m; i++){
            cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        BFS(u);
        cout << endl;
        
    }
    
    return 0;
}