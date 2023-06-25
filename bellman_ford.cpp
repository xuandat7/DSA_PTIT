#include <bits/stdc++.h>

using namespace std;

using ll = long long;
int a[100][100];
int t, n, m;
struct Edge {
	int x, y, w;
};
vector<Edge>E;
int truoc[1005];
int d[1005];
void bellmanFord(int u) {
	for(int i=1; i<=n; i++){
        d[i] =  1e9;
        truoc[i] = u;
    }
	d[u] = 0;
	for (int i = 1; i <= n - 2; i++) {
		for(int v=1; v<=n; v++){
            if(v!=u){
                for(int s = 1; s<=n; s++){
                    if(d[v] > d[s] + a[s][v] && a[s][v] != 0){
                        d[v] = d[s] + a[s][v];
                        truoc[v] = s;

                    }
                }
            }
        }
	}
    for (int i = 1; i <= n; i++) {
        cout << d[i] << " ";
    }
    cout << endl;
    // for(int i=1; i<=n; i++)     cout << truoc[i] << " ";
    for(int i=1; i<=n; i++){
        if(d[i] == 1e9){
            cout << "K/c " << u << " -> " << i << ": INF;" << endl; 
        }
        if(i==u){
            cout << "K/c " << u << " -> " << i << ": 0; " << u << " <- " << u << endl; 
        }
        else{
            cout << "K/c " << u << " -> " << i << ": " << d[i] << "; ";
            int tmp = u, tmp2 = i;
            vector<int> path;
            while(tmp2 != tmp){
                path.push_back(tmp2);
                tmp2 = truoc[tmp2];
            }
            path.push_back(tmp);
            for(int j=0; j<path.size()-1; j++){
                cout << path[j] << " <- ";
            } 
            cout << path[path.size()-1] << endl;

        }
    }
}
int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> t;
	while (t--) {
        
		cin >> n;
		for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin >> a[i][j];
            }
        }
		bellmanFord(4);
        cout << endl;
	}
	return 0;
}