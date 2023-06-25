#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n+5];
        stack<int> st;  st.push(0);
        for(int i=1; i<=n; i++){
            cin >> a[i];
            while(st.size() > 1 && a[st.top()] <= a[i]) st.pop();
            cout << i - st.top() << " ";
            st.push(i);
        }
        while(st.size())    st.pop();
        cout << endl;
    }
    return 0;
}