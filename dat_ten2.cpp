#include<bits/stdc++.h>
using namespace std;
int n, k, ok = 0;
int a[30];


void init(){
    for(int i=1; i<=n; i++){
        a[i] = i;
    }
}
void in(){
    for(int i=1; i<=k; i++){
        
        cout << char (a[i] + 64);
    }
    cout << endl;
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
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        init();
        while(!ok){
            in();
            sinh();
        }
        ok = 0;
        cout << endl;
    }
}