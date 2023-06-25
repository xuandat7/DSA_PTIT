#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, a[1000005];
int search(int a[], int n, int k){
    int l = 0, r = n-1;
    int mid = -1;
    while(l<=r){
        mid = (l+r)/2;
        if(k > a[mid])  l = mid+1;
        else if(k < a[mid]) r = mid - 1;
        return mid;
    }
    return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin >> n >> k;
        for(int i=0; i<n; i++)  cin >> a[i];
        // int idx = lower_bound(a, a+n, k)-a;
        // if(a[idx] == k) cout << idx+1 <<endl;
        // else cout << "NO"; 
		cout << endl;
	}	
    return 0;
}