#include<bits/stdc++.h>
using namespace std;
#define ll long long

int findIdx(int a[], int n){
    int idx = n-1;
    for(int i=n-1; i>0; i--){
        if(a[i] < a[i-1])   idx = i;
    }
    return idx;
}
int tron(int a[], int n, int k){
    int m = findIdx(a, n); 
    if(a[m] == k)   return m;
    if(a[m] < k)    return tron(a, n-1, k)
    return tron(a, n+1, k);
}
int a[1000005];
int main()
{
    
	int t;
	cin>>t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		for(int i=0; i<n; i++)  cin >> a[i];
        cout << findIdx(a, n);


        cout << endl;
	}	
    return 0;
}