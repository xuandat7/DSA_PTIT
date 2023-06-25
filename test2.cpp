#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
int a[105][105]; int n;
int parent[1005], d[1005];

void Bellman(int u){
    for(int i=1; i<=n; i++){
        d[i] = 1e9;
        parent[i] = u;
    }
    d[u] = 0;
    for(int i=1; i<=n-2; i++){
        for(int v=1; v<=n; v++){
            if(v!=u){
                for(int s=1; s<=n; s++){
                    if(a[s][v]!=0 && d[v] > d[s] + a[s][v]){
                        d[v] = d[s] + a[s][v];
                        parent[s] = v;
                    }
                }
            }
        }
    }
    for(int i=1; i<=n; i++) cout << d[i] << " ";
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        cin >> n; 
        for(int i=1; i<=n; i++){
            for(int j =1; j<=n; j++){
                cin >> a[i][j];
            }
        }
        Bellman(1);
        cout << endl;
    }
    return 0;
}