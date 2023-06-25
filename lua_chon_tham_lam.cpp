#include <bits/stdc++.h>
using namespace std;
void SNN(int n, int s){
    int a[n + 5];
    for (int i = n; i >= 1; i--)
    {
        if (s > 9)
        {
            a[i] = 9;
            s -= 9;
        }
        else
        {
            if (i == 1)     a[i] = s;
            else    a[i] = s - 1;     
            s = 1;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << a[i];   
    cout << ' ';
}
void SLN(int n, int s){
    int a[n+5];
    for(int i=1; i<=n; i++){
        if(s>9){
            a[i] = 9;
            s-=9;
        }
        else{
            a[i] = s;
            s = 0;
        }
    }
    for(int i=1; i<=n; i++) cout << a[i];

}
int main()
{
    int s, n;
    cin >> n >> s;
    if (s > 9 * n || (s==0 && n > 1) )
        cout << -1 << ' ' << -1 << endl;  
    else
    {
        SNN(n,s); SLN(n, s); 
    }
}