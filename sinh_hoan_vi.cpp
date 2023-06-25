#include<bits/stdc++.h>
using namespace std;
int ok = 0; 
int n, a[30];
void khoitao(){
    for(int i=1; i<=n; i++){
        a[i] = i;
    }
}

void in(){
    for(int i=1; i<=n; i++){
        cout << a[i];
    }
    cout << ' ';
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
        reverse(a + i + 1, a+n+1);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        khoitao();
        
        while(!ok){
            
            in();
            sinh();
            
        }
        ok = 0;
        cout << endl;
    }
}