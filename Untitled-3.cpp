#include <iostream>

using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void in(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void noibot(int a[], int n)
{
    int i, j, ok, t, A[500][500];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ok = 1;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                ok = 0;
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
        for (int j = 0; j < n; j++)
            A[i][j] = a[j];
        
        if (ok)
            break;
        cnt++;
    }

    for (int i = cnt-1; i >= 0; i--)
    {
        cout << " Buoc " << i + 1 << ":";
        for (int j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}

main()
{
    int a[500], n;
    cin >> n;
    nhap(a, n);
    noibot(a, n);
    //in(a, n);
}