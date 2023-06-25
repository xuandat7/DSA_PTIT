#include<bits/stdc++.h>
using namespace std;
#define ll long long
int m = 1e9 + 7;
int n; ll k;
struct matran{
    ll f[100][100];
};
matran operator *(matran A, matran B){
    matran C;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            C.f[i][j] = 0;
            for(int q=0; q<n; q++){
                C.f[i][j] += (A.f[i][q]*B.f[q][j]) % m;
                C.f[i][j] = C.f[i][j] % m;
            }
        }
    }
    return C;
}
matran powmod(matran A, ll b){
    if(b==1)    return A;
    matran C = powmod(A, b/2);
    if(b%2==0)  return C*C;
    return (C*C)*A;  
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        matran A;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> A.f[i][j];
            }
        }
        matran B = powmod(A, k);
        ll ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << B.f[i][j] << ' ';
            }
            cout << endl;

        }
        //cout << ans << endl;
    }
}