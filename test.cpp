#include<bits/stdc++.h>
using namespace std;
int minPathSum(vector<vector<int>>& grid) {
    int dp[201][201] = {};
    int m = grid.size();
    int n = grid[0].size();
    dp[0][0] = grid[0][0];
    for(int i=1; i<m; i++){
        dp[i][0] = dp[i-1][0] + grid[i][0];    
    }
    for(int i=1; i<n; i++){
        dp[0][i] = dp[0][i-1] + grid[0][i];    
    }
    for(int i=1; i<grid.size(); i++){
        for(int j=1; j<grid[i].size(); j++){
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
        }
    }
    return dp[m][n];
}
int main(){
    vector<vector<int>> v;
    int m, n; cin >> m >> n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int x; cin >> x;
            v[i].push_back(x);
        }
    }
    cout << minPathSum(v);
    return 0;
}