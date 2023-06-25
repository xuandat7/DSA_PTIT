#include<bits/stdc++.h>
using namespace std;
int n, ok = 0;
char ch[30];

void khoitao(){
    for(int i = 0; i<n; i++)
    {
        ch[i] = 'A';
    }
}
void sinh(){
    int i = n - 1;
    while(i>=0 && ch[i] != 'A'){
        ch[i] = 'A';
        i--;
    }
    if(i==-1)    ok = 1;
    else ch[i] = 'B';
    
}
void in(){
    for(int i=0; i<n; i++)  cout << ch[i];
    cout << ' ';
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