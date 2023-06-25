#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000005], b[1000005];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m;
        cin >> m;
        int ans = 0;
        
        for(int i=0; i<m; i++){
            cin >> a[i];
            
        }    
        for(int i=0; i<m-1; i++){
            cin >> b[i];
            
        }
        for(int i=0; i<m-1; i++){
            if(b[i]!=a[i]){
                ans = i;
                break;
            }
        }
        cout << ans+1 << endl;
	}	
    return 0;
}