#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
        int n,m; cin >> n >> m;
        int a[n], b[m];
        set<int> hop, v1, v2;
        for(int i=0; i<n; i++){
            cin >> a[i];
            hop.insert(a[i]);
            v1.insert(a[i]);
        }
        for(int i=0; i<m; i++){
            cin >> b[i];
            hop.insert(b[i]);
            v2.insert(b[i]);
        }
        for(int i:hop)  cout << i << ' ';
        cout << endl;
        for(int i:v1){
            if(v2.find(i)!=v2.end())    cout << i << ' ';
        }
		cout << endl;
	}	
    return 0;
}