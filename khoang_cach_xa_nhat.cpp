#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n+5], pos[n+5], mn = INT_MAX, mx = INT_MIN;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[i] = INT_MAX; // ban đầu đặt pos[i] bằng giá trị lớn nhất để dễ xử lí
        }

        for (int i = 1; i <= n; i++) {
            pos[lower_bound(pos+1, pos+n+1, a[i]) - pos] = a[i];
            int j = upper_bound(pos+1, pos+n+1, a[i]) - pos;
            if (j != n+1) mx = max(mx, j-i);
        }

        for (int i = n; i >= 1; i--) {
            pos[lower_bound(pos+1, pos+n+1, a[i]) - pos] = a[i];
            int j = upper_bound(pos+1, pos+n+1, a[i]) - pos;
            if (j != n+1) mn = min(mn, j-i);
        }

        if (mn == INT_MAX || mx == INT_MIN) cout << "-1\n";
        else cout << mx << "\n";
    }
    return 0;
}
