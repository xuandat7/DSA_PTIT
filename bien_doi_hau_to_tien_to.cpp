#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        stack<string> st;
        for(char x:s){
            if(x == '+' || x=='*' || x=='-' || x=='/'){
                string fi = st.top(); st.pop();
                string se = st.top(); st.pop();
                string tmp = x + se + fi;
                st.push(tmp);
            }
            else    st.push(string(1, x));
        }
        cout << st.top() << endl;
    }
    return 0;
}