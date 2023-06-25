#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        
        stack<string> st;
        for(char x:s){
        	if(x != '+' && x != '-' && x!='*' && x!='/'){
        		st.push(string(1, x));
			}
			else{
				string fi = st.top(); st.pop();
				string se = st.top(); st.pop();
				string tmp = "(" + se + string(1,x) + fi + ")";
				st.push(tmp);
			}
		}
        cout << st.top() << endl;
    }
    return 0;
}