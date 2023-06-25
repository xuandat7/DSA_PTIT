#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<string> v;   
        queue<string> q;
        q.push("6"); q.push("8");
        while(1){
            string tmp = q.front();
            v.push_back(tmp);
            q.pop();
            if(tmp.size() < n){
                q.push(tmp + '6'); q.push(tmp + '8');
            }
            else break;

        }
        while (!q.empty())
        {
            v.push_back(q.front());
            q.pop();
        }
        
        cout << v.size() << endl;
        for(int i=0; i<v.size(); i++){
            cout << v[i] << ' '; 
        }
        

        cout << endl;
    }
    return 0;
}