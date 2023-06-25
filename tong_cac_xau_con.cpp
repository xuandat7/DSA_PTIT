#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    while (t--)
    {
        // ll n; cin >> n;
        string s; cin >> s;

        int n = s.size();
        // dp[i] la tong cac xau con co do dai la i
        ll dp[n+5];
        
        memset(dp, 0, sizeof(dp));
        dp[0] = s[0] - '0';
        for(int i=1; i<n; i++){
            dp[i] = dp[i-1]*10 + (s[i]-'0')*(i+1);
        }
        ll ans = 0;
        for(int i=0; i<n; i++){
            ans += dp[i];
        }
        cout << ans << endl;
    }
    
}