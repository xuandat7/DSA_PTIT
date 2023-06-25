#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int kq = 0;
        float a[n], b[n];
        int F[n+1];
        for(int i=0; i<n; i++)  cin >> a[i] >> b[i];
        for(int i=0; i<n; i++){
            F[i] = 1;
            for(int j=i-1; j>=0; j--){
                if(a[i] > a[j] && b[i] > b[j]){
                    F[i] = max(F[i], F[j]+1);
                }
            }
            kq = max(kq, F[i]);
        }
        cout << kq << endl;
    }
    

    
}