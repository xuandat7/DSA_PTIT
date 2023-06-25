#include<bits/stdc++.h>
using namespace std;
int a[100006];
int n;
int ok =1;
bool check(int a[], int n){
    for(int i=1; i<=n; i++){
        if(a[i] != a[n+1-i])    return false;
    }
    return true;
}
void in(){
    for(int i=1; i<=n; i++){
        cout << a[i] << " ";
        
    }
    cout << endl;
}
void Sinh(){
    int i = n;
    while(a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i==0)    ok = 0;
    else a[i] = 1;
}
int main(){
    cin >> n;
    
    while(ok){
        
        
        if(check(a,n)) in();
        Sinh();
    }
    return 0;
}