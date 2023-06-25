#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n+5];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    int max1 = a[0]*a[1];
    int max2 = max1*a[2];
    int max3 = a[n-1]*a[n-2];
    int max4 = max3 * a[0];
    cout << max(max(max1, max2), max(max3, max4));


}