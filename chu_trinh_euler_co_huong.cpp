#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> ke[1005];
int deg_ra[1005], deg_vao[1005];
int main(){
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        // memset(visited, false, sizeof(visited));
        // for(int i=0; i<1005; i++)   ke[i].clear();
        memset(deg_ra, 0, sizeof(deg_ra));
        memset(deg_vao, 0, sizeof(deg_ra));

        for(int i=1; i<=m; i++){
            int x, y; cin >> x >> y;
            deg_ra[x]++;
            deg_vao[y]++;
        }
        bool check = true;
        for(int i=1; i<=n; i++){
            if(deg_ra[i]!=deg_vao[i]){
                check = false;
                break;
            }
        }
        cout << check << endl;
    }
    return 0;
}