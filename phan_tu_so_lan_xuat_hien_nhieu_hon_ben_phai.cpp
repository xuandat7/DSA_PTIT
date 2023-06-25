#include<bits/stdc++.h>
using namespace std;
int a[100005], b[100005];
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        map<int, int> fre;
        for(int i=0; i<n; i++){
            cin >> a[i];
            fre[a[i]]++;
        }
        stack<int> val, pos;
        for(int i=0; i<n; i++){
            while(!val.empty() && fre[a[i]] > fre[val.top()]){
                b[pos.top()] = i;
                val.pop(); pos.pop();
            }
            val.push(a[i]); pos.push(i);
        }
        while(!val.empty()){
            b[pos.top()] = -1;
            val.pop(); pos.pop();
        }
        for(int i=0; i<n; i++){
            if(b[i]!=-1){
                cout << a[b[i]] << " ";
            }
            else cout << -1 << " ";
        }
        cout << endl;
    }
    return 0;
}