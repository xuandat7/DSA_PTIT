#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, m, q; cin >> n >> m >> q;
        string x, y, z;
        cin >> x >> y >> z;
        
        int F[n+5][m+5][q+5] = {0};
        for(int i=0; i<=n; i++){
            for(int j=0; j<=m; j++){
                for(int k=0; k<=q; k++){
                    if(i==0 || j==0 || k==0){
                        F[i][j][k] = 0;
                    }
                    else{
                        if(x[i-1] == y[j-1] && y[j-1] == z[k-1]){
                            F[i][j][k] = F[i-1][j-1][k-1] + 1;
                        }
                        else{
                            F[i][j][k] = max({F[i-1][j][k], F[i][j-1][k], F[i][j][k-1]});
                        }
                    }
                }
            }
        }
        cout << F[n][m][q];
        cout << endl;
    }
    return 0;
}