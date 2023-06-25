#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int m = 1e9+7;
int len = 1e6+5;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[len];
        ll sum = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i=0; i<n; i++){
            sum += a[i]*i;
        }
        cout << sum%m << endl;
        
        
    }
}