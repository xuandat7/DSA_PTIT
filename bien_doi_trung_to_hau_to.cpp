#include<bits/stdc++.h>
using namespace std;
int uutien(char c){
    if(c == '^')    return 3;
    if(c == '+' || c == '-')    return 1;
    if(c == '*' || c == '/')    return 2;
    else return 0; // muc do uu tien cua dau (
}
void solve(string s){
    stack<char> st;
    string ans = "";
    for(char x:s){
        if(isalpha(x)){
            ans += x;
        }
        else if(x == ')'){
            while(!st.empty() && st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else if(x == '(')    st.push(x);
        else{
            while(!st.empty() && uutien(st.top()) >= uutien(x)){
                ans += st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    cout << ans;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        solve(s);
        cout << endl;
    }
    return 0;
}