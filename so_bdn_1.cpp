#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> v;
void init(){
    queue<ll> q;
    q.push(1);
    while(true){
        ll x = q.front(); q.pop();
        if(x >= 1e18) break;
        q.push(x*10);
        q.push(x*10 + 1*1ll);
        v.push_back(x);
    }
}

int main(){
    init();
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        ll cnt = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i] <= n)    cnt++;
            if(v[i] > n)    break;
        }
        cout << cnt << endl;
    }
    return 0;
}