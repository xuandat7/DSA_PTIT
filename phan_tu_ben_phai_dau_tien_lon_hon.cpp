#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        
        stack<int> st;
        for(int i=0; i<n; i++){
            cin >> a[i];         
        }
        int F[n+5];
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && a[i] >= st.top()){
                st.pop();
            }
            if(st.empty())  F[i] = -1;
            else F[i] = st.top();
            st.push(a[i]); 
        }
        for(int i=0; i<n; i++)  cout << F[i] << ' ';
        cout << endl;
        }
    
    return 0;
}