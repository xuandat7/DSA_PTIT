#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> ke[1005];
bool visited[1005];
void BFS(int u){
	queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        
        q.pop();
        for(int x:ke[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
int tplt(){
	int cnt = 0;
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			cnt++;
			BFS(i);
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