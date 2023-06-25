#include<bits/stdc++.h>
using namespace std;
void previous(string s){
    int i=s.size()-1;
    while(i>=0 && s[i]!='1'){
        s[i] = '1';
        i--;
        
    }
    if(i!=-1) s[i] = '0';
    cout << s;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        previous(s);
        cout << endl;
    }
}