#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll xuli(string a){
    ll kq = 0;
    int p = 1;
    for(int i=a.size()-1; i>=0; i--){
        kq += int(a[i] - '0')*p;
        p*=2;
    }
    return kq;
}
int main(){
    int t; cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        ll m = 0, n = 0;
        m = xuli(a); n = xuli(b);
        cout << m*n << endl;
    }
}