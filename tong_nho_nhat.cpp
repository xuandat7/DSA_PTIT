#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a, a+n);
        ll b = 0; ll c = 0;
        for(int i=0; i<n; i++){
            if(i%2==0){
                b = b*10+ a[i]; 
            }
            else c = c*10 + a[i];
        }
        cout << b + c << endl;


    }
}