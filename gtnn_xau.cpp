#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        map<char, int> mp;
		int k; cin >> k;
        string s; cin >> s;
        for(char x:s)    mp[x]++;
        while(k--){
            int Max = 0;
            char c;
            for(auto i:mp){
                if(i.second > Max){
                    Max = i.second;
                    c = i.first;
                }
            }
            mp[c]--;
        }
        ll ans = 0;
        for(auto i:mp){
            ans += i.second *i.second;
        }
		cout << ans << endl;   
	}	
    return 0;
}