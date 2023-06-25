#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
vector<int> ke[1005];
int x[1005];
int n;
void Hmt(int k){
    for(int v:ke[x[k-1]]){
        if(k==n+1 && v == x[1]){
            for(int j=1; j<=n; j++) cout << x[j] << " ";
            cout << x[1] << endl; 
        }
        else if(!visited[v]){
            x[k] = v;
            visited[v] = true;
            Hmt(k+1);
            visited[v] = false;
        }
    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {

        cin >> n;
        int a[n+5][n+5];
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin >> a[i][j];
                if(a[i][j]) ke[i].push_back(j);
            }

        }
        x[1] = 1;
        visited[1] = true;
        Hmt(2);
        cout << endl;
    }
    return 0;
}