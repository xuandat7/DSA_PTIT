#include <bits/stdc++.h>
using namespace std;
int n, k, a[30], b[30];
bool check()
{
    for (int i = 1; i < k; i++)
    {
        if (b[a[i]] > b[a[i + 1]])
            return false;
    }
    return true;
}
void in(){
    for(int i=1; i<=k; i++){
        cout << b[a[i]] << ' ';
    }
    cout << endl;
}
int cnt = 0;
void quaylui(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            // in();
            if (check())    cnt++;
        }
        else
            quaylui(i + 1);
    }
}
int main()
{
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> b[i];
    quaylui(1);
    cout << cnt;
}