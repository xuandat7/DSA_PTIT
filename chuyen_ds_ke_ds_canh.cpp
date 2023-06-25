#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
int main(){
    int n; cin >> n;
    cin.ignore();
    vector<pair<int, int>> v;
    for(int i=1; i<=n; i++){
        string s;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> s){
            if(stoi(s) > i){
                v.push_back({i,stoi(s)});
            }
        }
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i].first << ' ' << v[i].second;
        cout << endl;
    }
    return 0;
}