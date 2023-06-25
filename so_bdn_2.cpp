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
    // init();
    int t; cin >> t;
    while (t--) {
        int n;
		cin >> n;
		queue<ll>q;
		q.push(1);
		while (1) {
			ll x = q.front();
			q.pop();
			if (x % n == 0) {
				cout << x << endl;
				break;
			}
			q.push(x * 10);
			q.push(x * 10 + 1ll * 1);
		}
	}
    return 0;
}