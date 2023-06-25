#include<bits/stdc++.h>
using namespace std;
int n,m;
bool visited[1005];
vector<int> ke[1005];
void DFS(int u){
	visited[u] = true;
	for(int v:ke[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}
bool check(int u, int v){
    memset(visited, false, sizeof(visited));
    DFS(u);
	if(visited[v])	return true;
	else return false;
	
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        memset(visited, false, sizeof(visited));
        for(int i=0; i<1005; i++)	ke[i].clear();
        for(int i=1; i<=m; i++){
        	int x, y; cin >> x >> y;
        	ke[x].push_back(y);
        	ke[y].push_back(x);
		}
		int q; cin >> q;
		while(q--){
			int u, v; cin >> u >> v;
			
			if(check(u, v))	cout << "YES\n";
			else cout << "NO\n";
		}
        cout << endl;
    }
    return 0;
}