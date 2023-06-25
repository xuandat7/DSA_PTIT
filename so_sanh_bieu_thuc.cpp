#include<bits/stdc++.h>
using namespace std;
string biendoi(string s){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            // dấu ưu tiên 
            if(s[i-1] == '-' || s[i-1] == '+'){
                st.push(s[i-1]);
            }
        }
        if(!st.empty() && st.top() == '-'){
            
            if(s[i] == '+') s[i] = '-';
            else if(s[i] == '-') s[i] = '+';
            // if(st.top() == '+') continue;
        }
        if(s[i] == ')' && !st.empty()){
            st.pop();
        }
    }
    string res = "";
    for(int i=0; i<s.size(); i++){
        if(s[i] != '(' && s[i] != ')'){
            res += s[i];
        }
    }
    return res;

}
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s1, s2; cin >> s1 >> s2;
        if(biendoi(s1) == biendoi(s2))  cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}