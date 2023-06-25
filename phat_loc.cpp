#include<bits/stdc++.h>
using namespace std;
int ok = 0;
int a[30], n;
void khoitao(){
    for(int i=1; i<=n; i++){
        a[i] = 6;
    }
}
bool check(int a[], int n){
    if(n<6 || a[1] != 8 || a[n] != 6)   return false;
    
    for(int i=1; i<n; i++){
        if(a[i] == a[i+1] && a[i] == 8)  return false;
    }
    for(int i=1; i<n-2; i++){
        if(a[i] == a[i+1] && a[i+1] == a[i+2] && a[i] == 6 && a[i+3] == a[i]) return false;
    }
    return true;
}

void in(){
    for(int i=1; i<=n; i++) cout << a[i];
    cout << endl;
}
void sinh(){
    int i = n;
    while(i>0 && a[i] != 6){
        a[i] = 6;
        i--;
    }
    if(i==0)    ok = 1;
    else a[i] = 8;
}
int main(){
    cin >> n; 
    khoitao();
    while(!ok){
        
        if(check(a, n)){
            in();
        }
        
        sinh();
        
    }
}