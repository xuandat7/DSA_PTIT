#include <bits/stdc++.h>
using namespace std;
void ct()
{
    string s;
    cin >> s;
    stack<int> cs;
    stack<string> st;
    int i = 0, n = s.size();
    while (i < n)
    {
        if (isdigit(s[i]))
        {
            int j = i + 1;
            while (j < n && isdigit(s[j]))
                j++;
            string cmp = s.substr(i, j - i);
            int k = stoi(cmp);
            // cout<<k<<endl;
            cs.push(k);
            i = j;
        }
        else if (s[i] != ']')
        {
            st.push(string(1, s[i]));
            if (s[i] == '[' && (i == 0 || !isdigit(s[i - 1])))
                cs.push(1);
            i++;
        }
        else
        {
            string cmp = "";
            while (st.top() != "[")
            {
                cmp = st.top() + cmp;
                st.pop();
            }
            st.pop();
            int k = cs.top();
            cs.pop();
            string adu;
            if (!st.empty() && st.top() != "[")
            {
                adu = st.top();
                st.pop();
            }
            else
                adu = "";
            for (int t = 0; t < k; t++)
                adu += cmp;
            st.push(adu);
            i++;
        }
    }
    cout << st.top() << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ct();
    }
    return 0;
}