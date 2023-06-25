#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        unordered_map<int, int> freq; // khởi tạo map
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++; // tăng số lần xuất hiện của phần tử x lên 1
        }
        int cnt = 0; // khởi tạo biến đếm
        for (int i = 0; i < n; i++) {
            int x = k - a[i]; // tính giá trị còn lại của tổng
            cnt += freq[x]; // cộng số lần xuất hiện của giá trị còn lại vào biến đếm
            freq[a[i]]--; // giảm số lần xuất hiện của phần tử đang xét
        }
        cout << cnt << endl;
    }
    return 0;
}
