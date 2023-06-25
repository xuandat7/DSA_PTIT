#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
        int ok = 0;
		int n, k; cin >> n;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a, a+n);
        for(int i=n-1; i>=2; i--){
            //if(i>0 && a[i-1] == a[i])   continue;
            int l = 0;
            int r = i-1;
            while(l<r){
                ll k = a[i]*a[i];
                ll sum = a[l]*a[l] + a[r]*a[r];
                if(sum == k){
                    ok = 1;
                    break;
                }
                else if(sum < k) l++;
                else{
                    r--;
                }
                
            }
            if(ok)  break;
        }
        if(n<3) ok = 0;
        if(ok)  cout << "YES";
        else cout << "NO";
		cout << endl;
	}	
    return 0;
}