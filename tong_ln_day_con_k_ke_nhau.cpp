#include<bits/stdc++.h>
using namespace std;
int a[1000005], F[1000005];
int main(){
    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        for(int i=1; i<=n; i++)  cin >> a[i];
        int prev1 = 0, prev2 = 0;
        for(int i=1; i<=n; i++){
            int tmp = max(prev1, prev2 + a[i]);
            prev2 = prev1;
            prev1 = tmp;
        }
        cout << prev1 << endl;
    }
    return 0;
}