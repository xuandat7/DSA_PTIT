#include<bits/stdc++.h>
using namespace std;
int a[100005], b[100005], c[100005];
// mảng a lưu giá trị gốc
// mảng b lưu giá trị lớn hơn đầu tiên của phần tử
// mảng c lưu giá trị đầu tiên nhỏ hơn phần tử đầu tiên lớn hơn của phần tử
// stack val lưu và cập nhật giá trị 
// stack pos lưu và cập nhật chỉ số
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        
        stack<int> val, pos;
        for(int i=0; i<n; i++){
            cin >> a[i];         
        }
        for(int i=0; i<n; i++){
            // khi gặp 1 số lớn hơn val.top -> xoá toàn bộ số & chỉ số mà số < a[i] trong stack
            // đưa toàn bộ pos vào trong b, cập nhật số lớn hơn và vị trí của nó trong val
            while(!val.empty() && a[i] > val.top()){
                b[pos.top()] = i;
                val.pop(); pos.pop();
            }
            val.push(a[i]); pos.push(i);
        }    
        while(!val.empty()){
            b[pos.top()] = -1;
            val.pop(); pos.pop();
        }
        for(int i=0; i<n; i++){
            while(!val.empty() && a[i] < val.top()){
                c[pos.top()] = i;
                val.pop(); pos.pop();
            }
            val.push(a[i]); pos.push(i);
        }
        while(!val.empty()){
            c[pos.top()] = -1;
            val.pop(); pos.pop();
        }
        for(int i=0; i<n; i++){
            if(b[i] != -1 && c[b[i]] != -1) cout << a[c[b[i]]] << " ";
            else cout << -1 << ' ';
        }
        cout << endl;
    }
    
    return 0;
}