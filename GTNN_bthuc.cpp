#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
int main()
{

	int t;
	cin>>t;
    ll n, sum;
	while(t--)
	{
		cin >> n;
        sum = 0;
        vector<ll> a(n), b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        sort(b.begin(), b.end(), greater<ll>());
        for(int i=0; i<n; i++){
            sum+=a[i]*b[i];
        }
        cout << sum;
		cout << endl;
	}	
    return 0;
}