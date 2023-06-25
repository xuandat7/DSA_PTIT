#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int m = 1e6 + 5;

int search(ll a[], int n, ll k){
    int ok = 0;
    int l = 0, r = n-1;
    int mid = -1;
    int ans = -1;
    while(l<=r){
        mid = (l+r)/2;
        if(a[mid] > k){
            r = mid-1;
        }
        else{
            ans = max(mid, ans);
            l = mid+1;
        }
        
        
    }
    if(ans != -1)    return ans+1;
    else return -1;
}
ll a[m];
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n; cin >> n;
        ll x; cin >> x;
        
        for(int i=0; i<n; i++)  cin >> a[i];
		cout << search(a, n, x);
        cout << endl;
        //memset(a, 0, n);
	}	
    return 0;
}