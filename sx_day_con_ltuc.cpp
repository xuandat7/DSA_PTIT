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
        vector<int> v1,v2;
        for(int i=0; i<n; i++){
            cin >> a[i];
            v1.push_back(a[i]);
        }
		sort(a, a+n);
        for(int i=0; i<n; i++){
            if(a[i]!=v1[i]){
                cout << i+1 << ' ';
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(a[i]!=v1[i]){
                cout << i+1 << ' ';
                break;
            }
        }
		cout << endl;
	}	
    return 0;
}