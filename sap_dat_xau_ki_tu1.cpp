#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int mark[261] = {0};
        for(char x:s){
            mark[x]++;
        }
        int Max_fre = *max_element(mark, mark+261);
        // cout << Max_fre << endl;
        if(s.size() - Max_fre + 1 >= Max_fre)   cout << 1;
        else cout << -1;
        cout << endl;
    }
}