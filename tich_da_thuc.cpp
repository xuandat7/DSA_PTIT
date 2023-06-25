#include<bits/stdc++.h>
using namespace std;
struct DaThuc{
    int heSo, soMu;
};
int main(){
    int t; cin >> t;
    while (t--)
    {
        int m,n; cin >> n >> m;
        vector<vector<DaThuc>> res;
        DaThuc p[n], q[m];
        for(int i=0; i<n; i++){
            cin >> p[i].heSo;
            p[i].soMu = i;
        }
        for(int i=0; i<m; i++){
            cin >> q[i].heSo;
            q[i].soMu = i;
        }
        for(int i=0; i<n; i++){
            vector<DaThuc> tmp;
            for(int j=0; j<m; j++){
                tmp.push_back({p[i].heSo * q[j].heSo, p[i].soMu + q[j].soMu});
            }
            res.push_back(tmp);
        }
       
        int mu = 0;
        
        while(mu < m+n-1 ){
            int hs = 0;
            for(int i=0; i<res.size(); i++){
                for(int j=0; j<res[i].size(); j++)
                    if(res[i][j].soMu == mu) hs += res[i][j].heSo;     
            }
            cout << hs << ' ';
            mu++;
            
        }
        cout << endl;

    }
    
}