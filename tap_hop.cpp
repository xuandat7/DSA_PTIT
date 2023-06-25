#include<bits/stdc++.h>
using namespace std;
int n, k, s, a[30], ok = 0, cnt = 0;
void in(){
    for(int i=1; i<=k; i++) cout << a[i] << ' ';
    cout << endl;
}
bool check(){
    int sum = 0;
    for(int i=1; i<=k; i++){
        sum+=a[i];
    }   
    return sum == s;
}
void quaylui(int i){
    for(int j=a[i-1]+1; j<=n-k+i; j++){
        a[i]=j;
        if(i==k){
            if(check()) cnt++;
        }
        else quaylui(i+1);
    }
}

int main(){
    int t = 101;
    while(t--){
        
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0){
            
            return 0;
        }
        quaylui(1);
        cout << cnt << endl;
        cnt = 0;
        
    }
}