#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<char> st;
        int cnt = 0;
        for (char c : s) {
            if (c == '[') {
                st.push(c);
            } else {
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                } else {
                    cnt++;
                    while (!st.empty() && st.top() != '[') {
                        st.pop();
                    }
                    st.pop();
                    st.push('[');
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
