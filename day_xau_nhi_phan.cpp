#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f[100];
void init(){
    f[0] = 0; f[1] = 1;
    for(int i=2; i<=93; i++){
        f[i] = f[i-1] + f[i-2];
    }
}
char solve(int n, ll k){
    if(n==1)    return '0';
    if(n==2)    return '1';
    if(k<=f[n-2])   return solve(n-2, k);
    return solve(n-1, k-f[n-2]);
}
int main(){
    int t; cin >> t;
    init();
    while(t--){
        int n; ll k; cin >> n >> k;
        cout << solve(n, k) << endl;
    }
}