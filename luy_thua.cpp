#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int m = 1e9 + 7;
ll power(ll a, ll n){
    if(n==0)    return 1;
    ll x = power(a, n/2);
    if(n%2==0)  return x*x%m;
    return a*(x*x%m)%m;
}
int main()
{
	int t = 21;
	while(t--)
	{
        ll n, k;
        cin >> n >> k;
        if(n==0 && k ==0)   return 0;
        else cout << power(n, k);
		cout << endl;
	}	
    
}