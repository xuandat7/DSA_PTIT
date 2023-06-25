#include<bits/stdc++.h>
using namespace std;
int parent[1005];
bool visited[1005];
int n, m; 
void init(){
    for(int i=1; i<=n; i++){
        parent[i] = i;
    }
}
int FindPar(int u){
    if(u!=parent[u]){
        parent[u] = FindPar(parent[u]);
    }
    return parent[u];
}
bool chutrinh(int u, int v){
    // tim xem co canh nguoc giua u voi v khong
    int a = FindPar(u), b = FindPar(v);
    if(a == b)  return true;
    parent[b] = a;
    return false;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        
        cin >> n >> m;
        init();
        bool check = false;
        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            
            if(chutrinh(x, y))  check = true;
            
        }
        if(check)   cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}