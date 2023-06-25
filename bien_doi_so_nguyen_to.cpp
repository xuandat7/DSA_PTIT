#include<bits/stdc++.h>
using namespace std;
bool visited[10005];
int nt[10005];
void sieve(){
    nt[0] = nt[1] = 0;
    for(int i=2; i<10005; i++)  nt[i] = 1;
    for(int i=2; i<=101; i++){
        for(int j=i*i; j<=10005; j+=i){
            nt[j] = 0;
        }
    }
}
int biendoi(string s, string t){
    queue<pair<string, int>> q;
    q.push({s, 0});
    while (!q.empty())
    {
        auto x = q.front();
        q.pop();
        
        string tmp = x.first;
        if(tmp == t)    return x.second;
        for(int i=0; i<4; i++){
            if(i==0){
                for(int j=1; j<=9; j++){
                    tmp[i] = j + '0';
                    if(!visited[stoi(tmp)] && nt[stoi(tmp)]){
                        q.push({tmp, x.second+1});
                        visited[stoi(tmp)] = true;
                    }
                }
            }
            else{
                for(int j=0; j<=9; j++){
                    tmp[i] = j + '0';
                    if(!visited[stoi(tmp)] && nt[stoi(tmp)]){
                        q.push({tmp, x.second+1});
                        visited[stoi(tmp)] = true;
                    }
                }
            }
            tmp = x.first;
        }
    }
    return 0;
    
}

int main(){
    sieve();
    int t; cin >> t;
    while (t--)
    {
        memset(visited, false, sizeof(visited));
        string s, t;
        cin >> s >> t;
        cout << biendoi(s, t);
        cout << endl;
    }
    return 0;
}