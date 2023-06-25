#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int s,d; cin >> s >> d;
        // kiem tra dieu kien
        if(s > 9*d) cout << -1 << endl;
        else{
            int a[d+5];
            for(int i=d; i>=1; i--){
                if(s > 9){
                    // gan vi tri cuoi cung = 9
                    a[i] = 9;
                    s-=9;
                }
                else{
                    // neu chay den vi tri dau tien cua so
                    if (i==1)   a[i] = s;
                    // neu chua phai hang dau tien
                    else a[i] = s-1;    // gan vi tri = s-1, de cho vi tri cuoi cung luon la nho nhat
                    s = 1;
                }
            }
            for(int i=1; i<=d; i++) cout << a[i];
            cout << endl;
        }
        
    }
    
}