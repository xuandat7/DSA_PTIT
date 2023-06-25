#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll tron(ll a[], int l, int m, int r){
    int n1 = m-l+1, n2 = r-m;
    ll L[n1], R[n2];
    for(int i=0; i<n1; i++) L[i] = a[l+i];
    for(int i=0; i<n2; i++) R[i] = a[m+i+1];
    ll ans = 0;
    int i = 0, j = 0, k = l;
    while(i<n1 && j<n2){
        if(L[i] <= R[j])    a[k++] = L[i++];
        else{
            ans += n1-i;
            a[k++] = R[j++];
        }
    }
    while(i<n1) a[k++] = L[i++];
    while(j<n2) a[k++] = R[j++];
    return ans;
}
ll tinh(ll a[], int l, int r){
    ll ans = 0;
    if(l<r){
        int m = (l+r)/2;
        ans = ans + tinh(a,l,m);
        ans = ans + tinh(a, m+1, r);
        ans = ans + tron(a,l,m,r);
    }
    return ans;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        cout << tinh(a,0,n-1);
        cout << endl;
    }
}