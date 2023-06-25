#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[1005][1005];
int mark[1005][1005];
int dichuyen(){
    queue<pair<int,int>> q;
    q.push({1,1});
    while (true)
    {
        if(q.empty())   return -1;
        auto x = q.front(); 
        
        if(x.first == n && x.second == m){
            break;
        }
        q.pop();
        int tmp = a[x.first][x.second];
        
        if(x.first+tmp <= n && x.second <= m && !mark[x.first + tmp][x.second]){
            q.push({x.first+tmp, x.second});
            mark[x.first+tmp][x.second] =  mark[x.first][x.second] + 1;
        }
        if(x.first <= n && x.second+tmp <= m && !mark[x.first][x.second+tmp]){
            q.push({x.first, x.second+tmp});
            mark[x.first][x.second+tmp] = mark[x.first][x.second] + 1;
        }
        
    }
    return mark[n][m];
    
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        // memset(mark, 0, sizeof(mark));
        cin >> n >> m;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> a[i][j];
                mark[i][j] = 0;
            }
        }
        cout << dichuyen() << endl;
        cout << endl;
    //     for(int i=1; i<=n; i++){
    //         for(int j=1; j<=n; j++){
    //             cout << mark[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    }
    return 0;
}