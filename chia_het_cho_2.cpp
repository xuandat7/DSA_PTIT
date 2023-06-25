#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int nt[1000005];
void sieve(){
    for(int i=0; i<=1000000; i++){
        nt[i] = 1;
    }
    nt[0] = nt[1] = 0;
    for(int i=2; i<=1000; i++){
        for(int j=i*i; j<=1000000; j+=i){
            nt[j] = 0;
        }
    }
}
int main()
{
    sieve();
    int t; cin >> t;
    
    while(t--){
        int ok = 0;
        
        int n; cin >> n;
        
        for(int i=2; i<=n/2; i++){
            if(nt[i] && nt[n-i]){
                ok = 1;
                cout << i << ' ' << n-i;
                break;
            }
        }
        if(!ok)  cout << -1;
        
        cout << endl;
        
    }
}
