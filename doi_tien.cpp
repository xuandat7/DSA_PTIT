#include<bits/stdc++.h>
using namespace std;
int tien[11] = {1,2,5,10,20,50,100,200,500,1000};
void solve(int n){
    int cnt = 0;
    for(int i=9; i>=0; i--){
        while(tien[i] <= n){
            n-=tien[i];
            cnt++;
        }
    }
    cout << cnt << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        solve(n);
    }
}