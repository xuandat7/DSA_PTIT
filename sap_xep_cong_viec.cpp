#include<bits/stdc++.h>
using namespace std;
struct task{
    int start, finish;
};
bool cmp(task a, task b){
    return a.finish < b.finish;
}
// truc toa do, lua chon toi uu
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        task a[1005];
        for(int i=0; i<n; i++)  cin >> a[i].start;
        for(int i=0; i<n; i++)  cin >> a[i].finish;
        sort(a, a+n, cmp);
        int i = 0;
        int cnt = 1;
        for(int j=1; j<n; j++){
            if(a[j].start >= a[i].finish){
                i = j;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}