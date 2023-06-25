#include<bits/stdc++.h>
using namespace std;
int a[30], b[30], n, ok = 0;
int cnt = 1;
vector<vector<int>> v(n+362880);
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
    int i = n-1;
    while(i>0 && a[i] > a[i+1]){
        i--;
    }
    if(i==0)    ok = 1;
    else{
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        reverse(a+i+1, a+n+1);   
    }
    ++cnt;
    
}
int main(){
    int t; cin >> t;
    while(t--){
        
        cin >> n;
        khoitao();
        int ans = 1;
        for(int i=1; i<=n; i++) cin >> b[i];
        while(!ok){
             
            sinh();
            if(check(a,n,b)){
                ans = cnt;
                
            }
        }
        cnt = 1;
        cout << ans << endl;
        
        ok = 0;
        
        }
    return 0;
}