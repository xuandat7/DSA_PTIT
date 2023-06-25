#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int F[101][101] = {0};
        int n = s1.size(), m = s2.size();
        for(int i=1; i<=n; i++){
            F[i][0] = i;
        }
        for(int i=1; i<=m; i++) F[0][i] = i;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                int t;
                if(s1[i-1]==s2[j-1])    t=0;
                else t=1;
                F[i][j] = min(F[i-1][j-1]+t, min(F[i-1][j], F[i][j-1])+1);

            }
        }
       
        cout << F[n][m] << endl;
    }
    return 0;
}