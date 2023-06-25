#include<bits/stdc++.h>
using namespace std;

// su dung thuat toan sap xep chon
int main()
{
    
	
	int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ans = 0;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=0; i<n-1; i++){
            int idx = i;
            
            for(int j = i+1; j<n; j++){
                
                if(a[j] < a[idx]){
                    
                    idx = j;
                }
                
            }
            if(idx != i){
                
                swap(a[i], a[idx]);
                ans++;
                }  
            }
            cout << ans << endl;
    }
    return 0;
}  