#include<bits/stdc++.h>
using namespace std;
// dung hashset
// lap tu phai qua trai, lan luot check xem phan tu trong mang co trong hashset ko
// neu co thi cap nhat idx = i; neu chua xh thi insert phan tu do vao hashset
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        set<int> ms;
        int min = -1;
        for(int i=n-1; i>=0; i--){
            if(ms.find(a[i])!=ms.end()){
                min = i;
            }
            else ms.insert(a[i]);
        }
        if(min == -1)   cout << "NO\n";
        else cout << a[min] << endl;
    }
}