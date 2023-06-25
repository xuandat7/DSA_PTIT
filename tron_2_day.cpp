#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

	int t;
	cin>>t;
	while(t--)
    
	{
        int n,m,x;
        cin >> n >> m;
        multiset<int> s;
        int cnt = n + m;
        while(cnt--)
        {
            cin >> x;
            s.insert(x);
        }
        for(auto i : s) cout << i << ' ';
        cout << endl;
	}	
    return 0;
}