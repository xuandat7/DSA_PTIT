#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end()); // Sắp xếp dãy số
        int ans = 0;
        for (int i = 0; i < n-2; i++) { // Vòng lặp cho i
            int j = i+1, k = n-1; // Khởi tạo j, k
            while (j < k) { // Two Pointer
                if (a[i] + a[j] + a[k] < k) { // Nếu tổng nhỏ hơn K
                    ans += (k-j); // Tăng đáp án lên số lượng cặp (j,k) thỏa mãn
                    j++; // Tăng j lên
                } else { // Ngược lại
                    k--; // Giảm k xuống
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
