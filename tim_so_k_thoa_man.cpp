#include<bits/stdc++.h>
using namespace std;
bool solve(int n){
    priority_queue<int> pq;
    while(n){
        pq.push(n%10);
        n/=10;
    }
    int prev = 0;
    while(!pq.empty()){
        if(pq.top() > 5) return false;
        if(pq.top() == prev)    return false;
        prev = pq.top();
        pq.pop();
    }
    return true;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int l, r; cin >> l >> r;
        int cnt = 0;
        for(int i=l; i<=r; i++){
            if(solve(i))    cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}