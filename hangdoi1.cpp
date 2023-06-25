#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        queue<int> q;
        int n; cin >> n;
        while(n--){
            
            int x; cin >> x;
            int m; 
            if(x==1)    cout << q.size() << endl;
            if(x==2){
                if(q.empty())   cout << "YES\n";
                else cout << "NO\n";
            }
            if(x==3){
                cin >> m;
                q.push(m);
            }
            if(x==4){
                if(!q.empty())  q.pop();
            }
            if(x==5){
                if(!q.empty())  cout << q.front() << endl;
                else cout << -1 << endl;
            }
            if(x==6){
                if(!q.empty())  cout << q.back() << endl;
                else cout << -1 << endl;
            }
        }
        // cout << endl;
    }
    return 0;
}