#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while (t--)
    {
        string s; 
        getline(cin, s);
        stringstream ss(s);
        stack<string> st;
        while(ss >> s){
            st.push(s);
        }
        while(!st.empty()){
            string top = st.top();
            cout << top << ' ';
            st.pop();
        }
        cout << endl;
    }
    return 0;
}