#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    while (t--)
    {
        int k; cin >> k;
        string s; cin >> s;
        map<char, int> mp;
        for(char x:s){
            mp[x]++;
        }
        priority_queue<int, vector<int>, less<int>> q;
        for(auto i: mp){
            q.push(i.second);
        }
        // while (!q.empty())
        // {
        //     cout << q.top() << endl;
        //     q.pop();
        // }
        
        ll ans = 0;
        // while (!q.empty())
        // {
        //     int x = q.top(); q.pop();
        //     ans += x*x;
        // }
        
        while (k--)
        {
            ll x = q.top(); q.pop();
            
            q.push(x-1);
        }
        while(!q.empty()){
            ll x = q.top(); q.pop();
            ans += x*x;
        }
        cout << ans << endl;
    }
    return 0;
}