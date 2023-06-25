#include<bits/stdc++.h>
using namespace std;


int main()
{
    
	// int n; cin >> n;
    // int a[n];
    // for(int i=0; i<n; i++)  cin >> a[i];
    // for(int i=0; i<n-1; i++){
        
        
        
    //     int idx = i;
        
    //     for(int j = i+1; j<n; j++){
            
            
    //         if(a[j] < a[idx]){
                
    //             idx = j;
    //         }
            
    //     }
    //     if(idx != i){
            
    //         swap(a[i], a[idx]);
    //     }  
        
    //     cout << "Buoc " << i+1 << ": ";
    //     for(int j = 0; j<n; j++){
            
    //         cout << a[j] << ' ';
    //     }
        
    //     cout << endl;

    // }

    // in nguoc lai
    int n; cin >> n;
    int a[n];
    vector<vector<int>> v(n+1);
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
        }  
        
        
        for(int j = 0; j<n; j++){
            
            v[i].push_back(a[j]);
        }
        


    }
    for(int i=n-2; i>=0; i--){
        cout << "Buoc " << i+1 << ": ";
        for(int j = 0; j<n; j++)
        {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}  