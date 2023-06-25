#include<bits/stdc++.h>
using namespace std;
int n, k, ok = 0;
int a[30];
string s;
vector<string> v;
void init(){
    for(int i=1; i<=n; i++){
        a[i] = i;
    }
}
void in(){
    for(int i=1; i<=k; i++){
        cout << v[a[i]-1] << ' ';
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
            a[j] = a[j-1] +1;
        }
    }
}

int main(){
    cin >> n >> k;
    cin.ignore();
    set<string> ms;
    getline(cin, s);
    stringstream ss(s);
    while(ss >> s){
        ms.insert(s);
    }
    for(auto it:ms)      v.push_back(it);
    //for(int i=0; i<v.size(); i++)   cout << v[i] << ' ';
    n = ms.size();
    init();
    while(!ok){
        in();
        sinh();
    }

}