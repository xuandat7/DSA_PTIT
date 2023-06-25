#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        stack<char> st;
        int ans = 0;
        if(s[0] == ')'){
            ans++;
            s[0] = '(';
        }
        if(s[s.size()-1] == '('){
            s[s.size()-1] = ')';
            ans++;
        }
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else{
                    st.push('(');
                    ans++;
                }
            }
        }   
        cout << ans + st.size() / 2;
        cout << endl;
    }
    return 0;
}