#include<bits/stdc++.h>
using namespace std;
int n;
int ok = 0;
int a[11][11];
int mark[11][11] = {0};
vector<string> res;
void xuly(){
    sort(res.begin(), res.end());
    for(int i=0; i<res.size(); i++){
        cout << res[i] << ' ';
    }
    cout << endl;
}
void quaylui(int i, int j, string s){
    if(a[1][1] == 0 || a[n][n] == 0){
        
        return;
    }
    if(i==n && j==n){
        res.push_back(s);
        return;
    }
    if(i != n && a[i+1][j] == 1 && !mark[i+1][j])
    {
        mark[i][j] = 1;
        quaylui(i+1, j, s+"D");
        mark[i][j] = 0;
    }
    if(j != n && a[i][j+1] == 1 && !mark[i][j+1]) 
    {
        mark[i][j] = 1;
        quaylui(i, j+1, s+"R");
        mark[i][j] = 0;        
    }
    if(j != 1 && a[i][j-1] == 1 && !mark[i][j-1]){
        mark[i][j] = 1;
        quaylui(i, j-1, s+"L");
        mark[i][j] = 0;
    }
    
    if(i != 1 && a[i-1][j] == 1 && !mark[i-1][j])
    {
        mark[i][j] = 1;
        quaylui(i-1, j, s+"U");
        mark[i][j] = 0;        
    } 
    // if((i < n && j < n && a[i+1][j] == 0 && a[i][j+1] == 1) || i > n || j > n)
    //     return;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin >> a[i][j];
            }
        }
        memset(mark, 0, sizeof(mark));
        quaylui(1, 1, "");
        if(!res.size()) cout << -1 << endl;
        else{

            xuly();
            
            res.clear();
            
        }
    }
    
}