#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int len = 0;
        stack<char> st;
        string s; cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == ')' && !st.empty()){
                st.pop();
                len+=2;

            }
        }
        cout << len << endl;
    }
    return 0;
}