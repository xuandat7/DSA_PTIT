#include <bits/stdc++.h>

using namespace std;

struct Cap
{
    int dau, cuoi;
};

bool compare(Cap x, Cap y)
{
    return (x.cuoi < y.cuoi);
}

int main()
{
    int t;
    cin >> t;
    Cap A[101];
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i].dau >> A[i].cuoi;
        }
        sort(A, A + n, compare);
        int F[1001];
        int kq = 0;
        for (int i = 0; i < n; i++)
        {
            F[i] = 1;
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (A[j].cuoi < A[i].dau)
                {
                    F[i] = max(F[i], F[j] + 1);
                }
            }
            kq = max(kq, F[i]);
        }
        cout << kq << endl;
    }
}