#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int s, t; cin >> s >> t;
        queue<int> q;
        
        int a[20001] = {0};
        q.push(s);
        while(a[t] == 0){
            int x = q.front(); q.pop();
            if(x - 1 > 0 && a[x-1] == 0){
                a[x-1] = a[x] + 1;
                q.push(x-1);
            }
            if(x*2 < 20000 && a[x*2] == 0){
                a[x*2] = a[x] + 1;
                q.push(x*2);
            }
        }
        cout << a[t] << endl;

    }
    return 0;
}