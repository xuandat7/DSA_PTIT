#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n; 
int m = 1e9 + 7;
struct matran{
    ll f[100][100];
};
matran operator *(matran A, matran B){
    matran C;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            C.f[i][j] = 0;
            for(int k = 0; k<2; k++){
                C.f[i][j] += (A.f[i][k] * B.f[k][j]) % m;
                C.f[i][j]  %= m;
            }
        }
    }
    return C;
}
matran powmod(matran A, int k){
    if(k==1)    return A;
    matran B = powmod(A, k/2);
    if(k%2==0)  return B*B;
    return B*B*A;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        matran A;
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                A.f[i][j] = 1;
            }
        }
        A.f[1][1] = 0;
        matran B = powmod(A, n);
        cout << B.f[0][1] << endl;
    }
    
}