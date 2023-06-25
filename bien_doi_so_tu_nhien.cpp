#include<bits/stdc++.h>
using namespace std;
int biendoi(int n){
    queue<pair<int, int>> q;
    map<int, int> mp;
    q.push({n, 0});
    while(!q.empty()){
        auto x = q.front(); q.pop();
        if(x.first == 1)    return x.second;
        if(x.first == 2)    return x.second+1;
        if(x.first > 2 && !mp[x.first-1]){
            q.push({x.first-1, x.second+1});
            mp[x.first-1]++;
        }
        for(int i=2; i<=sqrt(x.first); i++){
            if(x.first % i == 0 && !mp[x.first / i]){
                q.push({x.first / i, x.second + 1});
                mp[x.first]++;
            }
        }
    }
    return 0;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        cout << biendoi(n);
        cout << endl;
    }
    return 0;
}