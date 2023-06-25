#include<bits/stdc++.h>
using namespace std;
int tinh(int a, int b, char c){
    if(c=='*')  return a*b;
    if(c=='+')  return a+b;
    if(c=='-')  return a-b;
    if(c=='/')  return a/b;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        stack<int> st;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                int n = s[i]-'0';
                st.push(n);
            }
            else{
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                int m = tinh(b,a,s[i]);
                st.push(m);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}