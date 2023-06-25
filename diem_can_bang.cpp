#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }
        int idx = -1;
        int sum_l = 0;
        for(int i=0; i<n; i++){
            
            if(sum_l << 1 == sum-a[i]){
                idx = i+1;
                break;
            }
            sum_l += a[i];
        }
        cout << idx << endl;

    }
}