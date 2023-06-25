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
        int cnt = 0;
        for(int i=0; i<n; i++)  cin >> a[i];
        string s = "";
        set<char> ms;
        for(int i=0; i<n; i++){
            s+=to_string(a[i]);
        }
        
        for(int i=0; i<s.size(); i++){
            ms.insert(s[i]);
        }
        for(auto it:ms) cout << it << ' ';
        cout << endl;
    }
    return 0;
}