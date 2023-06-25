#include<bits/stdc++.h>
using namespace std;


int main()
{
    
	// int n; cin >> n;
    // int a[n];
    // for(int i=0; i<n; i++)  cin >> a[i];
    // for(int i=0; i<n; i++){
    //     cout << "Buoc " << i << ": ";
    //     for(int j = 0; j<=i; j++){
    //         if(a[j] > a[i]){ 
    //             swap(a[i], a[j]); 
    //         }
    //         cout << a[j] << ' ';
            
    //     }
    //     cout << endl;
        
    // }


    // in nguoc lai 
    int n; cin >> n;
    int a[n];
    vector<vector<int>> v(n+1);
    for(int i=0; i<n; i++)  cin >> a[i];
    for(int i=0; i<n; i++){
        
        for(int j = 0; j<=i; j++){
            // vi in nguoc lai nen phai doi dau > thanh <
            if(a[j] < a[i]){ 
                swap(a[i], a[j]); 
            }
            v[i].push_back(a[j]);
        }
           
        
    }
    for(int i=n-1; i>=0; i--){
        cout << "Buoc " << i << ": ";
        for(int j=i; j>=0; j--){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}  