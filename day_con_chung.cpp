#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n1,n2,n3;
        cin >> n1 >> n2 >> n3;
        ll a[n1+5], b[n2+5], c[n3+5];
        for(int i=0; i<n1; i++) cin >> a[i];
        for(int i=0; i<n2; i++) cin >> b[i];
        for(int i=0; i<n3; i++) cin >> c[i];
        int ia = 0, ib = 0, ic = 0;
        multiset<ll> res;
        while(ia < n1 && ib < n2 && ic < n3){
            if(a[ia] == b[ib] && b[ib] == c[ic]){
                res.insert(a[ia]);
                ia++;
                ib++;
                ic++;
            }
            else if(a[ia] < b[ib])  ia++;
            else if(b[ib] < c[ic])  ib++;
            else    ic++;
        }
        if(res.empty()) cout << "NO";
        else{
            for(ll i:res)  cout << i << ' ';
        }
		cout << endl;
	}	
    return 0;
}