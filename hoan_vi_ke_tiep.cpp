#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[10005];
void next(){
    int i = n-1;
    // duyet tu cuoi ve, neu thay a[i] < a[i+1] thi cap nhat i
    while(i>=1 && a[i] > a[i+1]){
        --i;
    }
    // neu la cau hinh cuoi cung thi in ra cau hinh dau tien
    if(i==0){
        for(int i=1; i<=n; i++){
            cout << i << ' ';
        }
    }
    else{
        // tim phan tu nho nhat trong khoang i+1 den n
        int j = n;
        while(a[i] > a[j]) j--;
        // cap nhat a[i] = ptu nho nhat
        swap(a[i], a[j]);
        // sx tang dan tu i+1 den n
        reverse(a + i + 1, a+n+1);
        for(int i=1; i<=n; i++){
            cout << a[i] << ' ';
        }
    }
}   
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;    
        for(int i=1; i<=n; i++) cin >> a[i];
        next();
        cout << endl;
    }
}