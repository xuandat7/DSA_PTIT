#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
vector<int> ans;
bool visited[1004];
void DFS(int u, int pre, vector<int> path){
    visited[u] = true;
    
    for(int v:ke[u]){
        if(v == 1 && v != pre && ans.empty()){
            path.push_back(v);
            ans = path;
            return;
        }
        if(!visited[v]){
            path.push_back(v);
            DFS(v, u, path);
            path.pop_back();
        }
    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        memset(visited, false, sizeof(visited));
        ans.clear();
        int n, m; cin >> n >> m;
        for(int i=0; i<1005; i++)   ke[i].clear();
        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        //
        for(auto &i:ke){
            sort(i.begin(), i.end());
        }
        DFS(1, -1, {1});
        if(ans.empty()){
            cout << "NO";
        }
        else {
            for(int i:ans)  cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}