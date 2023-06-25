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
		int n, k; cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a, a+n);
        for(int i=0; i<n-2; i++){
            if(i>0 && a[i-1] == a[i])   continue;
            int l = i+1;
            int r = n-1;
            while(l<r){
                int sum = a[i] + a[l] + a[r];
                if(sum > k) r--;
                else if(sum < k) l++;
                else{
                    //cout << sum << endl;
                    ok = 1;
                    break;
                }
            }
        }
        if(n<3) ok = 0;
        if(ok)  cout << "YES";
        else cout << "NO";
		cout << endl;
	}	
    return 0;
}