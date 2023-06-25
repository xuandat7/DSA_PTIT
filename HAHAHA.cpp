#include<bits/stdc++.h>
using namespace std;
int n, ok =0;
char a[30];
// A = 0, H = 1;
void init(){
    for(int i=0; i<n; i++){
        a[i] = 'A';
    }
}
bool check(){
    if(a[0]!='H' || a[n-1] != 'A')  return false;
    for(int i=1; i<n; i++){
        if(a[i] == 'H' && a[i-1] == 'H')    return false;
    }
    return true;
}
void in(){
    for(int i=0; i<n; i++){
        cout << a[i];
    }
    cout << endl;
}
void sinh(){
    int i = n-1;
    while(i>=0 && a[i]=='H'){
        a[i] = 'A';
        i--;
    }
    if(i==-1)    ok = 1;
    else{
        a[i] = 'H';
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        init();
        while(!ok){
            if(check()) in();
            //in();
            sinh();
        }
        ok = 0;
        //cout << endl;
    }
}