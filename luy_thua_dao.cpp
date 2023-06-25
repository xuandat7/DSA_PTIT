#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll m = 1e9 + 7;
ll power(ll a, ll n){
    if(n==0)    return 1;
    ll x = power(a, n/2);
    if(n%2==0)  return x*x%m;
    return a*(x*x%m)%m;
}
ll convert(ll n){
    ll ans = 0;
    while(n){
        ans = ans*10 + n%10;
        n/=10;
    }
    return ans;
}
int main()
{
    
    
	int t;
	cin>>t;
	while(t--)
	{
        ll n;
        cin >> n;
        ll tmp = power(n, convert(n));
        cout << tmp;
		cout << endl;
	}	
    return 0;
}