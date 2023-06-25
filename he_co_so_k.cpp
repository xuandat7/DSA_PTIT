#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string a, b;
        string ans = "";
        cin >> k >> a >> b;
        while (a.size() < b.size())
            a = "0" + a;
        while (b.size() < a.size())
            b = "0" + b;
        int len = a.size();
        int nho = 0;
        for (int i = len - 1; i >= 0; i--)
        {
            int so = int(a[i] - '0') + int(b[i] - '0') + nho;
            ans = char(so % k + '0') + ans;
            nho = so / k;
        }
        if (nho > 0)
            ans = char(nho + '0') + ans;
        cout << ans << endl;
        
    }
    return 0;
}