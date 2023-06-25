#include<bits/stdc++.h>
using namespace std;
int n, m;
set<int> ke[1005];
void Euler_Cycle(int u){
	stack<int> st;
	vector<int> ce;
	st.push(u);
	while(!st.empty()){
		int s = st.top();
		if(ke[s].size() != 0){
			int t = *ke[s].begin();
            st.push(t);
            ke[s].erase(t);
            ke[t].erase(s);

		}
        else{
            st.pop();
            ce.push_back(s);
        }
	}
    // reverse(ce.begin(), ce.end());
    for(int i=ce.size()-1; i>=0; i--)  cout << ce[i] << " ";
	
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        // memset(visited, false, sizeof(visited));
        // for(int i=0; i<1005; i++)   ke[i].clear();
        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            ke[x].insert(y);
            ke[y].insert(x);
        }
        Euler_Cycle(10);
        cout << endl;
    }
    return 0;
}