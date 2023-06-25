#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
int n,m,s;
vector<ii> ke[1005];
int a[105][105];
void Dijkstra(){
	priority_queue<ii, vector<ii>, greater<ii>> q;
	q.push({0, s});
    int p[n+5];
	vector<int> d(n+1, 1e9); d[s] = 0;
	while (!q.empty())
	{
		ii top = q.top(); q.pop();
		int dis = top.first; int u = top.second;
		if(dis > d[u]) continue;
		for(int i=1; i<=n; i++){
            if(a[u][i] != 0 && d[i] > d[u] + a[u][i])
			{
                p[i] = u;
				d[i] = d[u] + a[u][i];
				q.push({d[i], i});
			}
		}

       
	}
	// for(int i=1; i<=n; i++){
	// 	cout << d[i] << ' ';
	// }
    for(int i=1; i<=n; i++){
        if(d[i] == 1e9) cout << "k/c " << s << "-> " << i << ": INF;" << endl;
        if(i==s)    cout << "k/c " << s << "-> " << i << ": 0" <<endl;
        else{
            cout << "k/c " << s << "-> " << i << ": " << d[i] << "; ";
            vector<int> path;
            int tmp = s, tmp2 = i;
            while(tmp2 != tmp){
                path.push_back(tmp2);
                tmp2 = p[tmp2];
            }
            path.push_back(tmp);
            for(int j = 0; j<path.size()-1; j++)  cout << path[j] << " <- ";
            cout << path[path.size()-1];
            cout << endl;
        } 
    }
	
}
int main(){
	
    int t; cin >> t;
    while (t--)
    {
    	for(int i=1; i<1005; i++)	ke[i].clear();
		cin >> n >> s;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
                cin >> a[i][j];
            }
		}
		Dijkstra();
        cout << endl;
       
        
    }
    return 0;
}
