#include<bits/stdc++.h>
using namespace std;
//luu key va value vao vector pair, sort theo ham cmp
// v.push_back(pair<int, int> (a,b));
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second)    return a.second > b.second;
    return a.first < b.first;    
}
int main(){
    int t; cin >> t;
    while(t--){
        vector<pair<int, int>> v;
        int n; cin >> n;
        int a[n];
        map<int, int> mp;
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=0; i<n; i++){
            mp[a[i]]++;
        }
        
        for(auto it:mp){
            v.push_back(pair<int,int> (it.first, it.second));
        }
        sort(v.begin(), v.end(), cmp);
        for(int i=0; i<v.size(); i++){
            for(int j=0; j<v[i].second; j++){
                cout << v[i].first << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}