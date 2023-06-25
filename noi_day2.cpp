#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        // tim min voi do phuc tap nho hon O(n) 
        priority_queue<ll, vector<ll>, greater<ll> > q;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            q.push(x);
        }
        ll ans = 0;
        while(q.size() >= 2){
            ll min1= q.top(); q.pop();
            ll min2 = q.top(); q.pop();
            ll sum = (min1 + min2)%mod;
            ans += sum%mod;
            q.push(sum);
        }
        cout << ans%mod << endl;

    }
}