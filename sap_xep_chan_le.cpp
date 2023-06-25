#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n], le[n], chan[n], idx_l = 0, idx_c = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        
        
    }
    for(int i=0; i<n; i+=2){
        le[idx_l++] = a[i];
    }
    for(int i=1; i<n; i+=2){
        chan[idx_c++] = a[i]; 
    }
    sort(le, le+idx_l);
    sort(chan, chan+idx_c, greater<int>());
    if(n%2==0){
        for(int i=0; i<n/2; i++){
            cout << le[i] << ' ' << chan[i] << ' ';
        }
    }
    else{
        for(int i=0; i<n/2; i++){
            cout << le[i] << ' ' << chan[i] << ' ';
        }
        cout << le[idx_l-1];
    }
}