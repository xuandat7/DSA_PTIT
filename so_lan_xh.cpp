#include<bits/stdc++.h>
using namespace std;
// dung hashset
// lap tu phai qua trai, lan luot check xem phan tu trong mang co trong hashset ko
// neu co thi cap nhat idx = i; neu chua xh thi insert phan tu do vao hashset
int main(){
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int a[n];
        int cnt = 0;
        for(int i=0; i<n; i++)  cin >> a[i];
        set<int> ms;
        int ans = -1;
        for(int i=n-1; i>=0; i--){
            if(a[i]==x){
                cnt++;
            
            }
        }
        if(!cnt)   cout << -1 << endl;
        else cout << cnt << endl;
    }
    return 0;
}