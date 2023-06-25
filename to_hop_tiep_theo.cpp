#include<bits/stdc++.h>
using namespace std;
int ok = 0; 
set<int> ms;
int n, k, a[30];
void khoitao(){
    for(int i=1; i<=n; i++){
        a[i] = i;
    }
}

void in(){
    for(int i=1; i<=k; i++){
        ms.insert(a[i]);
    }
    
}
void sinh(int a[], int n){
    int i = k;
    while(i>0 && a[i] == n-k+i){
        a[i] = i;
        i--;
    }
    if(i==0)    ok = 1;
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++){
            a[j] = a[j-1] +1;   
        }
    }
    in();
}
int main(){
    int t; cin >> t;
    while(t--){
        
        cin >> n >> k;
        for(int i=1; i<=k; i++){
            cin >> a[i];
            ms.insert(a[i]);
        }
        int cnt = ms.size();
        sinh(a, n);
        int ans = ms.size();
        ms.clear();
        if(ok)  cout << k << endl;
        else    cout << ans - cnt << endl;
        ok = 0;
    }
    return 0;
}