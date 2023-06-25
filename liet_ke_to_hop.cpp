#include<bits/stdc++.h>
using namespace std;
int ok = 0, n, k, a[1005];
vector<int> b;
void init(){
    for(int i=1; i<=n; i++){
        a[i] = i;
    }
}
void in(){
    for(int i=1; i<=k; i++){
        cout << b[a[i]-1] << ' ';
    }
    cout << endl;

}
void sinh(){
    int i = k;
    while(i>0 && a[i] == n-k+i){
        a[i] = i;
        i--;
    }
    if(i==0)    ok = 1;
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++){
            a[j] = a[j-1] + 1;
        }
    }
}
int main(){
    cin >> n >> k;
    int a[n];
    set<int> ms;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        ms.insert(a[i]);
    }
    for(auto i:ms){
        b.push_back(i);
    }
    n = ms.size();
    init();
    while(!ok){
        in();
        sinh();

    }

}