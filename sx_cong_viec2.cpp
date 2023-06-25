#include<bits/stdc++.h>
using namespace std;
struct Job
{
    int id, dl, profit;
};
bool cmp(Job a, Job b){
    return a.profit > b.profit;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        Job a[n+5];
        for(int i=0; i<n; i++){
            cin >> a[i].id >> a[i].dl >> a[i].profit;
        }
        int cnt = 0, sum = 0;
        // sap xep cong viec co loi nhuan lon hon lam truoc
        sort(a, a+n, cmp);
        int mark[1005] = {0};
        for(int i=0; i<n; i++){
            while(mark[a[i].dl] && a[i].dl > 0) a[i].dl -=1;
            if(!mark[a[i].dl] && a[i].dl > 0){
                mark[a[i].dl] = 1;
                cnt++;
                sum += a[i].profit;
            }
        }
        cout << cnt << ' ' << sum << endl;
    }
    return 0;
}