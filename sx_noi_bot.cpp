#include<bits/stdc++.h>
using namespace std;


int main()
{
    
	// int n; cin >> n;
    // int a[n];
    // for(int i=0; i<n; i++)  cin >> a[i];
    // for(int i=0; i<n-1; i++){
        
        
    //     int ok = 1;
    //     for(int j = 0; j<n-i-1; j++){
    //         if(a[j] > a[j+1]){
    //             ok = 0;
    //             swap(a[j], a[j+1]);
                
    //         } 
    //     }
    //     if(ok)  break;
    //     cout << "Buoc " << i+1 << ": ";
    //     for(int j = 0; j<n; j++)    cout << a[j] << ' ';
        
    //     cout << endl;

    // }


    // in nguoc lai

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int cnt = 0;
        vector<vector<int>> v(n+1);
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=0; i<n-1; i++){
            
            
            int ok = 1;
            for(int j = 0; j<n-i-1; j++){
                if(a[j] > a[j+1]){
                    ok = 0;
                    swap(a[j], a[j+1]);
                    
                } 
            }
            
            
            for(int j = 0; j<n; j++){
                v[i].push_back(a[j]);
            }
            if(ok)  break;
            cnt++;
            

        }
        for(int i=cnt-1; i>=0; i--){
            cout << "Buoc " << i+1 << ": ";
            for(int j=0; j<n; j++){
                cout << v[i][j] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}  