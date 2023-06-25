#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a, a+n);
        ll ans = 0;
        for(int i=n-1; i>=0; i--){
            int tmp = upper_bound(a, a+n, a[i]-k)-a;
            if(a[tmp] + k == a[i])  tmp++;
            tmp = i - tmp;
            if(tmp) ans += tmp;
        }
        cout << ans << endl;
    }
}