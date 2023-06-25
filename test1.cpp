#include<bits/stdc++.h>
using namespace std;
int n;
int a[105][105];
void Euler_Cycle(int u){
    stack<int> st;
    vector<int> ce;
    st.push(u); 
    while(!st.empty()){
        int idx = 1;
        int v = st.top(); st.top();
        while(idx <=n && a[v][idx] == 0)    idx++;
        if(idx <=n){
            st.push(idx);
            a[v][idx] = 0;
            a[idx][v] = 0;
        }
        else{
            st.pop();
            ce.push_back(v);
        }
    }
    for(int i=ce.size()-1; i>=0; i--){
        cout << ce[i] << " ";
    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin >> a[i][j];
            }
        }
        Euler_Cycle(8);
        cout << endl;
    }
    return 0;
}