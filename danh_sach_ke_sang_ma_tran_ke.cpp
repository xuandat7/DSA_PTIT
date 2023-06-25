#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
int a[1005][1005] = {0};
int main(){
    int n; cin >> n;
    cin.ignore();
    
    vector<pair<int, int>> v;
    for(int i=1; i<=n; i++){
        string s;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> s){
            int tmp = stoi(s);
            a[i][tmp] = 1;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}