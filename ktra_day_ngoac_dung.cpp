#include <bits/stdc++.h>
using namespace std;
bool solve(string s){
    stack<char> st;
        
    for(int i=0; i<s.size(); i++){
        
        if(s[i] == '{' || s[i] == '(' || s[i] == '[')
            st.push(s[i]);
        else{
            if(st.empty())
            {
                return false;
            }  
            char in = st.top(), out = s[i];
            if(in == '(' && out == ')') st.pop();
            else if (in == '[' && out == ']')   st.pop();
            else if(in == '{' && out == '}')    st.pop();
            //return false;
        }
        
    }    
    return st.empty();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        string s;
        cin >> s;
        // stack<char> st;
        
        // for(int i=0; i<s.size(); i++){
            
        //     if(s[i] == '{' || s[i] == '(' || s[i] == '[')
        //         st.push(s[i]);
        //     else{
        //         if(st.empty())
        //         {
        //             cout << "NO\n";
        //             break;
        //         }  
        //         char in = st.top(), out = s[i];
        //         if(in == '(' && out == ')') st.pop();
        //         else if (in == '[' && out == ']')   st.pop();
        //         else if(in == '{' && out == '}')    st.pop();
        //     }
            
        // }
        // if(st.empty())  cout << "YES\n";
        // else cout << "NO\n";
        if(solve(s))    cout << "YES\n";
        else    cout << "NO\n";
        
        
    }
    return 0;
}