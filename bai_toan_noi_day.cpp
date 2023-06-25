#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        // tim min voi do phuc tap nho hon O(n) 
        priority_queue<int, vector<int>, greater<int> > q;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            q.push(x);
        }
        ll ans = 0;
        while(q.size() >= 2){
            int min1= q.top(); q.pop();
            int min2 = q.top(); q.pop();
            int sum = min1 + min2;
            ans += sum;
            q.push(sum);
        }
        cout << ans << endl;

    }
}