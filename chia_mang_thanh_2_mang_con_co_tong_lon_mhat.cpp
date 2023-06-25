#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n, k; cin >> n >> k;
        int a[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a+n);
        int Max = -INT_MAX;
        for(int i=0; i<n-k+1; i++){
            int sum1 = 0;
            for(int j=i; j<k+i; j++){
                sum1 += a[j];
            }
            // cout << sum1 << ' ' << sum - sum1 << endl;
            Max = max(abs(sum - sum1 - sum1), Max);
        }
		cout << Max << endl;
	}	
    return 0;
}