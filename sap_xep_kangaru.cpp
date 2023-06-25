#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        int cnt = 1, max_h = a[0];
        for (int i = 1; i < n; i++) {
            if (max_h >= 2 * a[i]) {
                max_h = a[i];
            } else {
                cnt++;
                max_h = a[i];
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
