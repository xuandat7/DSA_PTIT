#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> a;
void soPhanTuTrungTam(ll n){
    // la cac vi tri tai 2^i
    int idx = 0;
    ll mu = 1;
    while(n/2){
        idx++;
        if(idx==1){
            a.push_back(2);
            mu = 2;
        }
        else{
            mu*=2;
            a.push_back(mu);
        }
        n/=2;
    }
}
ll xuli(ll k, ll n, ll pos){
    if(k%2==1)  return 1;
    if(k>a[pos]){
        return xuli(2*a[pos] - k, n/2, pos-1);
    }
    else if(k<a[pos]){
        return xuli(k, n/2, pos-1);
    }
    else if(k == a[pos])    return n%2;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        ll n,l,r;
        cin >> n >> l >> r;
        ll ans = 0;
        soPhanTuTrungTam(n);
        for(ll i = l; i<=r; i++){
            ans += xuli(i, n, a.size()-1);
        }
        cout << ans << endl;
        a.clear();
    }
    

}