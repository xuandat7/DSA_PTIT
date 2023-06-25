#include <iostream>
#include <deque>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int A[n-k+6];
        deque<int> dq;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            // Xóa các phần tử không thuộc dãy con hiện tại
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Xóa các phần tử bé hơn x
            while (!dq.empty() && A[dq.back()] < x) {
                dq.pop_back();
            }

            // Thêm x vào cuối deque
            dq.push_back(i);

            // In ra phần tử lớn nhất của dãy con hiện tại
            if (i >= k - 1) {
                cout << A[dq.front()] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
