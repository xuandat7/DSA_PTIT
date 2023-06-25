#include<bits/stdc++.h>
using namespace std;
#define ll long long
// tìm giá trị nhỏ hơn gần nhất của a[i] ở bên phải
// tìm giá trị nhỏ hơn gần nhất của a[i] ở bên trái
// diện tích là a[i] * (r[i] - l[i] - 1) sau đó cập nhật giá trị lớn nhất
int a[100005], l[100005], r[100005];
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        for(int i=0; i<n; i++)  cin >> a[i];
        stack<int> val, pos;
        for(int i=0; i<n; i++){
            while(!val.empty() && a[i] < val.top()){
                r[pos.top()] = i;
                val.pop(); pos.pop();
            }
            val.push(a[i]); pos.push(i);
        }
        while(!val.empty()){
            r[pos.top()] = n; // nếu k tìm thấy giá trị thì chứng tỏ hcn dó có diện tích trải dài cả mảng
            val.pop(); pos.pop();
        }
        for(int i=n-1; i>=0; i--){
            while(!val.empty() && a[i] < val.top()){
                l[pos.top()] = i;
                val.pop(); pos.pop();
            }
            val.push(a[i]); pos.push(i);
        }
        while(!val.empty()){
            l[pos.top()] = -1;
            val.pop(); pos.pop();
        }
        ll ans = 0;
        for(int i=0; i<n; i++){
            ans = max(ans, a[i]*1ll*(r[i]-l[i]-1));
        }
        cout << ans << endl;
    }
    return 0;
}