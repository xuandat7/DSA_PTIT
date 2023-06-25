#include<bits/stdc++.h>
using namespace std;
int mark[1000005] = {0};
int main(){
    int t; cin >> t;
    
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            mark[a[i]]++;
        }    
        int cnt = 0;
        sort(a, a+n);
        int l = a[0], r = a[n-1];
        for(int i=l; i<=r; i++){
            if(mark[i]==0){
                cnt++;
            }
            
        }
        cout << cnt << endl;
        for(int i=l; i<=r; i++){
            mark[i] = 0;
        }
    }
}
