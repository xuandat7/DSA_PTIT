#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(int a[], int n){
    int l = 0, r = n-1;
    int len = 0;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid] == 0){
            len = mid+1;
            l = mid+1;
        }
        else r = mid -1;
    }
    return len;
}
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i]; 
        cout << solve(a, n);
		cout << endl;
	}	
    return 0;
}