#include<bits/stdc++.h>
using namespace std;
int maxTongLT(int a[], int l, int m, int r){
    int sum = 0, left_sum = -INT_MAX, right_sum = -INT_MAX;
    for(int i = m; i>=l; i--){
        sum+=a[i];
        left_sum = max(sum, left_sum);
    }
    sum = 0;
    for(int i = m+1; i<=r; i++){
        sum+=a[i];
        right_sum = max(sum, right_sum);
    }
    return left_sum + right_sum;

}
int maxSubarr(int a[], int l, int r){
    if(l==r)    return a[l];
    int m = (l+r)/2;
    return max(maxSubarr(a,l,m),max(maxSubarr(a,m+1, r), maxTongLT(a,l,m,r)));
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        cout << maxSubarr(a,0,n-1);
        cout << endl;
    }

}