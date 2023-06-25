#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f[101][101];
void solve(int n){
    f[0][0] = 1; f[1][1] = 1; f[2][2] = 2;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            if(i!=j){
                f[i][j] = f[i][i] * f[j][j];
                f[j][i] = f[i][j];
            }
            else{
                int idx = i;
                if(idx % 2 == 0){
                    for(int k = 0; k<idx; k++){
                        f[i][i] += f[k][idx - k - 1];
                    }
                }
                else{
                    for(int k = 0; k<idx; k++){
                        if(k != idx - k - 1)
                            f[i][i] += f[k][idx - k - 1];
                        else 
                            f[i][i] = f[i][i] + f[k][k]*f[k][k];
                    }
                    
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    }

}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        solve(n);
        cout << endl;
    }
    return 0;
}