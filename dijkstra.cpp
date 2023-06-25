#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
int n,m,s;
vector<ii> ke[1005];
void Dijkstra(){
	priority_queue<ii, vector<ii>, greater<ii>> q;
	q.push({0, s});
	vector<int> d(n+1, 1e9); d[s] = 0;
	while (!q.empty())
	{
		ii top = q.top(); q.pop();
		int dis = top.first; int u = top.second;
		if(dis > d[u]) continue;
		for(ii e:ke[u]){
			int v = e.first, w = e.second;
			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				q.push({d[v], v});
			}
		}
	}
	for(int i=1; i<=n; i++){
		cout << d[i] << ' ';
	}
	
}
int main(){
	
    int t; cin >> t;
    while (t--)
    {
    	for(int i=1; i<1005; i++)	ke[i].clear();
		cin >> n >> m >> s;
		for(int i=1; i<=m; i++){
			int x, y, w; cin >> x >> y >> w;
			ke[x].push_back({y, w});
			ke[y].push_back({x, w});
		}
		Dijkstra();
        cout << endl;
       
        
    }
    return 0;
}
