#include<bits/stdc++.h>
using namespace std;
int n, k, a[30], b[10001], ok =0;

int cnt = 0;
bool check(int a[], int m){
    int sum = 0;
    for(int i=1; i<=m; i++){
        if(a[i]){
            sum += b[i];
        }
    }
    return sum == k;
}
void in(){
    for(int i=1; i<=n; i++){
        if(a[i]) cout << b[i] << ' ';
    }
    cout << endl;
}

void sinh(){
    int i = n;
    while(i>0 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i==0)    ok = 1;
    else{
        a[i] = 1;
    }

}
void in2(){
    for(int i=1; i<=n; i++){
        cout << a[i];
    }
    cout << ' ';
}
int main(){
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        cin >> b[i];
    }
    while(!ok){
        if(check(a,n)){
            cnt++;
            in();
        }
        //in();
        sinh();
    }
    cout << cnt;
}