#include<bits/stdc++.h>
using namespace std;
int ok = 0;
int n,a[30];
int mark[30] = {0};
void in(){
    for(int i=1; i<=n; i++){
        cout << a[i];
    }
    cout << ' ';
}
void khoitao(){
    for(int i=1; i<=n; i++){
        mark[i] = 0;
    }
}
void quaylui(int i){
    
    for(int j=n; j>=1; j--){
        if(mark[j] == 0){
            a[i] = j;
            mark[j] = 1;
        
            if(i==n)    in();
            else quaylui(i+1);
            mark[j] = 0;
        }
    }

}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        khoitao();
        quaylui(1);
        cout << endl;
    }
}