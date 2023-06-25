#include<bits/stdc++.h>
using namespace std;

unordered_map<string, bool> mp;
vector<string> res;
void dfs(string s){
    vector<pair<int,int>> pr;
    stack<int> st;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            st.push(i);
        }
        else if(s[i] == ')'){
            // if(!st.empty()){
                int fi = st.top(); st.pop();
                int se = i;
                pr.push_back({fi, se});

            
        }
    }
    if(pr.empty())  return;
    string tmp;
    for(auto i:pr){
        tmp = s;
        tmp.erase(tmp.begin() + i.second);
        tmp.erase(tmp.begin() + i.first);
        if(!mp[tmp]){
            mp[tmp] = 1;
            res.push_back(tmp);
            dfs(tmp);
        }
    }
}
int main(){
    // int t; cin >> t;
    int t = 1;
    while (t--)
    {
        string s; cin >> s;
        dfs(s);
        // cout << res.size();
        sort(res.begin(), res.end());
        // cout << res.size();
        for(auto x:res)   cout << x << endl;
        cout << endl;
    }
    return 0;
}