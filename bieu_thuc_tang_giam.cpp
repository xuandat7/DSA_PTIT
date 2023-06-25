#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        stack<int> st;
        s = ' ' + s; // để chỉ số bắt đầu từ 1
        for(int i=1; i<= s.size(); i++){
            if(s[i] == 'D') st.push(i);
            else{
                cout << i;
                while(!st.empty()){
                    cout << st.top(); 
                    st.pop();
                }
            }
        }
        cout << endl;
    }
    return 0;
}