#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    while(t--){
        ll p,q; cin >> p >> q;
        ll tu = p, mau =q;
        while(mau%tu!=0){
            ll tmp = mau/tu + 1;
            cout << "1/" << tmp << " + ";
            tu = tu*tmp - mau;
            mau = mau*tmp;
        } 
        cout << "1/" << mau/tu << endl;
        cout << endl;
    }
    return 0;
}