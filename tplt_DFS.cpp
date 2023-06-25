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
int tplt(){
	int cnt = 0;
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			cnt++;
			DFS(i);
		}
	}
	return cnt;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
    	cin >> n >> m;
        memset(visited, false, sizeof(visited));
        for(int i=0; i<1005; i++)   ke[i].clear();
		for(int i=1; i<=m; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}    
		cout << tplt() << endl;
        cout << endl;
    }
    return 0;
}