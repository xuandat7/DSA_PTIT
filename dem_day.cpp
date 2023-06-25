#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll m = 123456789;
ll power(ll n, ll a){
    if(a==0)    return 1;
    ll tmp = power(n, a/2);
    if(a%2==0)  return tmp*tmp%m;
    return n*(tmp*tmp%m)%m;
}
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		ll n;
        cin >> n;
        cout << power(2, n-1);
		cout << endl;
	}	
    return 0;
}