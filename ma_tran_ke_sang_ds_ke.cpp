#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
int a[1005][1005];
int main(){
    int n; cin >> n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    int idx = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(a[i][j] == 1){
                
                ke[i].push_back(j);
            }
        }
    }
    
    for(int i=1; i<=n; i++){
        for(int j=0; j<ke[i].size(); j++){
            cout << ke[i][j] << " ";
        }
        cout << endl;
        
    }
    return 0;
}