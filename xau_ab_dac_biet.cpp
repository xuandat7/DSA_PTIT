#include<bits/stdc++.h>
using namespace std;
int n, k, a[30], ok = 0;
char b[30];
vector<vector<char>> v;
void in(){
    vector<char> v1;
    for(int i=1; i<=n; i++){
        v1.push_back(b[i]);
    }
    v.push_back(v1);
}
bool check(){
    int ans = 0, cnt = 0;
    for(int i=1; i<=n; i++){
        if(b[i] == 'A')
        {
            cnt++;
        }
        ans = max(ans, cnt);
        if(b[i]!='A')   cnt = 0;
    }
    return ans == k;

}
void khoitao(){
    for(int i=1; i<=n; i++){
        b[i] = 'A';
    }
}
void sinh(){
    int i = n;
    while(i>=0 && b[i]=='B'){
        b[i] = 'A';
        i--;
    }
    if(i==0)    ok = 1;
    else b[i] = 'B';
}
int main(){
    cin >> n >> k;
    khoitao();
    while(!ok){
        if(check()){
            in();
            
        }
        //in();
        sinh();
    }
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        for(int j = 0; j<v[i].size(); j++){
            cout << v[i][j];
        }
        cout << endl;
    }
}