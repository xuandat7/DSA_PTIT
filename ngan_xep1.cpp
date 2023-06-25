#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    int q; cin >> q;
    string s;
    while(q--){
        int n;
        cin >> s;
        if(s=="PUSH"){
            
            cin >> n;
            cin.ignore();
            
            st.push(n);
        }
        else if(s=="POP"){
            if(!st.empty()){
                st.pop();
            }
            
        }
        else if(s=="PRINT"){
            if(st.empty())  cout << "NONE\n";
            else{
                vector<int> v;
                while(!st.empty()){
                    int top = st.top();
                    st.pop();
                    v.push_back(top);
                }
                cout << v[0];
                for(int i=v.size()-1; i>=0; i--){
                    st.push(v[i]);
                    
                }
            }
        }
        cout << endl;
    }
    return 0;
}