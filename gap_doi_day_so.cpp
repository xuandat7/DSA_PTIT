#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve(int n, ll k){
    ll x = pow(2, n-1);
    if(k==x)    return n;
    if(k<x)     return solve(n-1, k);
    return solve(n-1, k-x);
}

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n; cin >> n;
        ll k; cin >> k;
		cout << solve(n, k) << endl;
	}	
    return 0;
}