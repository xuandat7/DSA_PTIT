#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        int l = 0, r = n-1;
        sort(a, a+n, greater<int>());
        while(l<r){
            cout << a[l] << ' ' << a[r] << ' ';
            l++;
            r--;
        }
        if(n%2==1)  cout << a[n/2];
        cout << endl;
    }
}