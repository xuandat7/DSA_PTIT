#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

	int t;
	cin>>t;
	while(t--)
	{   
        int n; cin >> n;
        int a[n];
        int ans = -INT_MAX;
        for(int i=0; i<n; i++){
            cin >> a[i];  
        }
		for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(abs(ans) > abs(a[i] + a[j])) ans = a[i] + a[j];
            }
        }
		cout << ans << endl;
	}	
    return 0;
}