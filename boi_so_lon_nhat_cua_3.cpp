#include<bits/stdc++.h>
using namespace std;
void solve(int n, int a[]){
    int ok = 0;
    priority_queue<int> pq;
    for(int i=0; i<n; i++)  pq.push(a[i]);
    int sum = 0;
    vector<int> ans;
    while(!pq.empty()){
        if(sum % 3 == 0){
            ans.push_back(pq.top());
            ok = 1;
            
        }
        sum += pq.top(); pq.pop();

    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n+5]; 
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        cout << endl;
    }
    return 0;
}