#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++)
        {
            int res = abs(x-a[i]);
            v.push_back(pair<int, int> (a[i], res));
        }
        stable_sort(v.begin(), v.end(), cmp);
        for(int i=0; i<v.size(); i++){
            cout << v[i].first << ' ';
        }
        cout << endl;
    }
}