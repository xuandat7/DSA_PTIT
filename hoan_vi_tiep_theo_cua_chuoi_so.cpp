#include<bits/stdc++.h>
using namespace std;
int n, a[101], b[101], ok = 0;
string s;
// hoan vi tiep theo cua chuoi so
void sinh(){
    int i = n-2;
    while(i>=0 && s[i] >= s[i+1]){
        --i;
    }
    if(i==-1){
        cout << "BIGGEST\n";
    }
    else{
        int j = n-1;
        while(s[j]<=s[i])    j--;
        swap(s[i], s[j]);
        reverse(s.begin()+i+1, s.end());
        cout << s << endl;
    }
}

int main(){
    int t; cin >> t;
    for(int k=1; k<=t; k++){
        int q; cin >> q;
        cin >> s;
        n = s.size();
        cout << k << ' ';
        sinh();
    }
}