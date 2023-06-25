#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int ok = 0;
        // kiem tra tong tach dc may lan so 7 (vi can tim so nho nhat)
        // b = n/7 la so lan tach 7 ra tu tong
        for(int b = n/7; b>=0; b--){
            int tmp = n - 7*b;
            if(tmp % 4 == 0){
                ok = 1;
                for(int i=0; i< tmp/4; i++){
                    cout << "4";
                }
                for(int i=0; i<b; i++){
                    cout << "7";
                }
                break;
            }
        }
        if(!ok) cout << "-1";
        cout << endl;
    }
    
    return 0;
}