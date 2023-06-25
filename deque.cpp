#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    deque<int> dq;
    while (t--)
    {
        string s; cin >> s;
        
        if(s == "PUSHBACK"){
            cin.ignore();
            int m; cin >> m;
            dq.push_back(m);
        }
        if(s == "PUSHFRONT"){
            cin.ignore();
            int n; cin >> n;
            dq.push_front(n);
        }        
        if(s == "POPBACK"){
            if(!dq.empty()){
                dq.pop_back();
            }
            else cout << "NONE\n";
        }
        if(s == "POPFRONT"){
            if(!dq.empty()){
                dq.pop_front();
            }
            else cout << "NONE\n";
        }        
        if(s == "PRINTBACK"){
            if(!dq.empty()){
                cout << dq.back() << endl;
            }
            else cout << "NONE\n";
        }
        if(s == "PRINTFRONT"){
            if(!dq.empty()){
                cout << dq.front() << endl;
            }
            else cout << "NONE\n";
        }
        cout << endl;
    }
    
    return 0;
}