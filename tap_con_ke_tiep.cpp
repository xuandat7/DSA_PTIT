#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[10001];

void next(){
    int i = k;
    // duyet tu phai qua trai neu tim thay a[i] < n - k - i thi dung va cap nhat i
    while(i>=1 && a[i] == n - k + i){
        i--;
    }
    // neu la cau hinh cuoi thi in ra cau hinh dau tien
    if(i==0){
        for(int i=1; i<=k; i++){
            cout << i << ' ';
        }
    }
    // tai a[i] tang them 1, truoc a[i] giu nguyen, sau a[i], phan tu dung truoc bang phan tu dung sau +1
    else{
        a[i]++;
        for(int j=i+1;j<=k; j++){
            a[j] = a[j-1] + 1;
        }
        for(int i=1; i<=k; i++){
            cout << a[i] << ' ';
        }
    }
}
int main(){
    int t; 
    cin >> t;
    while(t--){
        
        cin >> n >> k;
        for(int i=1; i<=k; i++){
            cin >> a[i];
        }
        next();        
        cout << endl;

    }
    return 0;
}