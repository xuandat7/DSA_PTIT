#include<bits/stdc++.h>
using namespace std;
int a[30], b[30], n, k, ok = 0;
int cnt = 1;

bool check(int b[], int k, int c[]){
    for(int i=1; i<=k; i++){
        if(b[i]!=c[i])  return false;
    }
    return true;
}
void khoitao(){
    for(int i=1; i<=n; i++){
        a[i] = i;
    }
}
void sinh(){
    int i = k;
    while(i>0 && a[i] == n-k+i){
        a[i] = i;
        i--;
    }
    if(i==0)    ok = 1;
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++){
            a[j] = a[j-1] + 1;
        }   
    }
    ++cnt;
    
}
int main(){
    int t; cin >> t;
    while(t--){
        
        cin >> n >> k;
        khoitao();
        int ans = 1;
        for(int i=1; i<=k; i++) cin >> b[i];
        while(!ok){
             
            sinh();
            if(check(a,k,b)){
                ans = cnt;
                
            }
        }
        cnt = 1;
        cout << ans << endl;
        
        ok = 0;
        
        }
    return 0;
}