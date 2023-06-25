#include<bits/stdc++.h>
using namespace std;
char ch[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
int mark[20][20];
int dx[] = {2,2,-2,-2,1,1,-1,-1};
int dy[] = {1,-1,1,-1, 2, -2, 2, -2};
pair<int, int> xuli(string s){
    for(int i=0; i<8; i++){
        if(s[0] == ch[i]){
            s[0] = i + '0';
        }
    }
    pair<int, int> res;
    res.first = s[0] - '0' + 1;
    res.second = s[1] - '0';
    return res;
}
int quan_ma(string s, string t){
    queue<pair<int, int>> q;
    pair<int, int> en = xuli(t);
    pair<int, int> st = xuli(s);
    int f[10][10] = {};
    f[st.first][st.second] = 1;
    q.push(st);
    while (!q.empty())
    {   

        auto x = q.front();
        
        
        q.pop();
        for(int i=0; i<8; i++){
           
            if(x.first + dx[i] <= 8 && x.first + dx[i] >= 1 && x.second + dy[i] >= 1 && x.second + dy[i] <=8 && !f[x.first + dx[i]][x.second + dy[i]]){
                if(x.first + dx[i] == en.first && x.second + dy[i] == en.second){
                    return f[x.first][x.second];
                }
                q.push({x.first+dx[i], x.second+dy[i]});
                f[x.first + dx[i]][x.second + dy[i]] = f[x.first][x.second] + 1;

            }
        }
        // // di cheo len trai theo chieu doc
        // if(x.first + 2 <= 7 && x.second - 1 > 0 && ){
        //     
        //     mark[x.first+2][x.second-1] = 1;
        // }
        // // di cheo len phai theo chieu doc
        // if(x.first + 2 <= 7 && x.second + 1 <= 8 && !mark[x.first+2][x.second+1]){
        //     q.push({{x.first+2, x.second+1}, cnt+1});
        //     mark[x.first+2][x.second+1] = 1;
        // }
        // // di cheo xuong phai theo chieu doc
        // if(x.first - 2 >= 0 && x.second + 1 <= 8 && !mark[x.first-2][x.second+1]){
        //     q.push({{x.first-2, x.second+1}, cnt+1});
        //     mark[x.first-2][x.second+1] = 1;
        // }
        // // di cheo xuong trai theo chieu doc
        // if(x.first - 2 >= 0 && x.second -1 > 0 && !mark[x.first-2][x.second-1]){
        //     q.push({{x.first-2, x.second-1}, cnt+1});
        //     mark[x.first-2][x.second-1] = 1;
        // }
        // // di cheo xuong trai theo chieu ngang
        // if(x.first - 1 >= 0 && x.second -2 > 0 && !mark[x.first-1][x.second-2]){
        //     q.push({{x.first-1, x.second-2}, cnt+1});
        //     mark[x.first-1][x.second-2] = 1;
        // }
        // // di cheo xuong phai theo chieu ngang
        // if(x.first - 1 >= 0 && x.second +2 <= 8 && !mark[x.first-1][x.second+2]){
        //     q.push({{x.first-1, x.second+2}, cnt+1});
        //     mark[x.first-1][x.second+2] = 1;
        // }
        // // di cheo len phai theo chieu ngang
        // if(x.first + 1 <= 7 && x.second +2 <= 8 && !mark[x.first+1][x.second+2]){
        //     q.push({{x.first+1, x.second+2}, cnt+1});
        //     mark[x.first+1][x.second+2] = 1;
        // }
        // // di cheo len trai theo chieu ngang
        // if(x.first + 1 <= 7 && x.second -2 > 0 && !mark[x.first+1][x.second-2]){
        //     q.push({{x.first+1, x.second-2}, cnt+1});
        //     mark[x.first+1][x.second-2] = 1;
        // }

    }
    return 0;
    
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        memset(mark, 0, sizeof(mark));
        string st, en;
        cin >> st >> en;
        if(st == en) cout << 0;
        else cout << quan_ma(st, en);
        cout << endl;
    }
    return 0;
}