#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
int a[105][105];
int n;
void BFS(int u){
	queue<int> q;
	q.push(u);
	chuaxet[u] = false;
	cout << u << ": ";
	while (!q.empty())
	{
		int s = q.front(); q.pop();
		cout << s << " ";
		for(int i=1; i<=n; i++){
			if(a[s][i] == 1 && chuaxet[i] == true){
				q.push(i);
				chuaxet[i] = false;
				
			}
		}
	}
	cout << endl;
	
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				cin >> a[i][j];
			}
		}
		for(int i=1; i<=n; i++){
			BFS(i);
			memset(chuaxet, true, sizeof(chuaxet));

		}
        cout << endl;
    }
    return 0;
}