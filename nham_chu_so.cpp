#include<bits/stdc++.h>
using namespace std;
int m[1000005], n[1000005];
int idx_a = 0;
int idx_b = 0;
int a, b;
void tach(){
    while(a){
        m[idx_a++] = a%10;
        a/=10; 
    }
    
    while(b){
        n[idx_b++] = b%10;
        b/=10;
    }   
}
int tinh(int a[], int n){
    int sum = 0;
    for(int i=n-1; i>=0; i--){
        sum = sum*10 + a[i];
    }
    return sum;
}
void doi1(int a[], int n){
    for(int i=0; i<n; i++){
        if(a[i] == 5)   a[i] =6;
    }
}
void doi2(int a[], int n){
    for(int i=0; i<n; i++){
        if(a[i] == 6)   a[i] =5;
    }
}
int main(){
    cin >> a >> b;
    tach();
    doi2(m, idx_a); doi2(n, idx_b);
    cout << tinh(m, idx_a) + tinh(n, idx_b) << ' ';
    doi1(m, idx_a); doi1(n, idx_b);
    cout << tinh(m, idx_a) + tinh(n, idx_b) << ' ';
}