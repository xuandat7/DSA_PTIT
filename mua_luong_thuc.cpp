#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, s, m; cin >> n >> s >> m;
        if(n<m || 6*n -7*m < 0){
            cout << -1;
        }
        else {
            int mua = s*m / n;
            if(mua*n < s*m)    mua++;
            cout << mua;
        }
        cout << endl;
    }
}